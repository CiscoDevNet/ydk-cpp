#ifndef _CISCO_NX_OS_DEVICE_38_
#define _CISCO_NX_OS_DEVICE_38_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_37.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetricItems : public ydk::Entity
{
    public:
        SmetricItems();
        ~SmetricItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: string
        ydk::YLeaf metricd; //type: uint32
        ydk::YLeaf metricr; //type: uint8
        ydk::YLeaf metricl; //type: uint8
        ydk::YLeaf metricm; //type: uint32
        ydk::YLeaf isbgp; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetricItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetrictItems : public ydk::Entity
{
    public:
        SmetrictItems();
        ~SmetrictItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metrict; //type: RtmapMetricT
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SmetrictItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SdampItems : public ydk::Entity
{
    public:
        SdampItems();
        ~SdampItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf halflife; //type: uint8
        ydk::YLeaf reuse; //type: uint16
        ydk::YLeaf supress; //type: uint16
        ydk::YLeaf duration; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SdampItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprecItems : public ydk::Entity
{
    public:
        SprecItems();
        ~SprecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf precname; //type: RtmapPrecName
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SprecItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Sprecv6Items : public ydk::Entity
{
    public:
        Sprecv6Items();
        ~Sprecv6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf precname; //type: RtmapPrecName
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::Sprecv6Items


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SnssaItems : public ydk::Entity
{
    public:
        SnssaItems();
        ~SnssaItems();

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
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SnssaItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SfwdaddrItems : public ydk::Entity
{
    public:
        SfwdaddrItems();
        ~SfwdaddrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdaddr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SfwdaddrItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhItems : public ydk::Entity
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

        class SetNhList; //type: System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhItems::SetNhList

        ydk::YList setnh_list;
        
}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhItems::SetNhList : public ydk::Entity
{
    public:
        SetNhList();
        ~SetNhList();

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
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhItems::SetNhList


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhpaItems : public ydk::Entity
{
    public:
        NhpaItems();
        ~NhpaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf v4peeraddr; //type: RtmapAdminSt
        ydk::YLeaf v6peeraddr; //type: RtmapAdminSt
        ydk::YLeaf v4unchange; //type: RtmapAdminSt
        ydk::YLeaf v6unchange; //type: RtmapAdminSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::NhpaItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathprependItems : public ydk::Entity
{
    public:
        SetaspathprependItems();
        ~SetaspathprependItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathprependItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathlastasItems : public ydk::Entity
{
    public:
        SetaspathlastasItems();
        ~SetaspathlastasItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lastas; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathlastasItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathtagItems : public ydk::Entity
{
    public:
        SetaspathtagItems();
        ~SetaspathtagItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: RtmapAdminSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SetaspathtagItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::OriginItems : public ydk::Entity
{
    public:
        OriginItems();
        ~OriginItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origint; //type: RtmapOriginT
        ydk::YLeaf asn; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::OriginItems


class System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SevpnItems : public ydk::Entity
{
    public:
        SevpnItems();
        ~SevpnItems();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtmapSetT

}; // System::RpmItems::RtmapItems::RuleList::EntItems::EntryList::SevpnItems


class System::RpmItems::ExpcommlistItems : public ydk::Entity
{
    public:
        ExpcommlistItems();
        ~ExpcommlistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExpandedComListList; //type: System::RpmItems::ExpcommlistItems::ExpandedComListList

        ydk::YList expandedcomlist_list;
        
}; // System::RpmItems::ExpcommlistItems


class System::RpmItems::ExpcommlistItems::ExpandedComListList : public ydk::Entity
{
    public:
        ExpandedComListList();
        ~ExpandedComListList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf regex; //type: string
        ydk::YLeaf expcommname; //type: string
        ydk::YLeaf action; //type: RtmapAction
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::RpmItems::ExpcommlistItems::ExpandedComListList


class System::RpmItems::Pfxlistv4Items : public ydk::Entity
{
    public:
        Pfxlistv4Items();
        ~Pfxlistv4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleV4List; //type: System::RpmItems::Pfxlistv4Items::RuleV4List

        ydk::YList rulev4_list;
        
}; // System::RpmItems::Pfxlistv4Items


class System::RpmItems::Pfxlistv4Items::RuleV4List : public ydk::Entity
{
    public:
        RuleV4List();
        ~RuleV4List();

        bool has_data() const override;
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
        class EntItems; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::EntItems
        class RtrtmapRtDstAttItems; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstAttItems
        class RtrtmapRtDstV6AttItems; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstV6AttItems
        class RtrtmapRtNhAttItems; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhAttItems
        class RtrtmapRtNhV6AttItems; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhV6AttItems
        class RtrtmapRtSrcAttItems; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcAttItems
        class RtrtmapRtSrcV6AttItems; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcV6AttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv4Items::RuleV4List::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstAttItems> rtrtmaprtdstatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstV6AttItems> rtrtmaprtdstv6att_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhAttItems> rtrtmaprtnhatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhV6AttItems> rtrtmaprtnhv6att_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcAttItems> rtrtmaprtsrcatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcV6AttItems> rtrtmaprtsrcv6att_items;
        
}; // System::RpmItems::Pfxlistv4Items::RuleV4List


class System::RpmItems::Pfxlistv4Items::RuleV4List::EntItems : public ydk::Entity
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

        class EntryList; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::EntItems::EntryList

        ydk::YList entry_list;
        
}; // System::RpmItems::Pfxlistv4Items::RuleV4List::EntItems


class System::RpmItems::Pfxlistv4Items::RuleV4List::EntItems::EntryList : public ydk::Entity
{
    public:
        EntryList();
        ~EntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint32
        ydk::YLeaf pfx; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf criteria; //type: RtpfxCriteria
        ydk::YLeaf frompfxlen; //type: uint16
        ydk::YLeaf topfxlen; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf action; //type: RtfltAction

}; // System::RpmItems::Pfxlistv4Items::RuleV4List::EntItems::EntryList


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstAttItems : public ydk::Entity
{
    public:
        RtrtmapRtDstAttItems();
        ~RtrtmapRtDstAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtDstAttList; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList

        ydk::YList rtrtmaprtdstatt_list;
        
}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstAttItems


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList : public ydk::Entity
{
    public:
        RtRtmapRtDstAttList();
        ~RtRtmapRtDstAttList();

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

}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstV6AttItems : public ydk::Entity
{
    public:
        RtrtmapRtDstV6AttItems();
        ~RtrtmapRtDstV6AttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtDstV6AttList; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList

        ydk::YList rtrtmaprtdstv6att_list;
        
}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstV6AttItems


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList : public ydk::Entity
{
    public:
        RtRtmapRtDstV6AttList();
        ~RtRtmapRtDstV6AttList();

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

}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhAttItems : public ydk::Entity
{
    public:
        RtrtmapRtNhAttItems();
        ~RtrtmapRtNhAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtNhAttList; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList

        ydk::YList rtrtmaprtnhatt_list;
        
}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhAttItems


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList : public ydk::Entity
{
    public:
        RtRtmapRtNhAttList();
        ~RtRtmapRtNhAttList();

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

}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhV6AttItems : public ydk::Entity
{
    public:
        RtrtmapRtNhV6AttItems();
        ~RtrtmapRtNhV6AttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtNhV6AttList; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList

        ydk::YList rtrtmaprtnhv6att_list;
        
}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhV6AttItems


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList : public ydk::Entity
{
    public:
        RtRtmapRtNhV6AttList();
        ~RtRtmapRtNhV6AttList();

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

}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcAttItems : public ydk::Entity
{
    public:
        RtrtmapRtSrcAttItems();
        ~RtrtmapRtSrcAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtSrcAttList; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList

        ydk::YList rtrtmaprtsrcatt_list;
        
}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcAttItems


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList : public ydk::Entity
{
    public:
        RtRtmapRtSrcAttList();
        ~RtRtmapRtSrcAttList();

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

}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcV6AttItems : public ydk::Entity
{
    public:
        RtrtmapRtSrcV6AttItems();
        ~RtrtmapRtSrcV6AttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtSrcV6AttList; //type: System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList

        ydk::YList rtrtmaprtsrcv6att_list;
        
}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcV6AttItems


class System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList : public ydk::Entity
{
    public:
        RtRtmapRtSrcV6AttList();
        ~RtRtmapRtSrcV6AttList();

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

}; // System::RpmItems::Pfxlistv4Items::RuleV4List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList


class System::RpmItems::Pfxlistv6Items : public ydk::Entity
{
    public:
        Pfxlistv6Items();
        ~Pfxlistv6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleV6List; //type: System::RpmItems::Pfxlistv6Items::RuleV6List

        ydk::YList rulev6_list;
        
}; // System::RpmItems::Pfxlistv6Items


class System::RpmItems::Pfxlistv6Items::RuleV6List : public ydk::Entity
{
    public:
        RuleV6List();
        ~RuleV6List();

        bool has_data() const override;
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
        class EntItems; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::EntItems
        class RtrtmapRtDstAttItems; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems
        class RtrtmapRtDstV6AttItems; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems
        class RtrtmapRtNhAttItems; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems
        class RtrtmapRtNhV6AttItems; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems
        class RtrtmapRtSrcAttItems; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems
        class RtrtmapRtSrcV6AttItems; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv6Items::RuleV6List::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems> rtrtmaprtdstatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems> rtrtmaprtdstv6att_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems> rtrtmaprtnhatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems> rtrtmaprtnhv6att_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems> rtrtmaprtsrcatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems> rtrtmaprtsrcv6att_items;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List


class System::RpmItems::Pfxlistv6Items::RuleV6List::EntItems : public ydk::Entity
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

        class EntryList; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::EntItems::EntryList

        ydk::YList entry_list;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List::EntItems


class System::RpmItems::Pfxlistv6Items::RuleV6List::EntItems::EntryList : public ydk::Entity
{
    public:
        EntryList();
        ~EntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint32
        ydk::YLeaf pfx; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf criteria; //type: RtpfxCriteria
        ydk::YLeaf frompfxlen; //type: uint16
        ydk::YLeaf topfxlen; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf action; //type: RtfltAction

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::EntItems::EntryList


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems : public ydk::Entity
{
    public:
        RtrtmapRtDstAttItems();
        ~RtrtmapRtDstAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtDstAttList; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList

        ydk::YList rtrtmaprtdstatt_list;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList : public ydk::Entity
{
    public:
        RtRtmapRtDstAttList();
        ~RtRtmapRtDstAttList();

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

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems : public ydk::Entity
{
    public:
        RtrtmapRtDstV6AttItems();
        ~RtrtmapRtDstV6AttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtDstV6AttList; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList

        ydk::YList rtrtmaprtdstv6att_list;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList : public ydk::Entity
{
    public:
        RtRtmapRtDstV6AttList();
        ~RtRtmapRtDstV6AttList();

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

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems : public ydk::Entity
{
    public:
        RtrtmapRtNhAttItems();
        ~RtrtmapRtNhAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtNhAttList; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList

        ydk::YList rtrtmaprtnhatt_list;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList : public ydk::Entity
{
    public:
        RtRtmapRtNhAttList();
        ~RtRtmapRtNhAttList();

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

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems : public ydk::Entity
{
    public:
        RtrtmapRtNhV6AttItems();
        ~RtrtmapRtNhV6AttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtNhV6AttList; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList

        ydk::YList rtrtmaprtnhv6att_list;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList : public ydk::Entity
{
    public:
        RtRtmapRtNhV6AttList();
        ~RtRtmapRtNhV6AttList();

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

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems : public ydk::Entity
{
    public:
        RtrtmapRtSrcAttItems();
        ~RtrtmapRtSrcAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtSrcAttList; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList

        ydk::YList rtrtmaprtsrcatt_list;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList : public ydk::Entity
{
    public:
        RtRtmapRtSrcAttList();
        ~RtRtmapRtSrcAttList();

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

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems : public ydk::Entity
{
    public:
        RtrtmapRtSrcV6AttItems();
        ~RtrtmapRtSrcV6AttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtSrcV6AttList; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList

        ydk::YList rtrtmaprtsrcv6att_list;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList : public ydk::Entity
{
    public:
        RtRtmapRtSrcV6AttList();
        ~RtRtmapRtSrcV6AttList();

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

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList


class System::RpmItems::RtregcomItems : public ydk::Entity
{
    public:
        RtregcomItems();
        ~RtregcomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleList; //type: System::RpmItems::RtregcomItems::RuleList

        ydk::YList rule_list;
        
}; // System::RpmItems::RtregcomItems


class System::RpmItems::RtregcomItems::RuleList : public ydk::Entity
{
    public:
        RuleList();
        ~RuleList();

        bool has_data() const override;
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
        class EntItems; //type: System::RpmItems::RtregcomItems::RuleList::EntItems
        class RtRegCommAttItems; //type: System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtregcomItems::RuleList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems> rtregcommatt_items;
        
}; // System::RpmItems::RtregcomItems::RuleList


class System::RpmItems::RtregcomItems::RuleList::EntItems : public ydk::Entity
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

        class EntryList; //type: System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList

        ydk::YList entry_list;
        
}; // System::RpmItems::RtregcomItems::RuleList::EntItems


class System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList : public ydk::Entity
{
    public:
        EntryList();
        ~EntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf action; //type: RtfltAction
        ydk::YLeaf regex; //type: string
        class ItemItems; //type: System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems> item_items;
        
}; // System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList


class System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems : public ydk::Entity
{
    public:
        ItemItems();
        ~ItemItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ItemList; //type: System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList

        ydk::YList item_list;
        
}; // System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems


class System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList : public ydk::Entity
{
    public:
        ItemList();
        ~ItemList();

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

}; // System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList


class System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems : public ydk::Entity
{
    public:
        RtRegCommAttItems();
        ~RtRegCommAttItems();

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

}; // System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems


class System::IpSrcIfItems : public ydk::Entity
{
    public:
        IpSrcIfItems();
        ~IpSrcIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DnsItems; //type: System::IpSrcIfItems::DnsItems
        class TftpItems; //type: System::IpSrcIfItems::TftpItems
        class FtpItems; //type: System::IpSrcIfItems::FtpItems
        class TelnetItems; //type: System::IpSrcIfItems::TelnetItems
        class SshItems; //type: System::IpSrcIfItems::SshItems
        class PingItems; //type: System::IpSrcIfItems::PingItems
        class TracerouteItems; //type: System::IpSrcIfItems::TracerouteItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpSrcIfItems::DnsItems> dns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpSrcIfItems::TftpItems> tftp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpSrcIfItems::FtpItems> ftp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpSrcIfItems::TelnetItems> telnet_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpSrcIfItems::SshItems> ssh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpSrcIfItems::PingItems> ping_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpSrcIfItems::TracerouteItems> traceroute_items;
        
}; // System::IpSrcIfItems


class System::IpSrcIfItems::DnsItems : public ydk::Entity
{
    public:
        DnsItems();
        ~DnsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DnsSrcIfList; //type: System::IpSrcIfItems::DnsItems::DnsSrcIfList

        ydk::YList dnssrcif_list;
        
}; // System::IpSrcIfItems::DnsItems


class System::IpSrcIfItems::DnsItems::DnsSrcIfList : public ydk::Entity
{
    public:
        DnsSrcIfList();
        ~DnsSrcIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcif; //type: string

}; // System::IpSrcIfItems::DnsItems::DnsSrcIfList


class System::IpSrcIfItems::TftpItems : public ydk::Entity
{
    public:
        TftpItems();
        ~TftpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TftpList; //type: System::IpSrcIfItems::TftpItems::TftpList

        ydk::YList tftp_list;
        
}; // System::IpSrcIfItems::TftpItems


class System::IpSrcIfItems::TftpItems::TftpList : public ydk::Entity
{
    public:
        TftpList();
        ~TftpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcif; //type: string

}; // System::IpSrcIfItems::TftpItems::TftpList


class System::IpSrcIfItems::FtpItems : public ydk::Entity
{
    public:
        FtpItems();
        ~FtpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FtpList; //type: System::IpSrcIfItems::FtpItems::FtpList

        ydk::YList ftp_list;
        
}; // System::IpSrcIfItems::FtpItems


class System::IpSrcIfItems::FtpItems::FtpList : public ydk::Entity
{
    public:
        FtpList();
        ~FtpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcif; //type: string

}; // System::IpSrcIfItems::FtpItems::FtpList


class System::IpSrcIfItems::TelnetItems : public ydk::Entity
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

        class TelnetList; //type: System::IpSrcIfItems::TelnetItems::TelnetList

        ydk::YList telnet_list;
        
}; // System::IpSrcIfItems::TelnetItems


class System::IpSrcIfItems::TelnetItems::TelnetList : public ydk::Entity
{
    public:
        TelnetList();
        ~TelnetList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcif; //type: string

}; // System::IpSrcIfItems::TelnetItems::TelnetList


class System::IpSrcIfItems::SshItems : public ydk::Entity
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

        class SshList; //type: System::IpSrcIfItems::SshItems::SshList

        ydk::YList ssh_list;
        
}; // System::IpSrcIfItems::SshItems


class System::IpSrcIfItems::SshItems::SshList : public ydk::Entity
{
    public:
        SshList();
        ~SshList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcif; //type: string

}; // System::IpSrcIfItems::SshItems::SshList


class System::IpSrcIfItems::PingItems : public ydk::Entity
{
    public:
        PingItems();
        ~PingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PingList; //type: System::IpSrcIfItems::PingItems::PingList

        ydk::YList ping_list;
        
}; // System::IpSrcIfItems::PingItems


class System::IpSrcIfItems::PingItems::PingList : public ydk::Entity
{
    public:
        PingList();
        ~PingList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcif; //type: string

}; // System::IpSrcIfItems::PingItems::PingList


class System::IpSrcIfItems::TracerouteItems : public ydk::Entity
{
    public:
        TracerouteItems();
        ~TracerouteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TracerouteList; //type: System::IpSrcIfItems::TracerouteItems::TracerouteList

        ydk::YList traceroute_list;
        
}; // System::IpSrcIfItems::TracerouteItems


class System::IpSrcIfItems::TracerouteItems::TracerouteList : public ydk::Entity
{
    public:
        TracerouteList();
        ~TracerouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcif; //type: string

}; // System::IpSrcIfItems::TracerouteItems::TracerouteList


class System::SwpkgsItems : public ydk::Entity
{
    public:
        SwpkgsItems();
        ~SwpkgsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RpmactionItems; //type: System::SwpkgsItems::RpmactionItems
        class RpminfoItems; //type: System::SwpkgsItems::RpminfoItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SwpkgsItems::RpmactionItems> rpmaction_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SwpkgsItems::RpminfoItems> rpminfo_items;
        
}; // System::SwpkgsItems


class System::SwpkgsItems::RpmactionItems : public ydk::Entity
{
    public:
        RpmactionItems();
        ~RpmactionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pkgaction; //type: SwpkgsPackageAction
        ydk::YLeaf url; //type: string
        ydk::YLeaf lastactionstatus; //type: string

}; // System::SwpkgsItems::RpmactionItems


class System::SwpkgsItems::RpminfoItems : public ydk::Entity
{
    public:
        RpminfoItems();
        ~RpminfoItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RpmInfoList; //type: System::SwpkgsItems::RpminfoItems::RpmInfoList

        ydk::YList rpminfo_list;
        
}; // System::SwpkgsItems::RpminfoItems


class System::SwpkgsItems::RpminfoItems::RpmInfoList : public ydk::Entity
{
    public:
        RpmInfoList();
        ~RpmInfoList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: SwpkgsOperState
        ydk::YLeaf lastaction; //type: SwpkgsPackageAction
        ydk::YLeaf lastactionresult; //type: SwpkgsPackageActionResult
        ydk::YLeaf lastactionfailedreason; //type: string

}; // System::SwpkgsItems::RpminfoItems::RpmInfoList


class System::SysmgrItems : public ydk::Entity
{
    public:
        SysmgrItems();
        ~SysmgrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SysItems; //type: System::SysmgrItems::SysItems
        class SysCfgItems; //type: System::SysmgrItems::SysCfgItems
        class ConfigItems; //type: System::SysmgrItems::ConfigItems
        class MemalertItems; //type: System::SysmgrItems::MemalertItems
        class SwitchoveralertItems; //type: System::SysmgrItems::SwitchoveralertItems
        class CoreItems; //type: System::SysmgrItems::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::SysItems> sys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::SysCfgItems> syscfg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::ConfigItems> config_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::MemalertItems> memalert_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::SwitchoveralertItems> switchoveralert_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::CoreItems> core_items;
        
}; // System::SysmgrItems


class System::SysmgrItems::SysItems : public ydk::Entity
{
    public:
        SysItems();
        ~SysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SupItems; //type: System::SysmgrItems::SysItems::SupItems
        class ImageItems; //type: System::SysmgrItems::SysItems::ImageItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::SysItems::SupItems> sup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::SysItems::ImageItems> image_items;
        
}; // System::SysmgrItems::SysItems


class System::SysmgrItems::SysItems::SupItems : public ydk::Entity
{
    public:
        SupItems();
        ~SupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SupStList; //type: System::SysmgrItems::SysItems::SupItems::SupStList

        ydk::YList supst_list;
        
}; // System::SysmgrItems::SysItems::SupItems


class System::SysmgrItems::SysItems::SupItems::SupStList : public ydk::Entity
{
    public:
        SupStList();
        ~SupStList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: SysmgrSupT
        ydk::YLeaf operst; //type: SysmgrSupSt

}; // System::SysmgrItems::SysItems::SupItems::SupStList


class System::SysmgrItems::SysItems::ImageItems : public ydk::Entity
{
    public:
        ImageItems();
        ~ImageItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FwStList; //type: System::SysmgrItems::SysItems::ImageItems::FwStList

        ydk::YList fwst_list;
        
}; // System::SysmgrItems::SysItems::ImageItems


class System::SysmgrItems::SysItems::ImageItems::FwStList : public ydk::Entity
{
    public:
        FwStList();
        ~FwStList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: SysmgrFwT
        ydk::YLeaf mode; //type: SysmgrFwMode

}; // System::SysmgrItems::SysItems::ImageItems::FwStList


class System::SysmgrItems::SysCfgItems : public ydk::Entity
{
    public:
        SysCfgItems();
        ~SysCfgItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cfgmode; //type: SysmgrCfgMode
        ydk::YLeaf operdatamode; //type: SysmgrOperDataMode

}; // System::SysmgrItems::SysCfgItems


class System::SysmgrItems::ConfigItems : public ydk::Entity
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

        ydk::YLeaf adminst; //type: SysmgrCfgAdminSt
        ydk::YLeaf tracemask; //type: uint32
        ydk::YLeaf operst; //type: SysmgrOperState
        ydk::YLeaf fastreloadtimer; //type: uint32
        class SystemcoreItems; //type: System::SysmgrItems::ConfigItems::SystemcoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::ConfigItems::SystemcoreItems> systemcore_items;
        
}; // System::SysmgrItems::ConfigItems


class System::SysmgrItems::ConfigItems::SystemcoreItems : public ydk::Entity
{
    public:
        SystemcoreItems();
        ~SystemcoreItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: SysmgrCoreAdminSt
        ydk::YLeaf uritype; //type: SysmgrCoreUriType
        ydk::YLeaf server; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf operst; //type: SysmgrOperState

}; // System::SysmgrItems::ConfigItems::SystemcoreItems


class System::SysmgrItems::MemalertItems : public ydk::Entity
{
    public:
        MemalertItems();
        ~MemalertItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: SysmgrAdminState
        ydk::YLeaf applet; //type: string
        ydk::YLeaf module; //type: uint32
        ydk::YLeaf major_; //type: uint32
        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf clear; //type: uint32
        ydk::YLeaf operst; //type: SysmgrOperState

}; // System::SysmgrItems::MemalertItems


class System::SysmgrItems::SwitchoveralertItems : public ydk::Entity
{
    public:
        SwitchoveralertItems();
        ~SwitchoveralertItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: SysmgrAdminState
        ydk::YLeaf applet; //type: string
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf time; //type: uint32
        ydk::YLeaf operst; //type: SysmgrOperState

}; // System::SysmgrItems::SwitchoveralertItems


class System::SysmgrItems::CoreItems : public ydk::Entity
{
    public:
        CoreItems();
        ~CoreItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CoresList; //type: System::SysmgrItems::CoreItems::CoresList

        ydk::YList cores_list;
        
}; // System::SysmgrItems::CoreItems


class System::SysmgrItems::CoreItems::CoresList : public ydk::Entity
{
    public:
        CoresList();
        ~CoresList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dest; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::SysmgrItems::CoreItems::CoresList


class System::ShowversionItems : public ydk::Entity
{
    public:
        ShowversionItems();
        ~ShowversionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf copyright; //type: string
        ydk::YLeaf biosversion; //type: string
        ydk::YLeaf nxosversion; //type: string
        ydk::YLeaf bioscompiletime; //type: string
        ydk::YLeaf nxosimagefile; //type: string
        ydk::YLeaf nxoscompiletime; //type: string
        ydk::YLeaf bootflashsize; //type: uint32
        ydk::YLeaf kerneluptime; //type: string
        ydk::YLeaf lastresettime; //type: string
        ydk::YLeaf lastresetreason; //type: string
        ydk::YLeaf lastresetsysversion; //type: string
        ydk::YLeaf lastresetservice; //type: string
        ydk::YLeaf plugin; //type: string
        ydk::YLeaf activepackage; //type: string

}; // System::ShowversionItems


class System::TcpudpItems : public ydk::Entity
{
    public:
        TcpudpItems();
        ~TcpudpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::TcpudpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TcpudpItems::InstItems> inst_items;
        
}; // System::TcpudpItems


class System::TcpudpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf synwaittime; //type: uint16
        ydk::YLeaf pathmtudiscovery; //type: NwAdminSt___
        ydk::YLeaf tcpmssbytes; //type: uint16
        ydk::YLeaf tcpstartportrange; //type: uint16
        ydk::YLeaf tcpendportrange; //type: uint16
        ydk::YLeaf dscplop; //type: uint16
        class LocalportItems; //type: System::TcpudpItems::InstItems::LocalportItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TcpudpItems::InstItems::LocalportItems> localport_items;
        
}; // System::TcpudpItems::InstItems


class System::TcpudpItems::InstItems::LocalportItems : public ydk::Entity
{
    public:
        LocalportItems();
        ~LocalportItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf kstackstartport; //type: uint16
        ydk::YLeaf kstackendport; //type: uint16
        ydk::YLeaf netstackstartport; //type: uint16
        ydk::YLeaf netstackendport; //type: uint16
        ydk::YLeaf natstartport; //type: uint16
        ydk::YLeaf natendport; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string

}; // System::TcpudpItems::InstItems::LocalportItems


class System::TermlItems : public ydk::Entity
{
    public:
        TermlItems();
        ~TermlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LnItems; //type: System::TermlItems::LnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems> ln_items;
        
}; // System::TermlItems


class System::TermlItems::LnItems : public ydk::Entity
{
    public:
        LnItems();
        ~LnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ConsItems; //type: System::TermlItems::LnItems::ConsItems
        class VtyItems; //type: System::TermlItems::LnItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems> cons_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::VtyItems> vty_items;
        
}; // System::TermlItems::LnItems


class System::TermlItems::LnItems::ConsItems : public ydk::Entity
{
    public:
        ConsItems();
        ~ConsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExecTmeoutItems; //type: System::TermlItems::LnItems::ConsItems::ExecTmeoutItems
        class WdthItems; //type: System::TermlItems::LnItems::ConsItems::WdthItems
        class LgthItems; //type: System::TermlItems::LnItems::ConsItems::LgthItems
        class SpeedItems; //type: System::TermlItems::LnItems::ConsItems::SpeedItems
        class DatabitsItems; //type: System::TermlItems::LnItems::ConsItems::DatabitsItems
        class StopbitsItems; //type: System::TermlItems::LnItems::ConsItems::StopbitsItems
        class ParityItems; //type: System::TermlItems::LnItems::ConsItems::ParityItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::ExecTmeoutItems> exectmeout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::WdthItems> wdth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::LgthItems> lgth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::SpeedItems> speed_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::DatabitsItems> databits_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::StopbitsItems> stopbits_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::ParityItems> parity_items;
        
}; // System::TermlItems::LnItems::ConsItems


class System::TermlItems::LnItems::ConsItems::ExecTmeoutItems : public ydk::Entity
{
    public:
        ExecTmeoutItems();
        ~ExecTmeoutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf timeout; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::ExecTmeoutItems


class System::TermlItems::LnItems::ConsItems::WdthItems : public ydk::Entity
{
    public:
        WdthItems();
        ~WdthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf termwidth; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::WdthItems


class System::TermlItems::LnItems::ConsItems::LgthItems : public ydk::Entity
{
    public:
        LgthItems();
        ~LgthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf termlength; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::LgthItems


class System::TermlItems::LnItems::ConsItems::SpeedItems : public ydk::Entity
{
    public:
        SpeedItems();
        ~SpeedItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf speed; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::SpeedItems


class System::TermlItems::LnItems::ConsItems::DatabitsItems : public ydk::Entity
{
    public:
        DatabitsItems();
        ~DatabitsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf databits; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::DatabitsItems


class System::TermlItems::LnItems::ConsItems::StopbitsItems : public ydk::Entity
{
    public:
        StopbitsItems();
        ~StopbitsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf stopbits; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::StopbitsItems


class System::TermlItems::LnItems::ConsItems::ParityItems : public ydk::Entity
{
    public:
        ParityItems();
        ~ParityItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf parity; //type: TerminalTermParity

}; // System::TermlItems::LnItems::ConsItems::ParityItems


class System::TermlItems::LnItems::VtyItems : public ydk::Entity
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

        class ExecTmeoutItems; //type: System::TermlItems::LnItems::VtyItems::ExecTmeoutItems
        class AbsTmeoutItems; //type: System::TermlItems::LnItems::VtyItems::AbsTmeoutItems
        class SsLmtItems; //type: System::TermlItems::LnItems::VtyItems::SsLmtItems
        class LgoutWarningItems; //type: System::TermlItems::LnItems::VtyItems::LgoutWarningItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::VtyItems::ExecTmeoutItems> exectmeout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::VtyItems::AbsTmeoutItems> abstmeout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::VtyItems::SsLmtItems> sslmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::VtyItems::LgoutWarningItems> lgoutwarning_items;
        
}; // System::TermlItems::LnItems::VtyItems


class System::TermlItems::LnItems::VtyItems::ExecTmeoutItems : public ydk::Entity
{
    public:
        ExecTmeoutItems();
        ~ExecTmeoutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf timeout; //type: uint32

}; // System::TermlItems::LnItems::VtyItems::ExecTmeoutItems


class System::TermlItems::LnItems::VtyItems::AbsTmeoutItems : public ydk::Entity
{
    public:
        AbsTmeoutItems();
        ~AbsTmeoutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf timeout; //type: uint32

}; // System::TermlItems::LnItems::VtyItems::AbsTmeoutItems


class System::TermlItems::LnItems::VtyItems::SsLmtItems : public ydk::Entity
{
    public:
        SsLmtItems();
        ~SsLmtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seslmt; //type: uint32

}; // System::TermlItems::LnItems::VtyItems::SsLmtItems


class System::TermlItems::LnItems::VtyItems::LgoutWarningItems : public ydk::Entity
{
    public:
        LgoutWarningItems();
        ~LgoutWarningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lgtwarn; //type: uint32

}; // System::TermlItems::LnItems::VtyItems::LgoutWarningItems


class System::TermlogItems : public ydk::Entity
{
    public:
        TermlogItems();
        ~TermlogItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf logshowcommand; //type: boolean

}; // System::TermlogItems


class System::TestRuleItems : public ydk::Entity
{
    public:
        TestRuleItems();
        ~TestRuleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CRuleList; //type: System::TestRuleItems::CRuleList

        ydk::YList crule_list;
        
}; // System::TestRuleItems


class System::TestRuleItems::CRuleList : public ydk::Entity
{
    public:
        CRuleList();
        ~CRuleList();

        bool has_data() const override;
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
        ydk::YLeaf pechunkname; //type: string
        ydk::YLeaf testclientchunkname; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf trig; //type: TestTrig
        ydk::YLeaf freq; //type: one of uint64, string

}; // System::TestRuleItems::CRuleList


class System::TestRsltItems : public ydk::Entity
{
    public:
        TestRsltItems();
        ~TestRsltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CRsltList; //type: System::TestRsltItems::CRsltList

        ydk::YList crslt_list;
        
}; // System::TestRsltItems


class System::TestRsltItems::CRsltList : public ydk::Entity
{
    public:
        CRsltList();
        ~CRsltList();

        bool has_data() const override;
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
        ydk::YLeaf ts; //type: one of uint64, string
        ydk::YLeaf trig; //type: TestTrig
        ydk::YLeaf operst; //type: TestOperSt
        ydk::YLeaf qual; //type: string

}; // System::TestRsltItems::CRsltList


class System::TunnelItems : public ydk::Entity
{
    public:
        TunnelItems();
        ~TunnelItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IfList; //type: System::TunnelItems::IfList

        ydk::YList if_list;
        
}; // System::TunnelItems


class System::TunnelItems::IfList : public ydk::Entity
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
        ydk::YLeaf src; //type: string
        ydk::YLeaf dest; //type: string
        ydk::YLeaf ttype; //type: TunnelTunnelQual
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf cfgdmtu; //type: uint32
        ydk::YLeaf keepalvintvl; //type: uint32
        ydk::YLeaf keepalvretries; //type: uint32
        ydk::YLeaf adminst; //type: TunnelAdminSt
        ydk::YLeaf type; //type: string
        ydk::YLeaf tlayer; //type: TunnelLayerT
        ydk::YLeaf mac; //type: string
        ydk::YLeaf operst; //type: TunnelOperSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class DepItems; //type: System::TunnelItems::IfList::DepItems
        class VnodeItems; //type: System::TunnelItems::IfList::VnodeItems
        class IdepItems; //type: System::TunnelItems::IfList::IdepItems
        class OdevItems; //type: System::TunnelItems::IfList::OdevItems
        class BankItems; //type: System::TunnelItems::IfList::BankItems
        class PortifItems; //type: System::TunnelItems::IfList::PortifItems
        class RtvrfMbrItems; //type: System::TunnelItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::TunnelItems::IfList::RtnwPathToIfItems
        class RstunnelMbrIfsItems; //type: System::TunnelItems::IfList::RstunnelMbrIfsItems
        class RstunnelToLooseNodeItems; //type: System::TunnelItems::IfList::RstunnelToLooseNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::DepItems> dep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::IdepItems> idep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems> odev_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::BankItems> bank_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::PortifItems> portif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::RstunnelMbrIfsItems> rstunnelmbrifs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::RstunnelToLooseNodeItems> rstunneltoloosenode_items;
        
}; // System::TunnelItems::IfList


class System::TunnelItems::IfList::DepItems : public ydk::Entity
{
    public:
        DepItems();
        ~DepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DEpList; //type: System::TunnelItems::IfList::DepItems::DEpList

        ydk::YList dep_list;
        
}; // System::TunnelItems::IfList::DepItems


class System::TunnelItems::IfList::DepItems::DEpList : public ydk::Entity
{
    public:
        DEpList();
        ~DEpList();

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
        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string

}; // System::TunnelItems::IfList::DepItems::DEpList


class System::TunnelItems::IfList::VnodeItems : public ydk::Entity
{
    public:
        VnodeItems();
        ~VnodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VNodeList; //type: System::TunnelItems::IfList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::TunnelItems::IfList::VnodeItems


class System::TunnelItems::IfList::VnodeItems::VNodeList : public ydk::Entity
{
    public:
        VNodeList();
        ~VNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class RtfvVNodeItems; //type: System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::TunnelItems::IfList::VnodeItems::VNodeList


class System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
{
    public:
        RtfvVNodeItems();
        ~RtfvVNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvVNodeList; //type: System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems


class System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
{
    public:
        RtFvVNodeList();
        ~RtFvVNodeList();

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

}; // System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
{
    public:
        RslNodeItems();
        ~RslNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLNodeList; //type: System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems


class System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
{
    public:
        RsLNodeList();
        ~RsLNodeList();

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

}; // System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::TunnelItems::IfList::IdepItems : public ydk::Entity
{
    public:
        IdepItems();
        ~IdepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDEpList; //type: System::TunnelItems::IfList::IdepItems::IDEpList

        ydk::YList idep_list;
        
}; // System::TunnelItems::IfList::IdepItems


class System::TunnelItems::IfList::IdepItems::IDEpList : public ydk::Entity
{
    public:
        IDEpList();
        ~IDEpList();

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
        ydk::YLeaf encap; //type: string
        ydk::YLeaf eppdn; //type: string
        ydk::YLeaf compvmdn; //type: string
        ydk::YLeaf comphvdn; //type: string
        ydk::YLeaf epgid; //type: string
        ydk::YLeaf ephostaddr; //type: string
        ydk::YLeaf hypervisorname; //type: string
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf containername; //type: string
        ydk::YLeaf transitionstatus; //type: OpflexEpTransitionStatus
        ydk::YLeaf eppdownloadhint; //type: OpflexEppDownloadHint
        ydk::YLeaf handle; //type: uint64
        ydk::YLeaf insttype; //type: CompInstType_
        ydk::YLeaf pcifid; //type: uint32
        ydk::YLeaf state; //type: CompNicState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string
        class IdepcntrItems; //type: System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems
        class VdepItems; //type: System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems> idepcntr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems> vdep_items;
        
}; // System::TunnelItems::IfList::IdepItems::IDEpList


class System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems : public ydk::Entity
{
    public:
        IdepcntrItems();
        ~IdepcntrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDEpCntrList; //type: System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList

        ydk::YList idepcntr_list;
        
}; // System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems


class System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList : public ydk::Entity
{
    public:
        IDEpCntrList();
        ~IDEpCntrList();

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
        ydk::YLeaf encap; //type: string
        ydk::YLeaf direction; //type: OpflexDirection
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList


class System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems : public ydk::Entity
{
    public:
        VdepItems();
        ~VdepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VDEpList; //type: System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList

        ydk::YList vdep_list;
        
}; // System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems


class System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList : public ydk::Entity
{
    public:
        VDEpList();
        ~VDEpList();

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
        ydk::YLeaf encap; //type: string
        ydk::YLeaf brifid; //type: string
        ydk::YLeaf epgid; //type: string
        ydk::YLeaf insttype; //type: CompInstType_
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string
        class RsvNodeItems; //type: System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems> rsvnode_items;
        
}; // System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList


class System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems : public ydk::Entity
{
    public:
        RsvNodeItems();
        ~RsvNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVNodeList; //type: System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList

        ydk::YList rsvnode_list;
        
}; // System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems


class System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList : public ydk::Entity
{
    public:
        RsVNodeList();
        ~RsVNodeList();

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

}; // System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList


class System::TunnelItems::IfList::OdevItems : public ydk::Entity
{
    public:
        OdevItems();
        ~OdevItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ODevList; //type: System::TunnelItems::IfList::OdevItems::ODevList

        ydk::YList odev_list;
        
}; // System::TunnelItems::IfList::OdevItems


class System::TunnelItems::IfList::OdevItems::ODevList : public ydk::Entity
{
    public:
        ODevList();
        ~ODevList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf hostname; //type: string
        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf numhb; //type: uint32
        ydk::YLeaf lastnumhb; //type: uint32
        ydk::YLeaf hbstatus; //type: OpflexHbStatus
        ydk::YLeaf operst; //type: OpflexDevOperState
        ydk::YLeaf maxmisshb; //type: uint32
        ydk::YLeaf pcifid; //type: uint32
        ydk::YLeaf transitionstatus; //type: OpflexEpTransitionStatus
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf state; //type: CompHostState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class OdevcapItems; //type: System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems
        class VnodeItems; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems
        class OpnicItems; //type: System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems> odevcap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems> opnic_items;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList


class System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems : public ydk::Entity
{
    public:
        OdevcapItems();
        ~OdevcapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems : public ydk::Entity
{
    public:
        VnodeItems();
        ~VnodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VNodeList; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList : public ydk::Entity
{
    public:
        VNodeList();
        ~VNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class RtfvVNodeItems; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
{
    public:
        RtfvVNodeItems();
        ~RtfvVNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvVNodeList; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
{
    public:
        RtFvVNodeList();
        ~RtFvVNodeList();

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

}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
{
    public:
        RslNodeItems();
        ~RslNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLNodeList; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
{
    public:
        RsLNodeList();
        ~RsLNodeList();

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

}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems : public ydk::Entity
{
    public:
        OpnicItems();
        ~OpnicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OPNicList; //type: System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList

        ydk::YList opnic_list;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems


class System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList : public ydk::Entity
{
    public:
        OPNicList();
        ~OPNicList();

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
        ydk::YLeaf state; //type: CompNicState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList


class System::TunnelItems::IfList::BankItems : public ydk::Entity
{
    public:
        BankItems();
        ~BankItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BankList; //type: System::TunnelItems::IfList::BankItems::BankList

        ydk::YList bank_list;
        
}; // System::TunnelItems::IfList::BankItems


class System::TunnelItems::IfList::BankItems::BankList : public ydk::Entity
{
    public:
        BankList();
        ~BankList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AcBankT
        class DbgIngrTepItems; //type: System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems
        class DbgEgrTepItems; //type: System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems> dbgingrtep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems> dbgegrtep_items;
        
}; // System::TunnelItems::IfList::BankItems::BankList


class System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems : public ydk::Entity
{
    public:
        DbgIngrTepItems();
        ~DbgIngrTepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems


class System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems : public ydk::Entity
{
    public:
        DbgEgrTepItems();
        ~DbgEgrTepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems


class System::TunnelItems::IfList::PortifItems : public ydk::Entity
{
    public:
        PortifItems();
        ~PortifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortIfList; //type: System::TunnelItems::IfList::PortifItems::PortIfList

        ydk::YList portif_list;
        
}; // System::TunnelItems::IfList::PortifItems


class System::TunnelItems::IfList::PortifItems::PortIfList : public ydk::Entity
{
    public:
        PortIfList();
        ~PortIfList();

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
        class BankItems; //type: System::TunnelItems::IfList::PortifItems::PortIfList::BankItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::PortifItems::PortIfList::BankItems> bank_items;
        
}; // System::TunnelItems::IfList::PortifItems::PortIfList


class System::TunnelItems::IfList::PortifItems::PortIfList::BankItems : public ydk::Entity
{
    public:
        BankItems();
        ~BankItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BankList; //type: System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList

        ydk::YList bank_list;
        
}; // System::TunnelItems::IfList::PortifItems::PortIfList::BankItems


class System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList : public ydk::Entity
{
    public:
        BankList();
        ~BankList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AcBankT
        class DbgIngrTepItems; //type: System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems
        class DbgEgrTepItems; //type: System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems> dbgingrtep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems> dbgegrtep_items;
        
}; // System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList


class System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems : public ydk::Entity
{
    public:
        DbgIngrTepItems();
        ~DbgIngrTepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_38_ */

