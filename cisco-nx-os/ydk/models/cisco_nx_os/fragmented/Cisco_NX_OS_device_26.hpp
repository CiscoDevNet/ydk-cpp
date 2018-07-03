#ifndef _CISCO_NX_OS_DEVICE_26_
#define _CISCO_NX_OS_DEVICE_26_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_25.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems : public ydk::Entity
{
    public:
        RscollectorAttItems();
        ~RscollectorAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsCollectorAttList; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList

        ydk::YList rscollectoratt_list;
        
}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList : public ydk::Entity
{
    public:
        RsCollectorAttList();
        ~RsCollectorAttList();

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

}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems : public ydk::Entity
{
    public:
        FwdinstItems();
        ~FwdinstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FwdInstTargetList; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList

        ydk::YList fwdinsttarget_list;
        
}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList : public ydk::Entity
{
    public:
        FwdInstTargetList();
        ~FwdInstTargetList();

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
        ydk::YLeaf descr; //type: string
        class RsmonitorAttItems; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems> rsmonitoratt_items;
        
}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems : public ydk::Entity
{
    public:
        RsmonitorAttItems();
        ~RsmonitorAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMonitorAttList; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList

        ydk::YList rsmonitoratt_list;
        
}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList : public ydk::Entity
{
    public:
        RsMonitorAttList();
        ~RsMonitorAttList();

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

}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList


class System::AnalyticsItems::InstItems : public ydk::Entity
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

        class InstList; //type: System::AnalyticsItems::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::AnalyticsItems::InstItems


class System::AnalyticsItems::InstItems::InstList : public ydk::Entity
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

        ydk::YLeaf mode; //type: AnalyticsModeT
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class CapabilityItems; //type: System::AnalyticsItems::InstItems::InstList::CapabilityItems
        class ControllerItems; //type: System::AnalyticsItems::InstItems::InstList::ControllerItems
        class RecordpItems; //type: System::AnalyticsItems::InstItems::InstList::RecordpItems
        class CollectorItems; //type: System::AnalyticsItems::InstItems::InstList::CollectorItems
        class MonitorItems; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems
        class SamplerItems; //type: System::AnalyticsItems::InstItems::InstList::SamplerItems
        class ProfItems; //type: System::AnalyticsItems::InstItems::InstList::ProfItems
        class FwdinstItems; //type: System::AnalyticsItems::InstItems::InstList::FwdinstItems
        class IfItems; //type: System::AnalyticsItems::InstItems::InstList::IfItems
        class BdItems; //type: System::AnalyticsItems::InstItems::InstList::BdItems
        class PolicyItems; //type: System::AnalyticsItems::InstItems::InstList::PolicyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::CapabilityItems> capability_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::ControllerItems> controller_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::RecordpItems> recordp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::CollectorItems> collector_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::MonitorItems> monitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::SamplerItems> sampler_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::ProfItems> prof_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::FwdinstItems> fwdinst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::BdItems> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::PolicyItems> policy_items;
        
}; // System::AnalyticsItems::InstItems::InstList


class System::AnalyticsItems::InstItems::InstList::CapabilityItems : public ydk::Entity
{
    public:
        CapabilityItems();
        ~CapabilityItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fabricmode; //type: AnalyticsCModeT
        ydk::YLeaf buckethashwidth; //type: uint16
        ydk::YLeaf numtcament; //type: uint32
        ydk::YLeaf numtcamentperv4; //type: uint16
        ydk::YLeaf numtcamentperv6; //type: uint16

}; // System::AnalyticsItems::InstItems::InstList::CapabilityItems


class System::AnalyticsItems::InstItems::InstList::ControllerItems : public ydk::Entity
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

        class ControllerList; //type: System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList

        ydk::YList controller_list;
        
}; // System::AnalyticsItems::InstItems::InstList::ControllerItems


class System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList : public ydk::Entity
{
    public:
        ControllerList();
        ~ControllerList();

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
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf dstaddr; //type: string
        ydk::YLeaf dstport; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf srcaddr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList


class System::AnalyticsItems::InstItems::InstList::RecordpItems : public ydk::Entity
{
    public:
        RecordpItems();
        ~RecordpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RecordPList; //type: System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList

        ydk::YList recordp_list;
        
}; // System::AnalyticsItems::InstItems::InstList::RecordpItems


class System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList : public ydk::Entity
{
    public:
        RecordPList();
        ~RecordPList();

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
        ydk::YLeaf match; //type: string
        ydk::YLeaf collect; //type: string
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList


class System::AnalyticsItems::InstItems::InstList::CollectorItems : public ydk::Entity
{
    public:
        CollectorItems();
        ~CollectorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CollectorList; //type: System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList

        ydk::YList collector_list;
        
}; // System::AnalyticsItems::InstItems::InstList::CollectorItems


class System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList : public ydk::Entity
{
    public:
        CollectorList();
        ~CollectorList();

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
        ydk::YLeaf ver; //type: AnalyticsCollVersion
        ydk::YLeaf descr; //type: string
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf dstaddr; //type: string
        ydk::YLeaf dstport; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf srcaddr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList


class System::AnalyticsItems::InstItems::InstList::MonitorItems : public ydk::Entity
{
    public:
        MonitorItems();
        ~MonitorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MonitorList; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList

        ydk::YList monitor_list;
        
}; // System::AnalyticsItems::InstItems::InstList::MonitorItems


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList : public ydk::Entity
{
    public:
        MonitorList();
        ~MonitorList();

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
        class CollectorbucketItems; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems
        class RsrecordPAttItems; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems> collectorbucket_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems> rsrecordpatt_items;
        
}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems : public ydk::Entity
{
    public:
        CollectorbucketItems();
        ~CollectorbucketItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CollectorBucketList; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList

        ydk::YList collectorbucket_list;
        
}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList : public ydk::Entity
{
    public:
        CollectorBucketList();
        ~CollectorBucketList();

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
        ydk::YLeaf hashlo; //type: uint32
        ydk::YLeaf hashhi; //type: uint32
        ydk::YLeaf descr; //type: string
        class RscollectorAttItems; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems> rscollectoratt_items;
        
}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems : public ydk::Entity
{
    public:
        RscollectorAttItems();
        ~RscollectorAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsCollectorAttList; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList

        ydk::YList rscollectoratt_list;
        
}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList : public ydk::Entity
{
    public:
        RsCollectorAttList();
        ~RsCollectorAttList();

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

}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems : public ydk::Entity
{
    public:
        RsrecordPAttItems();
        ~RsrecordPAttItems();

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

}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems


class System::AnalyticsItems::InstItems::InstList::SamplerItems : public ydk::Entity
{
    public:
        SamplerItems();
        ~SamplerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SamplerList; //type: System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList

        ydk::YList sampler_list;
        
}; // System::AnalyticsItems::InstItems::InstList::SamplerItems


class System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList : public ydk::Entity
{
    public:
        SamplerList();
        ~SamplerList();

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
        ydk::YLeaf mode; //type: AnalyticsSamplerMode
        ydk::YLeaf samplesz; //type: uint32
        ydk::YLeaf windowsz; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList


class System::AnalyticsItems::InstItems::InstList::ProfItems : public ydk::Entity
{
    public:
        ProfItems();
        ~ProfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProfileList; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList

        ydk::YList profile_list;
        
}; // System::AnalyticsItems::InstItems::InstList::ProfItems


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList : public ydk::Entity
{
    public:
        ProfileList();
        ~ProfileList();

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
        ydk::YLeaf collectintvl; //type: uint32
        ydk::YLeaf srcport; //type: uint32
        ydk::YLeaf ippktidshift; //type: uint8
        ydk::YLeaf burstintvlshift; //type: uint8
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf seqnumguessthreshlo; //type: uint32
        ydk::YLeaf seqnumguessthreshhi; //type: uint32
        ydk::YLeaf descr; //type: string
        class PayloadlenbinItems; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems
        class TcpopthdrlenbinItems; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems
        class RcvwindowszbinItems; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems> payloadlenbin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems> tcpopthdrlenbin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems> rcvwindowszbin_items;
        
}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems : public ydk::Entity
{
    public:
        PayloadlenbinItems();
        ~PayloadlenbinItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PayloadLenBinList; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList

        ydk::YList payloadlenbin_list;
        
}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList : public ydk::Entity
{
    public:
        PayloadLenBinList();
        ~PayloadLenBinList();

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
        ydk::YLeaf lo; //type: uint32
        ydk::YLeaf hi; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems : public ydk::Entity
{
    public:
        TcpopthdrlenbinItems();
        ~TcpopthdrlenbinItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TCPOptHdrLenBinList; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList

        ydk::YList tcpopthdrlenbin_list;
        
}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList : public ydk::Entity
{
    public:
        TCPOptHdrLenBinList();
        ~TCPOptHdrLenBinList();

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
        ydk::YLeaf lo; //type: uint32
        ydk::YLeaf hi; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems : public ydk::Entity
{
    public:
        RcvwindowszbinItems();
        ~RcvwindowszbinItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RcvWindowSzBinList; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList

        ydk::YList rcvwindowszbin_list;
        
}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList : public ydk::Entity
{
    public:
        RcvWindowSzBinList();
        ~RcvWindowSzBinList();

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
        ydk::YLeaf lo; //type: uint32
        ydk::YLeaf hi; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList


class System::AnalyticsItems::InstItems::InstList::FwdinstItems : public ydk::Entity
{
    public:
        FwdinstItems();
        ~FwdinstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FwdInstTargetList; //type: System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList

        ydk::YList fwdinsttarget_list;
        
}; // System::AnalyticsItems::InstItems::InstList::FwdinstItems


class System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList : public ydk::Entity
{
    public:
        FwdInstTargetList();
        ~FwdInstTargetList();

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
        ydk::YLeaf collectorid; //type: uint32
        ydk::YLeaf defpolicy; //type: AnalyticsDefPolicyT
        ydk::YLeaf ipv4hit; //type: uint32
        ydk::YLeaf ipv6hit; //type: uint32
        ydk::YLeaf cehit; //type: uint32
        ydk::YLeaf ipv4create; //type: uint32
        ydk::YLeaf ipv6create; //type: uint32
        ydk::YLeaf cecreate; //type: uint32
        ydk::YLeaf exportcount; //type: uint32
        ydk::YLeaf skipcount; //type: uint32
        ydk::YLeaf flttype; //type: AnalyticsFltType
        ydk::YLeaf dir; //type: AnalyticsDirectionT
        class RsprofAttItems; //type: System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems
        class RspolicyAttItems; //type: System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems> rsprofatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems> rspolicyatt_items;
        
}; // System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList


class System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems : public ydk::Entity
{
    public:
        RsprofAttItems();
        ~RsprofAttItems();

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

}; // System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems


class System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems : public ydk::Entity
{
    public:
        RspolicyAttItems();
        ~RspolicyAttItems();

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

}; // System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems


class System::AnalyticsItems::InstItems::InstList::IfItems : public ydk::Entity
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

        class PhysIfTargetList; //type: System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList

        ydk::YList physiftarget_list;
        
}; // System::AnalyticsItems::InstItems::InstList::IfItems


class System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList : public ydk::Entity
{
    public:
        PhysIfTargetList();
        ~PhysIfTargetList();

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
        ydk::YLeaf flttype; //type: AnalyticsFltType
        ydk::YLeaf operst; //type: AnalyticsOperSt
        ydk::YLeaf operstqual; //type: string
        ydk::YLeaf dir; //type: AnalyticsDirectionT

}; // System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList


class System::AnalyticsItems::InstItems::InstList::BdItems : public ydk::Entity
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

        class BDTargetList; //type: System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList

        ydk::YList bdtarget_list;
        
}; // System::AnalyticsItems::InstItems::InstList::BdItems


class System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList : public ydk::Entity
{
    public:
        BDTargetList();
        ~BDTargetList();

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
        ydk::YLeaf ctxencap; //type: string
        ydk::YLeaf operst; //type: AnalyticsOperSt
        ydk::YLeaf operstqual; //type: string
        ydk::YLeaf flttype; //type: AnalyticsFltType
        ydk::YLeaf dir; //type: AnalyticsDirectionT

}; // System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList


class System::AnalyticsItems::InstItems::InstList::PolicyItems : public ydk::Entity
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

        class PolicyList; //type: System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList

        ydk::YList policy_list;
        
}; // System::AnalyticsItems::InstItems::InstList::PolicyItems


class System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class AclItems; //type: System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems> acl_items;
        
}; // System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList


class System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems : public ydk::Entity
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

        class MatchAclList; //type: System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList

        ydk::YList matchacl_list;
        
}; // System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems


class System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList : public ydk::Entity
{
    public:
        MatchAclList();
        ~MatchAclList();

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
        ydk::YLeaf aclname; //type: string
        ydk::YLeaf flttype; //type: AnalyticsFltType
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList


class System::CoppItems : public ydk::Entity
{
    public:
        CoppItems();
        ~CoppItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf error; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class ClasspItems; //type: System::CoppItems::ClasspItems
        class PolicyItems; //type: System::CoppItems::PolicyItems
        class ProfileItems; //type: System::CoppItems::ProfileItems
        class NameItems; //type: System::CoppItems::NameItems
        class ScaleItems; //type: System::CoppItems::ScaleItems
        class ServiceItems; //type: System::CoppItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems> classp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ProfileItems> profile_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::NameItems> name_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ScaleItems> scale_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ServiceItems> service_items;
        
}; // System::CoppItems


class System::CoppItems::ClasspItems : public ydk::Entity
{
    public:
        ClasspItems();
        ~ClasspItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ClassList; //type: System::CoppItems::ClasspItems::ClassList

        ydk::YList class_list;
        
}; // System::CoppItems::ClasspItems


class System::CoppItems::ClasspItems::ClassList : public ydk::Entity
{
    public:
        ClassList();
        ~ClassList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cname; //type: string
        ydk::YLeaf matchoption; //type: CoppMatchOption
        ydk::YLeaf flag; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf burst; //type: uint32
        class MatchItems; //type: System::CoppItems::ClasspItems::ClassList::MatchItems
        class AclItems; //type: System::CoppItems::ClasspItems::ClassList::AclItems
        class RdirectItems; //type: System::CoppItems::ClasspItems::ClassList::RdirectItems
        class FcoeItems; //type: System::CoppItems::ClasspItems::ClassList::FcoeItems
        class McastItems; //type: System::CoppItems::ClasspItems::ClassList::McastItems
        class ExcepItems; //type: System::CoppItems::ClasspItems::ClassList::ExcepItems
        class IpItems; //type: System::CoppItems::ClasspItems::ClassList::IpItems
        class IcmpItems; //type: System::CoppItems::ClasspItems::ClassList::IcmpItems
        class Ipv6Items; //type: System::CoppItems::ClasspItems::ClassList::Ipv6Items
        class Icmpv6Items; //type: System::CoppItems::ClasspItems::ClassList::Icmpv6Items
        class ProtItems; //type: System::CoppItems::ClasspItems::ClassList::ProtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::MatchItems> match_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::AclItems> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::RdirectItems> rdirect_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::FcoeItems> fcoe_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::McastItems> mcast_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::ExcepItems> excep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::IcmpItems> icmp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::Ipv6Items> ipv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::Icmpv6Items> icmpv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::ProtItems> prot_items;
        
}; // System::CoppItems::ClasspItems::ClassList


class System::CoppItems::ClasspItems::ClassList::MatchItems : public ydk::Entity
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

        class MatchList; //type: System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList

        ydk::YList match_list;
        
}; // System::CoppItems::ClasspItems::ClassList::MatchItems


class System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList : public ydk::Entity
{
    public:
        MatchList();
        ~MatchList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: CoppMatchT
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList


class System::CoppItems::ClasspItems::ClassList::AclItems : public ydk::Entity
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

        class AclList; //type: System::CoppItems::ClasspItems::ClassList::AclItems::AclList

        ydk::YList acl_list;
        
}; // System::CoppItems::ClasspItems::ClassList::AclItems


class System::CoppItems::ClasspItems::ClassList::AclItems::AclList : public ydk::Entity
{
    public:
        AclList();
        ~AclList();

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
        ydk::YLeaf error; //type: uint64
        ydk::YLeaf flag; //type: boolean

}; // System::CoppItems::ClasspItems::ClassList::AclItems::AclList


class System::CoppItems::ClasspItems::ClassList::RdirectItems : public ydk::Entity
{
    public:
        RdirectItems();
        ~RdirectItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rdrct; //type: CoppRdrct

}; // System::CoppItems::ClasspItems::ClassList::RdirectItems


class System::CoppItems::ClasspItems::ClassList::FcoeItems : public ydk::Entity
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

        ydk::YLeaf option; //type: boolean

}; // System::CoppItems::ClasspItems::ClassList::FcoeItems


class System::CoppItems::ClasspItems::ClassList::McastItems : public ydk::Entity
{
    public:
        McastItems();
        ~McastItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastList; //type: System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList

        ydk::YList multicast_list;
        
}; // System::CoppItems::ClasspItems::ClassList::McastItems


class System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList : public ydk::Entity
{
    public:
        MulticastList();
        ~MulticastList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mcastoption; //type: CoppMcast
        ydk::YLeaf flag; //type: boolean

}; // System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList


class System::CoppItems::ClasspItems::ClassList::ExcepItems : public ydk::Entity
{
    public:
        ExcepItems();
        ~ExcepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExeOptionsList; //type: System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList

        ydk::YList exeoptions_list;
        
}; // System::CoppItems::ClasspItems::ClassList::ExcepItems


class System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList : public ydk::Entity
{
    public:
        ExeOptionsList();
        ~ExeOptionsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: CoppExcep
        ydk::YLeaf flag; //type: boolean

}; // System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList


class System::CoppItems::ClasspItems::ClassList::IpItems : public ydk::Entity
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

        ydk::YLeaf options; //type: boolean
        ydk::YLeaf flag; //type: boolean

}; // System::CoppItems::ClasspItems::ClassList::IpItems


class System::CoppItems::ClasspItems::ClassList::IcmpItems : public ydk::Entity
{
    public:
        IcmpItems();
        ~IcmpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpIcmpList; //type: System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList

        ydk::YList ipicmp_list;
        
}; // System::CoppItems::ClasspItems::ClassList::IcmpItems


class System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList : public ydk::Entity
{
    public:
        IpIcmpList();
        ~IpIcmpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: CoppIcmp
        ydk::YLeaf flag; //type: boolean

}; // System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList


class System::CoppItems::ClasspItems::ClassList::Ipv6Items : public ydk::Entity
{
    public:
        Ipv6Items();
        ~Ipv6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf options; //type: boolean
        ydk::YLeaf flag; //type: boolean

}; // System::CoppItems::ClasspItems::ClassList::Ipv6Items


class System::CoppItems::ClasspItems::ClassList::Icmpv6Items : public ydk::Entity
{
    public:
        Icmpv6Items();
        ~Icmpv6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6IcmpList; //type: System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList

        ydk::YList ipv6icmp_list;
        
}; // System::CoppItems::ClasspItems::ClassList::Icmpv6Items


class System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList : public ydk::Entity
{
    public:
        Ipv6IcmpList();
        ~Ipv6IcmpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: CoppIcmp
        ydk::YLeaf flag; //type: boolean

}; // System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList


class System::CoppItems::ClasspItems::ClassList::ProtItems : public ydk::Entity
{
    public:
        ProtItems();
        ~ProtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolList; //type: System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList

        ydk::YList protocol_list;
        
}; // System::CoppItems::ClasspItems::ClassList::ProtItems


class System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList : public ydk::Entity
{
    public:
        ProtocolList();
        ~ProtocolList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeaf flag; //type: boolean
        class MplsItems; //type: System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems> mpls_items;
        
}; // System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList


class System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems : public ydk::Entity
{
    public:
        MplsItems();
        ~MplsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exp; //type: uint32
        ydk::YLeaf routeralert; //type: boolean

}; // System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems


class System::CoppItems::PolicyItems : public ydk::Entity
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

        class PolicyList; //type: System::CoppItems::PolicyItems::PolicyList

        ydk::YList policy_list;
        
}; // System::CoppItems::PolicyItems


class System::CoppItems::PolicyItems::PolicyList : public ydk::Entity
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
        ydk::YLeaf flag; //type: boolean
        class ClasspItems; //type: System::CoppItems::PolicyItems::PolicyList::ClasspItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::PolicyItems::PolicyList::ClasspItems> classp_items;
        
}; // System::CoppItems::PolicyItems::PolicyList


class System::CoppItems::PolicyItems::PolicyList::ClasspItems : public ydk::Entity
{
    public:
        ClasspItems();
        ~ClasspItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClasspList; //type: System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList

        ydk::YList classp_list;
        
}; // System::CoppItems::PolicyItems::PolicyList::ClasspItems


class System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList : public ydk::Entity
{
    public:
        ClasspList();
        ~ClasspList();

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
        ydk::YLeaf insertbeforename; //type: string
        ydk::YLeaf flag; //type: boolean
        class CirItems; //type: System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems
        class PoliceActionEItems; //type: System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems
        class LoggingItems; //type: System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems
        class SetCosItems; //type: System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems
        class SetDscpItems; //type: System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems> cir_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems> policeactione_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems> logging_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems> setcos_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems> setdscp_items;
        
}; // System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList


class System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems : public ydk::Entity
{
    public:
        CirItems();
        ~CirItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicerActionList; //type: System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList

        ydk::YList policeraction_list;
        
}; // System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems


class System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList : public ydk::Entity
{
    public:
        PolicerActionList();
        ~PolicerActionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cirval; //type: uint64
        ydk::YLeaf cirunit; //type: CoppIrUnit
        ydk::YLeaf burstc; //type: uint32
        ydk::YLeaf burstunit; //type: CoppBurstUnit
        ydk::YLeaf conformaction; //type: CoppConformAction
        ydk::YLeaf violateaction; //type: CoppViolateAction
        ydk::YLeaf flag; //type: boolean

}; // System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList


class System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems : public ydk::Entity
{
    public:
        PoliceActionEItems();
        ~PoliceActionEItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cirval; //type: uint64
        ydk::YLeaf cirunit; //type: CoppIrUnit
        ydk::YLeaf burstc; //type: uint32
        ydk::YLeaf burstunit; //type: CoppBurstUnit
        ydk::YLeaf pirval; //type: uint64
        ydk::YLeaf pirunit; //type: CoppIrUnit
        ydk::YLeaf burste; //type: uint32
        ydk::YLeaf bursteunit; //type: CoppBurstUnit
        ydk::YLeaf conformaction; //type: CoppConformAction
        ydk::YLeaf exceedaction; //type: CoppExceedAction
        ydk::YLeaf violateaction; //type: CoppViolateAction

}; // System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems


class System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems : public ydk::Entity
{
    public:
        LoggingItems();
        ~LoggingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LoggingList; //type: System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList

        ydk::YList logging_list;
        
}; // System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems


class System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList : public ydk::Entity
{
    public:
        LoggingList();
        ~LoggingList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf levelrange; //type: uint16

}; // System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList


class System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems : public ydk::Entity
{
    public:
        SetCosItems();
        ~SetCosItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SetCosList; //type: System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList

        ydk::YList setcos_list;
        
}; // System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems


class System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList : public ydk::Entity
{
    public:
        SetCosList();
        ~SetCosList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cosval; //type: uint16
        ydk::YLeaf inner; //type: boolean
        ydk::YLeaf flag; //type: boolean

}; // System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList


class System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems : public ydk::Entity
{
    public:
        SetDscpItems();
        ~SetDscpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: boolean
        ydk::YLeaf dscpval; //type: uint16

}; // System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems


class System::CoppItems::ProfileItems : public ydk::Entity
{
    public:
        ProfileItems();
        ~ProfileItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf prof; //type: CoppProfT

}; // System::CoppItems::ProfileItems


class System::CoppItems::NameItems : public ydk::Entity
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

        class CopyProfileList; //type: System::CoppItems::NameItems::CopyProfileList

        ydk::YList copyprofile_list;
        
}; // System::CoppItems::NameItems


class System::CoppItems::NameItems::CopyProfileList : public ydk::Entity
{
    public:
        CopyProfileList();
        ~CopyProfileList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf affixname; //type: string
        ydk::YLeaf profile; //type: CoppProfT
        ydk::YLeaf affix; //type: CoppAffix
        ydk::YLeaf copynum; //type: uint32

}; // System::CoppItems::NameItems::CopyProfileList


class System::CoppItems::ScaleItems : public ydk::Entity
{
    public:
        ScaleItems();
        ~ScaleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ScaleList; //type: System::CoppItems::ScaleItems::ScaleList

        ydk::YList scale_list;
        
}; // System::CoppItems::ScaleItems


class System::CoppItems::ScaleItems::ScaleList : public ydk::Entity
{
    public:
        ScaleList();
        ~ScaleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf module; //type: uint16
        ydk::YLeaf scaleval; //type: decimal64

}; // System::CoppItems::ScaleItems::ScaleList


class System::CoppItems::ServiceItems : public ydk::Entity
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

        class ServiceList; //type: System::CoppItems::ServiceItems::ServiceList

        ydk::YList service_list;
        
}; // System::CoppItems::ServiceItems


class System::CoppItems::ServiceItems::ServiceList : public ydk::Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
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
        ydk::YLeaf error; //type: uint64

}; // System::CoppItems::ServiceItems::ServiceList


class System::GleanItems : public ydk::Entity
{
    public:
        GleanItems();
        ~GleanItems();

        bool has_data() const override;
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
        class InstItems; //type: System::GleanItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::GleanItems::InstItems> inst_items;
        
}; // System::GleanItems


class System::GleanItems::InstItems : public ydk::Entity
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
        class DomItems; //type: System::GleanItems::InstItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::GleanItems::InstItems::DomItems> dom_items;
        
}; // System::GleanItems::InstItems


class System::GleanItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::GleanItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::GleanItems::InstItems::DomItems


class System::GleanItems::InstItems::DomItems::DomList : public ydk::Entity
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

        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        class BdItems; //type: System::GleanItems::InstItems::DomItems::DomList::BdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::GleanItems::InstItems::DomItems::DomList::BdItems> bd_items;
        
}; // System::GleanItems::InstItems::DomItems::DomList


class System::GleanItems::InstItems::DomItems::DomList::BdItems : public ydk::Entity
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

        class BDList; //type: System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList

        ydk::YList bd_list;
        
}; // System::GleanItems::InstItems::DomItems::DomList::BdItems


class System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList : public ydk::Entity
{
    public:
        BDList();
        ~BDList();

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
        ydk::YLeaf gwmac; //type: string
        ydk::YLeaf fmcastgrp; //type: string
        ydk::YLeaf name; //type: string
        class GwItems; //type: System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems> gw_items;
        
}; // System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList


class System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems : public ydk::Entity
{
    public:
        GwItems();
        ~GwItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GatewayList; //type: System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList

        ydk::YList gateway_list;
        
}; // System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems


class System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList : public ydk::Entity
{
    public:
        GatewayList();
        ~GatewayList();

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

}; // System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList


class System::HmmItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class FwdinstItems; //type: System::HmmItems::FwdinstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HmmItems::FwdinstItems> fwdinst_items;
        
}; // System::HmmItems


class System::HmmItems::FwdinstItems : public ydk::Entity
{
    public:
        FwdinstItems();
        ~FwdinstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf amac; //type: string
        ydk::YLeaf limitvlanmac; //type: uint16
        ydk::YLeaf selhostprobe; //type: HmmBoolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class IfItems; //type: System::HmmItems::FwdinstItems::IfItems
        class EvpnItems; //type: System::HmmItems::FwdinstItems::EvpnItems
        class TenantItems; //type: System::HmmItems::FwdinstItems::TenantItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HmmItems::FwdinstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HmmItems::FwdinstItems::EvpnItems> evpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HmmItems::FwdinstItems::TenantItems> tenant_items;
        
}; // System::HmmItems::FwdinstItems


class System::HmmItems::FwdinstItems::IfItems : public ydk::Entity
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

        class FwdIfList; //type: System::HmmItems::FwdinstItems::IfItems::FwdIfList

        ydk::YList fwdif_list;
        
}; // System::HmmItems::FwdinstItems::IfItems


class System::HmmItems::FwdinstItems::IfItems::FwdIfList : public ydk::Entity
{
    public:
        FwdIfList();
        ~FwdIfList();

        bool has_data() const override;
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
        ydk::YLeaf mode; //type: HmmFwdMode
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class RtvrfMbrItems; //type: System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::HmmItems::FwdinstItems::IfItems::FwdIfList


class System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems


class System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems


class System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::HmmItems::FwdinstItems::EvpnItems : public ydk::Entity
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

        ydk::YLeaf ddhmmoves; //type: uint16
        ydk::YLeaf ddhnsecs; //type: uint16
        ydk::YLeaf dhrtimeout; //type: uint16
        ydk::YLeaf dhrcount; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

}; // System::HmmItems::FwdinstItems::EvpnItems


class System::HmmItems::FwdinstItems::TenantItems : public ydk::Entity
{
    public:
        TenantItems();
        ~TenantItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TenantDbList; //type: System::HmmItems::FwdinstItems::TenantItems::TenantDbList

        ydk::YList tenantdb_list;
        
}; // System::HmmItems::FwdinstItems::TenantItems


class System::HmmItems::FwdinstItems::TenantItems::TenantDbList : public ydk::Entity
{
    public:
        TenantDbList();
        ~TenantDbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf vrfstate; //type: string
        ydk::YLeaf vniid; //type: uint32
        ydk::YLeaf refcount; //type: uint32
        class AfItems; //type: System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems> af_items;
        
}; // System::HmmItems::FwdinstItems::TenantItems::TenantDbList


class System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems : public ydk::Entity
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

        class TenantDBAfList; //type: System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList

        ydk::YList tenantdbaf_list;
        
}; // System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems


class System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList : public ydk::Entity
{
    public:
        TenantDBAfList();
        ~TenantDBAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpAfT
        ydk::YLeaf tblstate; //type: string
        ydk::YLeaf localhosts; //type: uint32
        ydk::YLeaf remotehosts; //type: uint32
        ydk::YLeaf aggregates; //type: uint32

}; // System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList


class System::HwtelemetryItems : public ydk::Entity
{
    public:
        HwtelemetryItems();
        ~HwtelemetryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FteItems; //type: System::HwtelemetryItems::FteItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::FteItems> fte_items;
        
}; // System::HwtelemetryItems


class System::HwtelemetryItems::FteItems : public ydk::Entity
{
    public:
        FteItems();
        ~FteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstItems; //type: System::HwtelemetryItems::FteItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::FteItems::InstItems> inst_items;
        
}; // System::HwtelemetryItems::FteItems


class System::HwtelemetryItems::FteItems::InstItems : public ydk::Entity
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

        class InstList; //type: System::HwtelemetryItems::FteItems::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::HwtelemetryItems::FteItems::InstItems


class System::HwtelemetryItems::FteItems::InstItems::InstList : public ydk::Entity
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

        ydk::YLeaf mode; //type: FteModeT
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class CollectorItems; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems
        class RecordItems; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems
        class MonitorItems; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems
        class SysfteItems; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems> collector_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems> record_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems> monitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems> sysfte_items;
        
}; // System::HwtelemetryItems::FteItems::InstItems::InstList


class System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems : public ydk::Entity
{
    public:
        CollectorItems();
        ~CollectorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CollectorList; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList

        ydk::YList collector_list;
        
}; // System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems


class System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList : public ydk::Entity
{
    public:
        CollectorList();
        ~CollectorList();

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
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf dstaddr; //type: string
        ydk::YLeaf dstport; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf descr; //type: string

}; // System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList


class System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems : public ydk::Entity
{
    public:
        RecordItems();
        ~RecordItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RecordList; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList

        ydk::YList record_list;
        
}; // System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems


class System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList : public ydk::Entity
{
    public:
        RecordList();
        ~RecordList();

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
        ydk::YLeaf match; //type: string
        ydk::YLeaf eventgroups; //type: string
        ydk::YLeaf descr; //type: string

}; // System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList


class System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems : public ydk::Entity
{
    public:
        MonitorItems();
        ~MonitorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MonitorList; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList

        ydk::YList monitor_list;
        
}; // System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems


class System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList : public ydk::Entity
{
    public:
        MonitorList();
        ~MonitorList();

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
        class RsrecordAttItems; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems
        class RscollectorAttItems; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems> rsrecordatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems> rscollectoratt_items;
        
}; // System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList


class System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems : public ydk::Entity
{
    public:
        RsrecordAttItems();
        ~RsrecordAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRecordAttList; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList

        ydk::YList rsrecordatt_list;
        
}; // System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems


class System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList : public ydk::Entity
{
    public:
        RsRecordAttList();
        ~RsRecordAttList();

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

}; // System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList


class System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems : public ydk::Entity
{
    public:
        RscollectorAttItems();
        ~RscollectorAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsCollectorAttList; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList

        ydk::YList rscollectoratt_list;
        
}; // System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems


class System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList : public ydk::Entity
{
    public:
        RsCollectorAttList();
        ~RsCollectorAttList();

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

}; // System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList


class System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems : public ydk::Entity
{
    public:
        SysfteItems();
        ~SysfteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SysFteList; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList

        ydk::YList sysfte_list;
        
}; // System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems


class System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList : public ydk::Entity
{
    public:
        SysFteList();
        ~SysFteList();

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
        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf dstaddr; //type: string
        ydk::YLeaf descr; //type: string
        class RsmonitorAttItems; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems> rsmonitoratt_items;
        
}; // System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList


class System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems : public ydk::Entity
{
    public:
        RsmonitorAttItems();
        ~RsmonitorAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMonitorAttList; //type: System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList

        ydk::YList rsmonitoratt_list;
        
}; // System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems


class System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList : public ydk::Entity
{
    public:
        RsMonitorAttList();
        ~RsMonitorAttList();

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

}; // System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList


class System::IcamItems : public ydk::Entity
{
    public:
        IcamItems();
        ~IcamItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstItems; //type: System::IcamItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IcamItems::InstItems> inst_items;
        
}; // System::IcamItems


class System::IcamItems::InstItems : public ydk::Entity
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

        class ModItems; //type: System::IcamItems::InstItems::ModItems
        class AclresmodItems; //type: System::IcamItems::InstItems::AclresmodItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IcamItems::InstItems::ModItems> mod_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IcamItems::InstItems::AclresmodItems> aclresmod_items;
        
}; // System::IcamItems::InstItems


class System::IcamItems::InstItems::ModItems : public ydk::Entity
{
    public:
        ModItems();
        ~ModItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MonACLEntriesList; //type: System::IcamItems::InstItems::ModItems::MonACLEntriesList

        ydk::YList monaclentries_list;
        
}; // System::IcamItems::InstItems::ModItems


class System::IcamItems::InstItems::ModItems::MonACLEntriesList : public ydk::Entity
{
    public:
        MonACLEntriesList();
        ~MonACLEntriesList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf module; //type: uint32
        ydk::YLeaf inst; //type: uint32
        ydk::YLeaf feature; //type: string
        ydk::YLeaf value_mask; //type: string
        ydk::YLeaf class_type; //type: string
        ydk::YLeaf action; //type: string
        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf cum_stats; //type: uint64

}; // System::IcamItems::InstItems::ModItems::MonACLEntriesList


class System::IcamItems::InstItems::AclresmodItems : public ydk::Entity
{
    public:
        AclresmodItems();
        ~AclresmodItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AclResEntriesList; //type: System::IcamItems::InstItems::AclresmodItems::AclResEntriesList

        ydk::YList aclresentries_list;
        
}; // System::IcamItems::InstItems::AclresmodItems


class System::IcamItems::InstItems::AclresmodItems::AclResEntriesList : public ydk::Entity
{
    public:
        AclResEntriesList();
        ~AclResEntriesList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf module; //type: uint32
        ydk::YLeaf inst; //type: uint32
        ydk::YLeaf tcam_no; //type: uint32
        ydk::YLeaf bank_no; //type: uint32
        ydk::YLeaf used; //type: uint32
        ydk::YLeaf free; //type: uint32
        ydk::YLeaf percent_util; //type: decimal64
        ydk::YLeaf timestamp; //type: uint64

}; // System::IcamItems::InstItems::AclresmodItems::AclResEntriesList


class System::IpqosItems : public ydk::Entity
{
    public:
        IpqosItems();
        ~IpqosItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf statsstate; //type: IpqosStatsState
        class StatClearItems; //type: System::IpqosItems::StatClearItems
        class QueuingItems; //type: System::IpqosItems::QueuingItems
        class NwItems; //type: System::IpqosItems::NwItems
        class DfltItems; //type: System::IpqosItems::DfltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::StatClearItems> statclear_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems> queuing_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::NwItems> nw_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems> dflt_items;
        
}; // System::IpqosItems


class System::IpqosItems::StatClearItems : public ydk::Entity
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

        ydk::YLeaf pmaptype; //type: IpqosPolicyType
        ydk::YLeaf direction; //type: IpqosPolicyDirection
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf vlan; //type: string
        ydk::YLeaf portchan; //type: string
        ydk::YLeaf timestamp; //type: string

}; // System::IpqosItems::StatClearItems


class System::IpqosItems::QueuingItems : public ydk::Entity
{
    public:
        QueuingItems();
        ~QueuingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PolicyItems; //type: System::IpqosItems::QueuingItems::PolicyItems
        class CItems; //type: System::IpqosItems::QueuingItems::CItems
        class PItems; //type: System::IpqosItems::QueuingItems::PItems
        class CopyPMapItems; //type: System::IpqosItems::QueuingItems::CopyPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::CItems> c_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PItems> p_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::CopyPMapItems> copypmap_items;
        
}; // System::IpqosItems::QueuingItems


class System::IpqosItems::QueuingItems::PolicyItems : public ydk::Entity
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

        class InItems; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems
        class OutItems; //type: System::IpqosItems::QueuingItems::PolicyItems::OutItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::InItems> in_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::OutItems> out_items;
        
}; // System::IpqosItems::QueuingItems::PolicyItems


class System::IpqosItems::QueuingItems::PolicyItems::InItems : public ydk::Entity
{
    public:
        InItems();
        ~InItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IntfItems; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems
        class SysItems; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems> sys_items;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::InItems


class System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems


class System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList : public ydk::Entity
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
        ydk::YLeaf delintfbit; //type: boolean
        class PmapItems; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems
        class CmapItems; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems
        class QueCmapItems; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems> pmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems> quecmap_items;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList


class System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems


class System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems


class System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems : public ydk::Entity
{
    public:
        CmapItems();
        ~CmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatsList; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList

        ydk::YList stats_list;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems


class System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf conformbytes; //type: uint64
        ydk::YLeaf exceedbytes; //type: uint64
        ydk::YLeaf violatebytes; //type: uint64

}; // System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList


class System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems : public ydk::Entity
{
    public:
        QueCmapItems();
        ~QueCmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QueuingStatsList; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList

        ydk::YList queuingstats_list;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems


class System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList : public ydk::Entity
{
    public:
        QueuingStatsList();
        ~QueuingStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf currqueuedepth; //type: uint64
        ydk::YLeaf maxqueuedepth; //type: uint64
        ydk::YLeaf ingqdroppackets; //type: uint64
        ydk::YLeaf ingqdepthbytes; //type: uint64
        ydk::YLeaf randdropbytes; //type: uint64
        ydk::YLeaf randdroppackets; //type: uint64
        ydk::YLeaf randecnmarkedpackets; //type: uint64
        ydk::YLeaf pfctxppp; //type: uint64
        ydk::YLeaf pfcrxppp; //type: uint64
        ydk::YLeaf pfcwdshutdowncount; //type: uint64
        ydk::YLeaf pfcwdrestoredcount; //type: uint64
        ydk::YLeaf pfcwdflushedpackets; //type: uint64

}; // System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList


class System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems : public ydk::Entity
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

        ydk::YLeaf usersetbit; //type: uint64
        class PmapItems; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems> pmap_items;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems


class System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

        bool has_data() const override;
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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems


class System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

        bool has_data() const override;
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems


class System::IpqosItems::QueuingItems::PolicyItems::OutItems : public ydk::Entity
{
    public:
        OutItems();
        ~OutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IntfItems; //type: System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems
        class SysItems; //type: System::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems> sys_items;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::OutItems


class System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems


class System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList : public ydk::Entity
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
        ydk::YLeaf delintfbit; //type: boolean
        class PmapItems; //type: System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems
        class CmapItems; //type: System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems
        class QueCmapItems; //type: System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems> pmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems> quecmap_items;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList


class System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems


class System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_26_ */

