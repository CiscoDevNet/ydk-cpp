#ifndef _CISCO_NX_OS_DEVICE_24_
#define _CISCO_NX_OS_DEVICE_24_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_23.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList : public ydk::Entity
{
    public:
        RemoteFloodListEntryList();
        ~RemoteFloodListEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vtep; //type: string
        class RsvtepAttItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems> rsvtepatt_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems : public ydk::Entity
{
    public:
        RsvtepAttItems();
        ~RsvtepAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVtepAttList; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList

        ydk::YList rsvtepatt_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList : public ydk::Entity
{
    public:
        RsVtepAttList();
        ~RsVtepAttList();

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

}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList


class System::BdTableItems::VlanItems::BdEntryList::AfItems : public ydk::Entity
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

        class DomainAfList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList

        ydk::YList domainaf_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList : public ydk::Entity
{
    public:
        DomainAfList();
        ~DomainAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateAfT
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf rd; //type: string
        class RttpItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems
        class CtrlItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems> rttp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems> ctrl_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems : public ydk::Entity
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

        class RttPList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList : public ydk::Entity
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

        ydk::YLeaf type; //type: AggregateRttPType
        ydk::YLeaf isl3; //type: AggregateBooleanFlag
        class EntItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems> ent_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems : public ydk::Entity
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

        class RttEntryList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
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

}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems : public ydk::Entity
{
    public:
        CtrlItems();
        ~CtrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AfCtrlList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList

        ydk::YList afctrl_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList : public ydk::Entity
{
    public:
        AfCtrlList();
        ~AfCtrlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateAfT
        class RttpItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems> rttp_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems : public ydk::Entity
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

        class RttPList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList : public ydk::Entity
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

        ydk::YLeaf type; //type: AggregateRttPType
        ydk::YLeaf isl3; //type: AggregateBooleanFlag
        class EntItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems> ent_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems : public ydk::Entity
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

        class RttEntryList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
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

}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList


class System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems : public ydk::Entity
{
    public:
        RtaggregateVlanMemberAttItems();
        ~RtaggregateVlanMemberAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtAggregateVlanMemberAttList; //type: System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList

        ydk::YList rtaggregatevlanmemberatt_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems


class System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList : public ydk::Entity
{
    public:
        RtAggregateVlanMemberAttList();
        ~RtAggregateVlanMemberAttList();

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

}; // System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList


class System::GlobalConfTableItems : public ydk::Entity
{
    public:
        GlobalConfTableItems();
        ~GlobalConfTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vxlanmc; //type: AggregateBooleanFlag
        ydk::YLeaf agmac; //type: string

}; // System::GlobalConfTableItems


class System::IntfTableItems : public ydk::Entity
{
    public:
        IntfTableItems();
        ~IntfTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IntfItems; //type: System::IntfTableItems::IntfItems
        class SviItems; //type: System::IntfTableItems::SviItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::SviItems> svi_items;
        
}; // System::IntfTableItems


class System::IntfTableItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IntfEntryList; //type: System::IntfTableItems::IntfItems::IntfEntryList

        ydk::YList intfentry_list;
        
}; // System::IntfTableItems::IntfItems


class System::IntfTableItems::IntfItems::IntfEntryList : public ydk::Entity
{
    public:
        IntfEntryList();
        ~IntfEntryList();

        bool has_data() const override;
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
        ydk::YLeaf type; //type: AggregateIntfType
        ydk::YLeaf adminstate; //type: AggregateAdminState
        ydk::YLeaf operstate; //type: AggregateOperState
        ydk::YLeaf trunkvlans; //type: string
        ydk::YLeaf iscontrollerownedintf; //type: boolean
        ydk::YLeaf ownercontrollersidlist; //type: string
        ydk::YLeaf untaggedvlan; //type: string
        ydk::YLeaf untaggedvlanctrluse; //type: boolean
        ydk::YLeaf untaggedvlanexplicitmap; //type: boolean
        class VlanMemberTableItems; //type: System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems
        class RtvpcIntfEntryAttItems; //type: System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems> vlanmembertable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems> rtvpcintfentryatt_items;
        
}; // System::IntfTableItems::IntfItems::IntfEntryList


class System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems : public ydk::Entity
{
    public:
        VlanMemberTableItems();
        ~VlanMemberTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberItems; //type: System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems
        class RsvlanMemberAttItems; //type: System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems> member_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems> rsvlanmemberatt_items;
        
}; // System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems


class System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems : public ydk::Entity
{
    public:
        MemberItems();
        ~MemberItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanMemberEntryList; //type: System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList

        ydk::YList vlanmemberentry_list;
        
}; // System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems


class System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList : public ydk::Entity
{
    public:
        VlanMemberEntryList();
        ~VlanMemberEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: string

}; // System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList


class System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems : public ydk::Entity
{
    public:
        RsvlanMemberAttItems();
        ~RsvlanMemberAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVlanMemberAttList; //type: System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList

        ydk::YList rsvlanmemberatt_list;
        
}; // System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems


class System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList : public ydk::Entity
{
    public:
        RsVlanMemberAttList();
        ~RsVlanMemberAttList();

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

}; // System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList


class System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems : public ydk::Entity
{
    public:
        RtvpcIntfEntryAttItems();
        ~RtvpcIntfEntryAttItems();

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

}; // System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems


class System::IntfTableItems::SviItems : public ydk::Entity
{
    public:
        SviItems();
        ~SviItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SviList; //type: System::IntfTableItems::SviItems::SviList

        ydk::YList svi_list;
        
}; // System::IntfTableItems::SviItems


class System::IntfTableItems::SviItems::SviList : public ydk::Entity
{
    public:
        SviList();
        ~SviList();

        bool has_data() const override;
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
        ydk::YLeaf adminstate; //type: AggregateAdminState
        ydk::YLeaf operstate; //type: AggregateOperState
        ydk::YLeaf ip; //type: string
        ydk::YLeaf ownerctrlrsidlist; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf fwdmode; //type: AggregateFabFwdMode
        ydk::YLeaf vrf; //type: string

}; // System::IntfTableItems::SviItems::SviList


class System::MacTableItems : public ydk::Entity
{
    public:
        MacTableItems();
        ~MacTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DynamicItems; //type: System::MacTableItems::DynamicItems
        class StaticItems; //type: System::MacTableItems::StaticItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::DynamicItems> dynamic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::StaticItems> static_items;
        
}; // System::MacTableItems


class System::MacTableItems::DynamicItems : public ydk::Entity
{
    public:
        DynamicItems();
        ~DynamicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacItems; //type: System::MacTableItems::DynamicItems::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::DynamicItems::MacItems> mac_items;
        
}; // System::MacTableItems::DynamicItems


class System::MacTableItems::DynamicItems::MacItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MacEntryList; //type: System::MacTableItems::DynamicItems::MacItems::MacEntryList

        ydk::YList macentry_list;
        
}; // System::MacTableItems::DynamicItems::MacItems


class System::MacTableItems::DynamicItems::MacItems::MacEntryList : public ydk::Entity
{
    public:
        MacEntryList();
        ~MacEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf vlan; //type: string
        ydk::YLeaf intf; //type: string
        ydk::YLeaf tunneldstip; //type: string
        ydk::YLeaf isintf; //type: boolean
        ydk::YLeaf type; //type: AggregateMacType
        ydk::YLeaf pushedmactobackend; //type: boolean
        class RtmacItems; //type: System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems> rtmac_items;
        
}; // System::MacTableItems::DynamicItems::MacItems::MacEntryList


class System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems : public ydk::Entity
{
    public:
        RtmacItems();
        ~RtmacItems();

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

}; // System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems


class System::MacTableItems::StaticItems : public ydk::Entity
{
    public:
        StaticItems();
        ~StaticItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacItems; //type: System::MacTableItems::StaticItems::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::StaticItems::MacItems> mac_items;
        
}; // System::MacTableItems::StaticItems


class System::MacTableItems::StaticItems::MacItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MacEntryList; //type: System::MacTableItems::StaticItems::MacItems::MacEntryList

        ydk::YList macentry_list;
        
}; // System::MacTableItems::StaticItems::MacItems


class System::MacTableItems::StaticItems::MacItems::MacEntryList : public ydk::Entity
{
    public:
        MacEntryList();
        ~MacEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf vlan; //type: string
        ydk::YLeaf intf; //type: string
        ydk::YLeaf tunneldstip; //type: string
        ydk::YLeaf isintf; //type: boolean
        ydk::YLeaf type; //type: AggregateMacType
        ydk::YLeaf pushedmactobackend; //type: boolean
        class RtmacItems; //type: System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems> rtmac_items;
        
}; // System::MacTableItems::StaticItems::MacItems::MacEntryList


class System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems : public ydk::Entity
{
    public:
        RtmacItems();
        ~RtmacItems();

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

}; // System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems


class System::SystemTableItems : public ydk::Entity
{
    public:
        SystemTableItems();
        ~SystemTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sttime; //type: one of uint64, string
        ydk::YLeaf mgmtip; //type: string
        ydk::YLeaf switchtype; //type: string
        ydk::YLeaf purgedbrequest; //type: one of uint64, string
        ydk::YLeaf iscontrollerconfigured; //type: boolean
        ydk::YLeaf nxdbenabled; //type: boolean
        class ControllerTableItems; //type: System::SystemTableItems::ControllerTableItems
        class CpuTableItems; //type: System::SystemTableItems::CpuTableItems
        class ModuleTableItems; //type: System::SystemTableItems::ModuleTableItems
        class VxlanTableItems; //type: System::SystemTableItems::VxlanTableItems
        class ShadowVxlanTableItems; //type: System::SystemTableItems::ShadowVxlanTableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ControllerTableItems> controllertable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::CpuTableItems> cputable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ModuleTableItems> moduletable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::VxlanTableItems> vxlantable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ShadowVxlanTableItems> shadowvxlantable_items;
        
}; // System::SystemTableItems


class System::SystemTableItems::ControllerTableItems : public ydk::Entity
{
    public:
        ControllerTableItems();
        ~ControllerTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ControllerItems; //type: System::SystemTableItems::ControllerTableItems::ControllerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ControllerTableItems::ControllerItems> controller_items;
        
}; // System::SystemTableItems::ControllerTableItems


class System::SystemTableItems::ControllerTableItems::ControllerItems : public ydk::Entity
{
    public:
        ControllerItems();
        ~ControllerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ControllerEntryList; //type: System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList

        ydk::YList controllerentry_list;
        
}; // System::SystemTableItems::ControllerTableItems::ControllerItems


class System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList : public ydk::Entity
{
    public:
        ControllerEntryList();
        ~ControllerEntryList();

        bool has_data() const override;
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
        ydk::YLeaf readrole; //type: string
        ydk::YLeaf writerole; //type: string
        ydk::YLeaf controllertype; //type: string
        ydk::YLeaf configuredvlans; //type: string
        ydk::YLeaf dedicatedvlans; //type: string
        ydk::YLeaf publishedvlans; //type: string
        ydk::YLeaf vlanresourcestatus; //type: AggregateResourceStatus
        ydk::YLeaf intfresourcestatus; //type: AggregateResourceStatus
        ydk::YLeaf issystemreadyforcontroller; //type: AggregateConfigStatus
        ydk::YLeaf type; //type: AggregateCtrlrType
        ydk::YLeaf vrfprefix; //type: string
        ydk::YLeaf numvrf; //type: uint32
        ydk::YLeaf publishvrf; //type: boolean
        ydk::YLeaf publishnumvrf; //type: uint32
        class ControllerAssignedIntfTableItems; //type: System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems> controllerassignedintftable_items;
        
}; // System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList


class System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems : public ydk::Entity
{
    public:
        ControllerAssignedIntfTableItems();
        ~ControllerAssignedIntfTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ControllerAssignedIntfEntryItems; //type: System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems> controllerassignedintfentry_items;
        
}; // System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems


class System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems : public ydk::Entity
{
    public:
        ControllerAssignedIntfEntryItems();
        ~ControllerAssignedIntfEntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ControllerAssignedIntfEntryList; //type: System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList

        ydk::YList controllerassignedintfentry_list;
        
}; // System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems


class System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList : public ydk::Entity
{
    public:
        ControllerAssignedIntfEntryList();
        ~ControllerAssignedIntfEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intfname; //type: string
        ydk::YLeaf pcid; //type: uint16
        ydk::YLeaf type; //type: AggregateIntfType
        ydk::YLeaf mode; //type: AggregateIntfAssignMode
        ydk::YLeaf published; //type: boolean

}; // System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList


class System::SystemTableItems::CpuTableItems : public ydk::Entity
{
    public:
        CpuTableItems();
        ~CpuTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CpuEntryItems; //type: System::SystemTableItems::CpuTableItems::CpuEntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::CpuTableItems::CpuEntryItems> cpuentry_items;
        
}; // System::SystemTableItems::CpuTableItems


class System::SystemTableItems::CpuTableItems::CpuEntryItems : public ydk::Entity
{
    public:
        CpuEntryItems();
        ~CpuEntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CPUEntryList; //type: System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList

        ydk::YList cpuentry_list;
        
}; // System::SystemTableItems::CpuTableItems::CpuEntryItems


class System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList : public ydk::Entity
{
    public:
        CPUEntryList();
        ~CPUEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: string

}; // System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList


class System::SystemTableItems::ModuleTableItems : public ydk::Entity
{
    public:
        ModuleTableItems();
        ~ModuleTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ModuleEntryItems; //type: System::SystemTableItems::ModuleTableItems::ModuleEntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ModuleTableItems::ModuleEntryItems> moduleentry_items;
        
}; // System::SystemTableItems::ModuleTableItems


class System::SystemTableItems::ModuleTableItems::ModuleEntryItems : public ydk::Entity
{
    public:
        ModuleEntryItems();
        ~ModuleEntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ModuleEntryList; //type: System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList

        ydk::YList moduleentry_list;
        
}; // System::SystemTableItems::ModuleTableItems::ModuleEntryItems


class System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList : public ydk::Entity
{
    public:
        ModuleEntryList();
        ~ModuleEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: string

}; // System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList


class System::SystemTableItems::VxlanTableItems : public ydk::Entity
{
    public:
        VxlanTableItems();
        ~VxlanTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IntfItems; //type: System::SystemTableItems::VxlanTableItems::IntfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::VxlanTableItems::IntfItems> intf_items;
        
}; // System::SystemTableItems::VxlanTableItems


class System::SystemTableItems::VxlanTableItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VxlanInterfaceEntryList; //type: System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList

        ydk::YList vxlaninterfaceentry_list;
        
}; // System::SystemTableItems::VxlanTableItems::IntfItems


class System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList : public ydk::Entity
{
    public:
        VxlanInterfaceEntryList();
        ~VxlanInterfaceEntryList();

        bool has_data() const override;
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
        ydk::YLeaf mytepstatus; //type: AggregateOperState
        ydk::YLeaf hostreachability; //type: AggregateHostReachabilityMode
        ydk::YLeaf controllerid; //type: uint32
        ydk::YLeaf configsource; //type: AggregateConfigSourceType
        ydk::YLeaf primarytunnelip; //type: string
        ydk::YLeaf secondarytunnelip; //type: string
        class LocalBfdItems; //type: System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems> localbfd_items;
        
}; // System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList


class System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems : public ydk::Entity
{
    public:
        LocalBfdItems();
        ~LocalBfdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16

}; // System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems


class System::SystemTableItems::ShadowVxlanTableItems : public ydk::Entity
{
    public:
        ShadowVxlanTableItems();
        ~ShadowVxlanTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IntfItems; //type: System::SystemTableItems::ShadowVxlanTableItems::IntfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ShadowVxlanTableItems::IntfItems> intf_items;
        
}; // System::SystemTableItems::ShadowVxlanTableItems


class System::SystemTableItems::ShadowVxlanTableItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ShadowVxlanInterfaceEntryList; //type: System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList

        ydk::YList shadowvxlaninterfaceentry_list;
        
}; // System::SystemTableItems::ShadowVxlanTableItems::IntfItems


class System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList : public ydk::Entity
{
    public:
        ShadowVxlanInterfaceEntryList();
        ~ShadowVxlanInterfaceEntryList();

        bool has_data() const override;
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
        ydk::YLeaf mytepstatus; //type: AggregateOperState
        ydk::YLeaf hostreachability; //type: AggregateHostReachabilityMode
        ydk::YLeaf controllerid; //type: uint32
        ydk::YLeaf configsource; //type: AggregateConfigSourceType
        ydk::YLeaf primarytunnelip; //type: string
        ydk::YLeaf secondarytunnelip; //type: string

}; // System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList


class System::TunnelIntfTableItems : public ydk::Entity
{
    public:
        TunnelIntfTableItems();
        ~TunnelIntfTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IntfItems; //type: System::TunnelIntfTableItems::IntfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems> intf_items;
        
}; // System::TunnelIntfTableItems


class System::TunnelIntfTableItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelIntfEntryList; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList

        ydk::YList tunnelintfentry_list;
        
}; // System::TunnelIntfTableItems::IntfItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList : public ydk::Entity
{
    public:
        TunnelIntfEntryList();
        ~TunnelIntfEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf destip; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf type; //type: AggregateTunnelType
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf state; //type: AggregateOperState
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf ipvnidbinding; //type: AggregateBooleanFlag
        ydk::YLeaf istunnelcreated; //type: boolean
        ydk::YLeaf istunnelcreatedbycontroller; //type: boolean
        ydk::YLeaf noofmacsseenbeforetunnelcreatedbycontroller; //type: uint32
        ydk::YLeaf eptype; //type: string
        class TunMacTableItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems
        class VnidTableItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems
        class RemoteBfdItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems
        class RtaggregateVtepAttItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems> tunmactable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems> vnidtable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems> remotebfd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems> rtaggregatevtepatt_items;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems : public ydk::Entity
{
    public:
        TunMacTableItems();
        ~TunMacTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsmacItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems> rsmac_items;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems : public ydk::Entity
{
    public:
        RsmacItems();
        ~RsmacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMacList; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList

        ydk::YList rsmac_list;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList : public ydk::Entity
{
    public:
        RsMacList();
        ~RsMacList();

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

}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems : public ydk::Entity
{
    public:
        VnidTableItems();
        ~VnidTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VnidItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems> vnid_items;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems : public ydk::Entity
{
    public:
        VnidItems();
        ~VnidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VnidEntryList; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList

        ydk::YList vnidentry_list;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList : public ydk::Entity
{
    public:
        VnidEntryList();
        ~VnidEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vnid; //type: string
        ydk::YLeaf groupaddr; //type: string

}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems : public ydk::Entity
{
    public:
        RemoteBfdItems();
        ~RemoteBfdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfdstatus; //type: AggregateBfdStatus
        ydk::YLeaf mac; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16

}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems : public ydk::Entity
{
    public:
        RtaggregateVtepAttItems();
        ~RtaggregateVtepAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtAggregateVtepAttList; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList

        ydk::YList rtaggregatevtepatt_list;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList : public ydk::Entity
{
    public:
        RtAggregateVtepAttList();
        ~RtAggregateVtepAttList();

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

}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList


class System::VlanTableItems : public ydk::Entity
{
    public:
        VlanTableItems();
        ~VlanTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VlanItems; //type: System::VlanTableItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VlanTableItems::VlanItems> vlan_items;
        
}; // System::VlanTableItems


class System::VlanTableItems::VlanItems : public ydk::Entity
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

        class VlanEntryList; //type: System::VlanTableItems::VlanItems::VlanEntryList

        ydk::YList vlanentry_list;
        
}; // System::VlanTableItems::VlanItems


class System::VlanTableItems::VlanItems::VlanEntryList : public ydk::Entity
{
    public:
        VlanEntryList();
        ~VlanEntryList();

        bool has_data() const override;
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
        ydk::YLeaf adminstate; //type: AggregateAdminState

}; // System::VlanTableItems::VlanItems::VlanEntryList


class System::VpcDomTableItems : public ydk::Entity
{
    public:
        VpcDomTableItems();
        ~VpcDomTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VpcDomItems; //type: System::VpcDomTableItems::VpcDomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcDomTableItems::VpcDomItems> vpcdom_items;
        
}; // System::VpcDomTableItems


class System::VpcDomTableItems::VpcDomItems : public ydk::Entity
{
    public:
        VpcDomItems();
        ~VpcDomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VpcDomEntryList; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList

        ydk::YList vpcdomentry_list;
        
}; // System::VpcDomTableItems::VpcDomItems


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList : public ydk::Entity
{
    public:
        VpcDomEntryList();
        ~VpcDomEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf domainid; //type: uint16
        ydk::YLeaf keepalivedestip; //type: string
        ydk::YLeaf keepalivesrcip; //type: string
        ydk::YLeaf virtualip; //type: string
        ydk::YLeaf peerip; //type: string
        ydk::YLeaf keepalivests; //type: AggregateVpcKeepaliveStatus
        ydk::YLeaf peerlinksts; //type: AggregateVpcPeerLinkStatus
        ydk::YLeaf vpcrole; //type: VpcRole
        ydk::YLeaf peergw; //type: boolean
        ydk::YLeaf dualactive; //type: boolean
        ydk::YLeaf peerlinkif; //type: string
        class VpcTableItems; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems> vpctable_items;
        
}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems : public ydk::Entity
{
    public:
        VpcTableItems();
        ~VpcTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VpcItems; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems> vpc_items;
        
}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems : public ydk::Entity
{
    public:
        VpcItems();
        ~VpcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VpcEntryList; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList

        ydk::YList vpcentry_list;
        
}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList : public ydk::Entity
{
    public:
        VpcEntryList();
        ~VpcEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpcnum; //type: uint16
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf operstate; //type: AggregateVpcOperStatus
        ydk::YLeaf conschecksts; //type: VpcCompatSt
        ydk::YLeaf conscheckreason; //type: uint32
        class VpcintfItems; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems> vpcintf_items;
        
}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems : public ydk::Entity
{
    public:
        VpcintfItems();
        ~VpcintfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsvpcIntfEntryAttItems; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems> rsvpcintfentryatt_items;
        
}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems : public ydk::Entity
{
    public:
        RsvpcIntfEntryAttItems();
        ~RsvpcIntfEntryAttItems();

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

}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems


class System::VrfTableItems : public ydk::Entity
{
    public:
        VrfTableItems();
        ~VrfTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VrfItems; //type: System::VrfTableItems::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems> vrf_items;
        
}; // System::VrfTableItems


class System::VrfTableItems::VrfItems : public ydk::Entity
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

        class VrfEntryList; //type: System::VrfTableItems::VrfItems::VrfEntryList

        ydk::YList vrfentry_list;
        
}; // System::VrfTableItems::VrfItems


class System::VrfTableItems::VrfItems::VrfEntryList : public ydk::Entity
{
    public:
        VrfEntryList();
        ~VrfEntryList();

        bool has_data() const override;
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
        ydk::YLeaf genname; //type: string
        ydk::YLeaf ctrlrid; //type: uint32
        ydk::YLeaf vnid; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf genextrart; //type: boolean
        ydk::YLeaf templatename; //type: string
        ydk::YLeaf templatestatus; //type: AggregateConfTmplStatus
        ydk::YLeaf shdwtemplatename; //type: string
        ydk::YLeaf shdwvrfgenname; //type: string
        class AfItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems> af_items;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems : public ydk::Entity
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

        class DomainAfList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList

        ydk::YList domainaf_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList : public ydk::Entity
{
    public:
        DomainAfList();
        ~DomainAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateAfT
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf rd; //type: string
        class RttpItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems
        class CtrlItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems> rttp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems> ctrl_items;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems : public ydk::Entity
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

        class RttPList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList : public ydk::Entity
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

        ydk::YLeaf type; //type: AggregateRttPType
        ydk::YLeaf isl3; //type: AggregateBooleanFlag
        class EntItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems> ent_items;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems : public ydk::Entity
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

        class RttEntryList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
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

}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems : public ydk::Entity
{
    public:
        CtrlItems();
        ~CtrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AfCtrlList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList

        ydk::YList afctrl_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList : public ydk::Entity
{
    public:
        AfCtrlList();
        ~AfCtrlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateAfT
        class RttpItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems> rttp_items;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems : public ydk::Entity
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

        class RttPList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList : public ydk::Entity
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

        ydk::YLeaf type; //type: AggregateRttPType
        ydk::YLeaf isl3; //type: AggregateBooleanFlag
        class EntItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems> ent_items;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems : public ydk::Entity
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

        class RttEntryList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
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

}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList


class System::AclItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf upid; //type: uint32
        class ONameItems; //type: System::AclItems::ONameItems
        class VlanItems; //type: System::AclItems::VlanItems
        class MacItems; //type: System::AclItems::MacItems
        class Ipv4Items; //type: System::AclItems::Ipv4Items
        class Ipv6Items; //type: System::AclItems::Ipv6Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::ONameItems> oname_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items> ipv4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items> ipv6_items;
        
}; // System::AclItems


class System::AclItems::ONameItems : public ydk::Entity
{
    public:
        ONameItems();
        ~ONameItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PortGroupList; //type: System::AclItems::ONameItems::PortGroupList

        ydk::YList portgroup_list;
        
}; // System::AclItems::ONameItems


class System::AclItems::ONameItems::PortGroupList : public ydk::Entity
{
    public:
        PortGroupList();
        ~PortGroupList();

        bool has_data() const override;
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
        class SeqItems; //type: System::AclItems::ONameItems::PortGroupList::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::ONameItems::PortGroupList::SeqItems> seq_items;
        
}; // System::AclItems::ONameItems::PortGroupList


class System::AclItems::ONameItems::PortGroupList::SeqItems : public ydk::Entity
{
    public:
        SeqItems();
        ~SeqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortMemberList; //type: System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList

        ydk::YList portmember_list;
        
}; // System::AclItems::ONameItems::PortGroupList::SeqItems


class System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList : public ydk::Entity
{
    public:
        PortMemberList();
        ~PortMemberList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf portop; //type: uint8
        ydk::YLeaf port1; //type: uint16
        ydk::YLeaf port2; //type: uint16
        ydk::YLeaf configstatus; //type: uint8

}; // System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList


class System::AclItems::VlanItems : public ydk::Entity
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

        class VLANACLList; //type: System::AclItems::VlanItems::VLANACLList

        ydk::YList vlanacl_list;
        
}; // System::AclItems::VlanItems


class System::AclItems::VlanItems::VLANACLList : public ydk::Entity
{
    public:
        VLANACLList();
        ~VLANACLList();

        bool has_data() const override;
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
        ydk::YLeaf maxseq; //type: uint32
        ydk::YLeaf upid; //type: uint32
        class SeqItems; //type: System::AclItems::VlanItems::VLANACLList::SeqItems
        class VlanlistItems; //type: System::AclItems::VlanItems::VLANACLList::VlanlistItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::VlanItems::VLANACLList::SeqItems> seq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::VlanItems::VLANACLList::VlanlistItems> vlanlist_items;
        
}; // System::AclItems::VlanItems::VLANACLList


class System::AclItems::VlanItems::VLANACLList::SeqItems : public ydk::Entity
{
    public:
        SeqItems();
        ~SeqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VLANSeqList; //type: System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList

        ydk::YList vlanseq_list;
        
}; // System::AclItems::VlanItems::VLANACLList::SeqItems


class System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList : public ydk::Entity
{
    public:
        VLANSeqList();
        ~VLANSeqList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf peracestatistics; //type: uint8
        ydk::YLeaf upid; //type: uint32
        class MatchItems; //type: System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems
        class ActionItems; //type: System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems> match_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems> action_items;
        
}; // System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList


class System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems : public ydk::Entity
{
    public:
        MatchItems();
        ~MatchItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VLANACLMatchList; //type: System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList

        ydk::YList vlanaclmatch_list;
        
}; // System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems


class System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList : public ydk::Entity
{
    public:
        VLANACLMatchList();
        ~VLANACLMatchList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acltype; //type: uint16
        ydk::YLeaf aclname; //type: string
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList


class System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems : public ydk::Entity
{
    public:
        ActionItems();
        ~ActionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf actiontype; //type: AclVAclActionType
        ydk::YLeaf log; //type: uint8
        ydk::YLeaf redirectintf; //type: string
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems


class System::AclItems::VlanItems::VLANACLList::VlanlistItems : public ydk::Entity
{
    public:
        VlanlistItems();
        ~VlanlistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: string
        ydk::YLeaf operation_; //type: uint8
        ydk::YLeaf listoper; //type: string
        ydk::YLeaf listerr; //type: string
        ydk::YLeaf timestamp; //type: one of uint64, string
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::VlanItems::VLANACLList::VlanlistItems


class System::AclItems::MacItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf upid; //type: uint32
        class StatClearItems; //type: System::AclItems::MacItems::StatClearItems
        class PolicyItems; //type: System::AclItems::MacItems::PolicyItems
        class NameItems; //type: System::AclItems::MacItems::NameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::StatClearItems> statclear_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems> name_items;
        
}; // System::AclItems::MacItems


class System::AclItems::MacItems::StatClearItems : public ydk::Entity
{
    public:
        StatClearItems();
        ~StatClearItems();

        bool has_data() const override;
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
        ydk::YLeaf timestamp; //type: one of uint64, string

}; // System::AclItems::MacItems::StatClearItems


class System::AclItems::MacItems::PolicyItems : public ydk::Entity
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

        ydk::YLeaf upid; //type: uint32
        class IngressItems; //type: System::AclItems::MacItems::PolicyItems::IngressItems
        class EgressItems; //type: System::AclItems::MacItems::PolicyItems::EgressItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems> ingress_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems> egress_items;
        
}; // System::AclItems::MacItems::PolicyItems


class System::AclItems::MacItems::PolicyItems::IngressItems : public ydk::Entity
{
    public:
        IngressItems();
        ~IngressItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf upid; //type: uint32
        class IntfItems; //type: System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems
        class VtyItems; //type: System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems> vty_items;
        
}; // System::AclItems::MacItems::PolicyItems::IngressItems


class System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IfList; //type: System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems


class System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_
        class PortaclItems; //type: System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems> portacl_items;
        
}; // System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList


class System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_


class System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems : public ydk::Entity
{
    public:
        PortaclItems();
        ~PortaclItems();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems


class System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems : public ydk::Entity
{
    public:
        VtyItems();
        ~VtyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_> acl_items;
        
}; // System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems


class System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

        bool has_data() const override;
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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_


class System::AclItems::MacItems::PolicyItems::EgressItems : public ydk::Entity
{
    public:
        EgressItems();
        ~EgressItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf upid; //type: uint32
        class IntfItems; //type: System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems
        class VtyItems; //type: System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems> vty_items;
        
}; // System::AclItems::MacItems::PolicyItems::EgressItems


class System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IfList; //type: System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems


class System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_
        class PortaclItems; //type: System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems> portacl_items;
        
}; // System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList


class System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_


class System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems : public ydk::Entity
{
    public:
        PortaclItems();
        ~PortaclItems();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems


class System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems : public ydk::Entity
{
    public:
        VtyItems();
        ~VtyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_> acl_items;
        
}; // System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems


class System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

        bool has_data() const override;
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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_


class System::AclItems::MacItems::NameItems : public ydk::Entity
{
    public:
        NameItems();
        ~NameItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ACLList; //type: System::AclItems::MacItems::NameItems::ACLList

        ydk::YList acl_list;
        
}; // System::AclItems::MacItems::NameItems


class System::AclItems::MacItems::NameItems::ACLList : public ydk::Entity
{
    public:
        ACLList();
        ~ACLList();

        bool has_data() const override;
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
        ydk::YLeaf upid; //type: uint32
        ydk::YLeaf peracestatistics; //type: uint8
        class ReseqItems; //type: System::AclItems::MacItems::NameItems::ACLList::ReseqItems
        class SeqItems; //type: System::AclItems::MacItems::NameItems::ACLList::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems::ACLList::ReseqItems> reseq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems::ACLList::SeqItems> seq_items;
        
}; // System::AclItems::MacItems::NameItems::ACLList


class System::AclItems::MacItems::NameItems::ACLList::ReseqItems : public ydk::Entity
{
    public:
        ReseqItems();
        ~ReseqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf step; //type: uint32

}; // System::AclItems::MacItems::NameItems::ACLList::ReseqItems


class System::AclItems::MacItems::NameItems::ACLList::SeqItems : public ydk::Entity
{
    public:
        SeqItems();
        ~SeqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SEQList; //type: System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList

        ydk::YList seq_list;
        
}; // System::AclItems::MacItems::NameItems::ACLList::SeqItems


class System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList : public ydk::Entity
{
    public:
        SEQList();
        ~SEQList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf upid; //type: uint32
        class AceItems; //type: System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems
        class RemarkItems; //type: System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems> ace_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems> remark_items;
        
}; // System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList


class System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems : public ydk::Entity
{
    public:
        AceItems();
        ~AceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: uint32
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf redirect; //type: string
        ydk::YLeaf timerange; //type: string
        ydk::YLeaf vlan; //type: uint32
        ydk::YLeaf erspandscp; //type: uint8
        ydk::YLeaf erspangre; //type: uint32
        ydk::YLeaf upid; //type: uint32
        ydk::YLeaf action; //type: AclActionType
        ydk::YLeaf srcprefix; //type: string
        ydk::YLeaf srcprefixmask; //type: string
        ydk::YLeaf dstprefix; //type: string
        ydk::YLeaf dstprefixmask; //type: string
        ydk::YLeaf packets; //type: uint64
        class UdfItems; //type: System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems> udf_items;
        
}; // System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems


class System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems : public ydk::Entity
{
    public:
        UdfItems();
        ~UdfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udf1name; //type: string
        ydk::YLeaf udf1val; //type: uint16
        ydk::YLeaf udf1mask; //type: uint16
        ydk::YLeaf udf2name; //type: string
        ydk::YLeaf udf2val; //type: uint16
        ydk::YLeaf udf2mask; //type: uint16
        ydk::YLeaf udf3name; //type: string
        ydk::YLeaf udf3val; //type: uint16
        ydk::YLeaf udf3mask; //type: uint16
        ydk::YLeaf udf4name; //type: string
        ydk::YLeaf udf4val; //type: uint16
        ydk::YLeaf udf4mask; //type: uint16
        ydk::YLeaf udf5name; //type: string
        ydk::YLeaf udf5val; //type: uint16
        ydk::YLeaf udf5mask; //type: uint16
        ydk::YLeaf udf6name; //type: string
        ydk::YLeaf udf6val; //type: uint16
        ydk::YLeaf udf6mask; //type: uint16
        ydk::YLeaf udf7name; //type: string
        ydk::YLeaf udf7val; //type: uint16
        ydk::YLeaf udf7mask; //type: uint16
        ydk::YLeaf udf8name; //type: string
        ydk::YLeaf udf8val; //type: uint16
        ydk::YLeaf udf8mask; //type: uint16
        ydk::YLeaf udf9name; //type: string
        ydk::YLeaf udf9val; //type: uint16
        ydk::YLeaf udf9mask; //type: uint16
        ydk::YLeaf udf10name; //type: string
        ydk::YLeaf udf10val; //type: uint16
        ydk::YLeaf udf10mask; //type: uint16
        ydk::YLeaf udf11name; //type: string
        ydk::YLeaf udf11val; //type: uint16
        ydk::YLeaf udf11mask; //type: uint16
        ydk::YLeaf udf12name; //type: string
        ydk::YLeaf udf12val; //type: uint16
        ydk::YLeaf udf12mask; //type: uint16
        ydk::YLeaf udf13name; //type: string
        ydk::YLeaf udf13val; //type: uint16
        ydk::YLeaf udf13mask; //type: uint16
        ydk::YLeaf udf14name; //type: string
        ydk::YLeaf udf14val; //type: uint16
        ydk::YLeaf udf14mask; //type: uint16
        ydk::YLeaf udf15name; //type: string
        ydk::YLeaf udf15val; //type: uint16
        ydk::YLeaf udf15mask; //type: uint16
        ydk::YLeaf udf16name; //type: string
        ydk::YLeaf udf16val; //type: uint16
        ydk::YLeaf udf16mask; //type: uint16
        ydk::YLeaf udf17name; //type: string
        ydk::YLeaf udf17val; //type: uint16
        ydk::YLeaf udf17mask; //type: uint16
        ydk::YLeaf udf18name; //type: string
        ydk::YLeaf udf18val; //type: uint16
        ydk::YLeaf udf18mask; //type: uint16

}; // System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems


class System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems : public ydk::Entity
{
    public:
        RemarkItems();
        ~RemarkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf remark; //type: string
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems


class System::AclItems::Ipv4Items : public ydk::Entity
{
    public:
        Ipv4Items();
        ~Ipv4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf upid; //type: uint32
        class StatClearItems; //type: System::AclItems::Ipv4Items::StatClearItems
        class PolicyItems; //type: System::AclItems::Ipv4Items::PolicyItems
        class NameItems; //type: System::AclItems::Ipv4Items::NameItems
        class ONameItems; //type: System::AclItems::Ipv4Items::ONameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::StatClearItems> statclear_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::NameItems> name_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::ONameItems> oname_items;
        
}; // System::AclItems::Ipv4Items


class System::AclItems::Ipv4Items::StatClearItems : public ydk::Entity
{
    public:
        StatClearItems();
        ~StatClearItems();

        bool has_data() const override;
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
        ydk::YLeaf timestamp; //type: one of uint64, string

}; // System::AclItems::Ipv4Items::StatClearItems


class System::AclItems::Ipv4Items::PolicyItems : public ydk::Entity
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

        ydk::YLeaf upid; //type: uint32
        class IngressItems; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems
        class EgressItems; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems> ingress_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems> egress_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems


class System::AclItems::Ipv4Items::PolicyItems::IngressItems : public ydk::Entity
{
    public:
        IngressItems();
        ~IngressItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf upid; //type: uint32
        class IntfItems; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems
        class VtyItems; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems> vty_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IfList; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_
        class PortaclItems; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems> portacl_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems : public ydk::Entity
{
    public:
        PortaclItems();
        ~PortaclItems();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems : public ydk::Entity
{
    public:
        VtyItems();
        ~VtyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_> acl_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

        bool has_data() const override;
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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_


class System::AclItems::Ipv4Items::PolicyItems::EgressItems : public ydk::Entity
{
    public:
        EgressItems();
        ~EgressItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf upid; //type: uint32
        class IntfItems; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems
        class VtyItems; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems> vty_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems


class System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IfList; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems


class System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_
        class PortaclItems; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems> portacl_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList


class System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_


class System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems : public ydk::Entity
{
    public:
        PortaclItems();
        ~PortaclItems();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems


class System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems : public ydk::Entity
{
    public:
        VtyItems();
        ~VtyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_> acl_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_24_ */

