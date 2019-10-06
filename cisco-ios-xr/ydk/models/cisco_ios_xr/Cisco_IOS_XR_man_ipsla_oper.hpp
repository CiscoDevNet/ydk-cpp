#ifndef _CISCO_IOS_XR_MAN_IPSLA_OPER_
#define _CISCO_IOS_XR_MAN_IPSLA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_ipsla_oper {

class Ipsla : public ydk::Entity
{
    public:
        Ipsla();
        ~Ipsla();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class MplsData; //type: Ipsla::MplsData
        class Responder; //type: Ipsla::Responder
        class OperationData; //type: Ipsla::OperationData
        class ApplicationInfo; //type: Ipsla::ApplicationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData> mpls_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::Responder> responder;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData> operation_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::ApplicationInfo> application_info;
        
}; // Ipsla


class Ipsla::MplsData : public ydk::Entity
{
    public:
        MplsData();
        ~MplsData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LspMonitors; //type: Ipsla::MplsData::LspMonitors
        class Discovery; //type: Ipsla::MplsData::Discovery

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::LspMonitors> lsp_monitors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::Discovery> discovery;
        
}; // Ipsla::MplsData


class Ipsla::MplsData::LspMonitors : public ydk::Entity
{
    public:
        LspMonitors();
        ~LspMonitors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LspMonitor; //type: Ipsla::MplsData::LspMonitors::LspMonitor

        ydk::YList lsp_monitor;
        
}; // Ipsla::MplsData::LspMonitors


class Ipsla::MplsData::LspMonitors::LspMonitor : public ydk::Entity
{
    public:
        LspMonitor();
        ~LspMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf monitor_id; //type: uint32
        class State; //type: Ipsla::MplsData::LspMonitors::LspMonitor::State
        class Operations; //type: Ipsla::MplsData::LspMonitors::LspMonitor::Operations
        class ScanQueues; //type: Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::LspMonitors::LspMonitor::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::LspMonitors::LspMonitor::Operations> operations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues> scan_queues;
        
}; // Ipsla::MplsData::LspMonitors::LspMonitor


class Ipsla::MplsData::LspMonitors::LspMonitor::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf scan_remaining; //type: uint32
        ydk::YLeaf delete_scan_remaining; //type: uint32
        ydk::YLeaf rediscovery_remaining; //type: uint32
        ydk::YLeaf lpd_compeletion_time; //type: uint32

}; // Ipsla::MplsData::LspMonitors::LspMonitor::State


class Ipsla::MplsData::LspMonitors::LspMonitor::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Operation; //type: Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation

        ydk::YList operation_;
        
}; // Ipsla::MplsData::LspMonitors::LspMonitor::Operations


class Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation : public ydk::Entity
{
    public:
        Operation();
        ~Operation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_id; //type: uint32
        class State; //type: Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State
        class LpdPaths; //type: Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths> lpd_paths;
        
}; // Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation


class Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf target_address; //type: string
        ydk::YLeaf target_mask; //type: uint32
        ydk::YLeaf group_status; //type: IpslaLspGrpStatusEnum
        ydk::YLeaf operation_time; //type: uint64

}; // Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State


class Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths : public ydk::Entity
{
    public:
        LpdPaths();
        ~LpdPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LpdPath; //type: Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath

        ydk::YList lpd_path;
        
}; // Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths


class Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath : public ydk::Entity
{
    public:
        LpdPath();
        ~LpdPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_index; //type: uint32
        ydk::YLeaf path_status; //type: IpslaLspGrpPathStatusEnum
        ydk::YLeaf operation_time; //type: uint64
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf success_count; //type: uint32
        ydk::YLeaf failure_count; //type: uint32
        class PathId; //type: Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId> path_id;
        
}; // Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath


class Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId : public ydk::Entity
{
    public:
        PathId();
        ~PathId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_selector; //type: string
        ydk::YLeaf output_interface; //type: string
        ydk::YLeaf nexthop_address; //type: string
        ydk::YLeafList downstream_label; //type: list of  uint32

}; // Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId


class Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues : public ydk::Entity
{
    public:
        ScanQueues();
        ~ScanQueues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ScanQueue; //type: Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue

        ydk::YList scan_queue;
        
}; // Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues


class Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue : public ydk::Entity
{
    public:
        ScanQueue();
        ~ScanQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf target_address; //type: string
        ydk::YLeaf target_mask; //type: uint32
        ydk::YLeaf entry; //type: IpslaMplsAddDeleteEnum

}; // Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue


class Ipsla::MplsData::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vpn; //type: Ipsla::MplsData::Discovery::Vpn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::Discovery::Vpn> vpn;
        
}; // Ipsla::MplsData::Discovery


class Ipsla::MplsData::Discovery::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class State; //type: Ipsla::MplsData::Discovery::Vpn::State
        class Nexthops; //type: Ipsla::MplsData::Discovery::Vpn::Nexthops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::Discovery::Vpn::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::Discovery::Vpn::Nexthops> nexthops;
        
}; // Ipsla::MplsData::Discovery::Vpn


class Ipsla::MplsData::Discovery::Vpn::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf refresh_remaining; //type: uint32

}; // Ipsla::MplsData::Discovery::Vpn::State


class Ipsla::MplsData::Discovery::Vpn::Nexthops : public ydk::Entity
{
    public:
        Nexthops();
        ~Nexthops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Nexthop; //type: Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop

        ydk::YList nexthop;
        
}; // Ipsla::MplsData::Discovery::Vpn::Nexthops


class Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        class Vrfs; //type: Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs
        class Prefix; //type: Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix> prefix;
        
}; // Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop


class Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs


class Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf prefix_count; //type: uint32

}; // Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf


class Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf target_address; //type: string
        ydk::YLeaf target_mask; //type: uint32

}; // Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix


class Ipsla::Responder : public ydk::Entity
{
    public:
        Responder();
        ~Responder();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ports; //type: Ipsla::Responder::Ports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::Responder::Ports> ports;
        
}; // Ipsla::Responder


class Ipsla::Responder::Ports : public ydk::Entity
{
    public:
        Ports();
        ~Ports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Port; //type: Ipsla::Responder::Ports::Port

        ydk::YList port;
        
}; // Ipsla::Responder::Ports


class Ipsla::Responder::Ports::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf port; //type: uint16
        ydk::YLeaf port_xr; //type: uint16
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf num_probes; //type: uint32
        ydk::YLeaf ctrl_probes; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf discard_on; //type: boolean
        ydk::YLeaf pd_time_stamp_failed; //type: boolean
        ydk::YLeaf is_ipsla; //type: boolean
        ydk::YLeaf drop_counter; //type: uint32
        ydk::YLeaf socket; //type: int32
        ydk::YLeaf local_ipv6_address; //type: string
        ydk::YLeaf family; //type: int32
        class Sender; //type: Ipsla::Responder::Ports::Port::Sender

        ydk::YList sender;
        
}; // Ipsla::Responder::Ports::Port


class Ipsla::Responder::Ports::Port::Sender : public ydk::Entity
{
    public:
        Sender();
        ~Sender();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf last_recv_time; //type: uint64
        ydk::YLeaf ipv6_address; //type: string

}; // Ipsla::Responder::Ports::Port::Sender


class Ipsla::OperationData : public ydk::Entity
{
    public:
        OperationData();
        ~OperationData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Operations; //type: Ipsla::OperationData::Operations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations> operations;
        
}; // Ipsla::OperationData


class Ipsla::OperationData::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Operation; //type: Ipsla::OperationData::Operations::Operation

        ydk::YList operation_;
        
}; // Ipsla::OperationData::Operations


class Ipsla::OperationData::Operations::Operation : public ydk::Entity
{
    public:
        Operation();
        ~Operation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf operation_id; //type: uint32
        class Common; //type: Ipsla::OperationData::Operations::Operation::Common
        class Lpd; //type: Ipsla::OperationData::Operations::Operation::Lpd
        class History; //type: Ipsla::OperationData::Operations::Operation::History
        class Statistics; //type: Ipsla::OperationData::Operations::Operation::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Common> common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd> lpd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics> statistics;
        
}; // Ipsla::OperationData::Operations::Operation


class Ipsla::OperationData::Operations::Operation::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OperationalState; //type: Ipsla::OperationData::Operations::Operation::Common::OperationalState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Common::OperationalState> operational_state;
        
}; // Ipsla::OperationData::Operations::Operation::Common


class Ipsla::OperationData::Operations::Operation::Common::OperationalState : public ydk::Entity
{
    public:
        OperationalState();
        ~OperationalState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modification_time; //type: uint64
        ydk::YLeaf start_time; //type: uint64
        ydk::YLeaf attempt_count; //type: uint32
        ydk::YLeaf skipped_count; //type: uint32
        ydk::YLeaf life_remaining; //type: uint32
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf recurring; //type: boolean
        ydk::YLeaf operational_state; //type: IpslaOperStateEnum
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf unexpected_packets; //type: uint32
        ydk::YLeaf unexpected_control_packets; //type: uint32
        ydk::YLeaf operation_time; //type: uint64

}; // Ipsla::OperationData::Operations::Operation::Common::OperationalState


class Ipsla::OperationData::Operations::Operation::Lpd : public ydk::Entity
{
    public:
        Lpd();
        ~Lpd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statistics; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics
        class Status; //type: Ipsla::OperationData::Operations::Operation::Lpd::Status

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Status> status;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Latest; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest
        class Aggregated; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest> latest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated> aggregated;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest : public ydk::Entity
{
    public:
        Latest();
        ~Latest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Target; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target> target;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target : public ydk::Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: uint64
        ydk::YLeaf return_code; //type: IpslaMplsLpdRetCode
        ydk::YLeaf completion_time_count; //type: uint32
        ydk::YLeaf completion_time; //type: uint32
        ydk::YLeaf min_completion_time; //type: uint32
        ydk::YLeaf max_completion_time; //type: uint32
        ydk::YLeaf sum_completion_time; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf min_path_count; //type: uint32
        ydk::YLeaf max_path_count; //type: uint32
        ydk::YLeaf ok_count; //type: uint32
        ydk::YLeaf no_path_count; //type: uint32
        ydk::YLeaf all_paths_broken_count; //type: uint32
        ydk::YLeaf all_paths_unexplorable_count; //type: uint32
        ydk::YLeaf all_paths_broken_or_unexplorable_count; //type: uint32
        ydk::YLeaf timeout_count; //type: uint32
        ydk::YLeaf internal_error_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        class TargetAddress; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress> target_address;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf target_type; //type: IpslaTargetTypeEnum
        ydk::YLeaf ipv4_address_target; //type: string
        ydk::YLeaf ipv6_address_target; //type: string
        class Ipv4PrefixTarget; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget
        class TunnelIdTarget; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget
        class Ipv4PseudowireTarget; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget> ipv4_prefix_target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget> tunnel_id_target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget> ipv4_pseudowire_target;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget : public ydk::Entity
{
    public:
        Ipv4PrefixTarget();
        ~Ipv4PrefixTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask_length; //type: uint8

}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget : public ydk::Entity
{
    public:
        TunnelIdTarget();
        ~TunnelIdTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget : public ydk::Entity
{
    public:
        Ipv4PseudowireTarget();
        ~Ipv4PseudowireTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf virtual_circuit_id; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated : public ydk::Entity
{
    public:
        Aggregated();
        ~Aggregated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hours; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours> hours;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours : public ydk::Entity
{
    public:
        Hours();
        ~Hours();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour

        ydk::YList hour;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour : public ydk::Entity
{
    public:
        Hour();
        ~Hour();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hour_index; //type: uint32
        ydk::YLeaf start_time; //type: uint64
        ydk::YLeaf return_code; //type: IpslaMplsLpdRetCode
        ydk::YLeaf completion_time_count; //type: uint32
        ydk::YLeaf completion_time; //type: uint32
        ydk::YLeaf min_completion_time; //type: uint32
        ydk::YLeaf max_completion_time; //type: uint32
        ydk::YLeaf sum_completion_time; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        ydk::YLeaf min_path_count; //type: uint32
        ydk::YLeaf max_path_count; //type: uint32
        ydk::YLeaf ok_count; //type: uint32
        ydk::YLeaf no_path_count; //type: uint32
        ydk::YLeaf all_paths_broken_count; //type: uint32
        ydk::YLeaf all_paths_unexplorable_count; //type: uint32
        ydk::YLeaf all_paths_broken_or_unexplorable_count; //type: uint32
        ydk::YLeaf timeout_count; //type: uint32
        ydk::YLeaf internal_error_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        class TargetAddress; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress> target_address;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf target_type; //type: IpslaTargetTypeEnum
        ydk::YLeaf ipv4_address_target; //type: string
        ydk::YLeaf ipv6_address_target; //type: string
        class Ipv4PrefixTarget; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget
        class TunnelIdTarget; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget
        class Ipv4PseudowireTarget; //type: Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget> ipv4_prefix_target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget> tunnel_id_target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget> ipv4_pseudowire_target;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget : public ydk::Entity
{
    public:
        Ipv4PrefixTarget();
        ~Ipv4PrefixTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask_length; //type: uint8

}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget : public ydk::Entity
{
    public:
        TunnelIdTarget();
        ~TunnelIdTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget


class Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget : public ydk::Entity
{
    public:
        Ipv4PseudowireTarget();
        ~Ipv4PseudowireTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf virtual_circuit_id; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget


class Ipsla::OperationData::Operations::Operation::Lpd::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LpdPaths; //type: Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths
        class State; //type: Ipsla::OperationData::Operations::Operation::Lpd::Status::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths> lpd_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Status::State> state;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Status


class Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths : public ydk::Entity
{
    public:
        LpdPaths();
        ~LpdPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LpdPath; //type: Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath

        ydk::YList lpd_path;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths


class Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath : public ydk::Entity
{
    public:
        LpdPath();
        ~LpdPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_index; //type: uint32
        ydk::YLeaf path_status; //type: IpslaMplsLpdPathDiscoveryStatus
        class PathId; //type: Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId> path_id;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath


class Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId : public ydk::Entity
{
    public:
        PathId();
        ~PathId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_selector; //type: string
        ydk::YLeaf output_interface; //type: string
        ydk::YLeaf nexthop_address; //type: string
        ydk::YLeafList downstream_label; //type: list of  uint32

}; // Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId


class Ipsla::OperationData::Operations::Operation::Lpd::Status::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor_id; //type: uint32
        ydk::YLeaf discovery_mode; //type: IpslaMplsLpdDiscoveryModeEnum
        ydk::YLeaf start_time; //type: uint64
        ydk::YLeaf return_code; //type: IpslaMplsLpdRetCode
        ydk::YLeaf completion_time; //type: uint32
        ydk::YLeaf path_count; //type: uint32
        class TargetAddress; //type: Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress> target_address;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Status::State


class Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf target_type; //type: IpslaTargetTypeEnum
        ydk::YLeaf ipv4_address_target; //type: string
        ydk::YLeaf ipv6_address_target; //type: string
        class Ipv4PrefixTarget; //type: Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget
        class TunnelIdTarget; //type: Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget
        class Ipv4PseudowireTarget; //type: Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget> ipv4_prefix_target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget> tunnel_id_target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget> ipv4_pseudowire_target;
        
}; // Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress


class Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget : public ydk::Entity
{
    public:
        Ipv4PrefixTarget();
        ~Ipv4PrefixTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask_length; //type: uint8

}; // Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget


class Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget : public ydk::Entity
{
    public:
        TunnelIdTarget();
        ~TunnelIdTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget


class Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget : public ydk::Entity
{
    public:
        Ipv4PseudowireTarget();
        ~Ipv4PseudowireTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf virtual_circuit_id; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget


class Ipsla::OperationData::Operations::Operation::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Path; //type: Ipsla::OperationData::Operations::Operation::History::Path
        class Target; //type: Ipsla::OperationData::Operations::Operation::History::Target

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Target> target;
        
}; // Ipsla::OperationData::Operations::Operation::History


class Ipsla::OperationData::Operations::Operation::History::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lifes; //type: Ipsla::OperationData::Operations::Operation::History::Path::Lifes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Path::Lifes> lifes;
        
}; // Ipsla::OperationData::Operations::Operation::History::Path


class Ipsla::OperationData::Operations::Operation::History::Path::Lifes : public ydk::Entity
{
    public:
        Lifes();
        ~Lifes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Life; //type: Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life

        ydk::YList life;
        
}; // Ipsla::OperationData::Operations::Operation::History::Path::Lifes


class Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life : public ydk::Entity
{
    public:
        Life();
        ~Life();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf life_index; //type: uint32
        class Buckets; //type: Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets> buckets;
        
}; // Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life


class Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets : public ydk::Entity
{
    public:
        Buckets();
        ~Buckets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bucket; //type: Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket

        ydk::YList bucket;
        
}; // Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets


class Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket : public ydk::Entity
{
    public:
        Bucket();
        ~Bucket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bucket_index; //type: uint32
        class Samples; //type: Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples> samples;
        
}; // Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket


class Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples : public ydk::Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sample; //type: Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample

        ydk::YList sample;
        
}; // Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples


class Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample : public ydk::Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sample_index; //type: uint32
        ydk::YLeaf start_time; //type: uint64
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf return_code; //type: IpslaRetCode
        class TargetAddress; //type: Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress> target_address;
        
}; // Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample


class Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf target_type; //type: IpslaTargetTypeEnum
        ydk::YLeaf ipv4_address_target; //type: string
        ydk::YLeaf ipv6_address_target; //type: string
        class Ipv4PrefixTarget; //type: Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget
        class TunnelIdTarget; //type: Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget
        class Ipv4PseudowireTarget; //type: Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget> ipv4_prefix_target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget> tunnel_id_target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget> ipv4_pseudowire_target;
        
}; // Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress


class Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget : public ydk::Entity
{
    public:
        Ipv4PrefixTarget();
        ~Ipv4PrefixTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask_length; //type: uint8

}; // Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget


class Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget : public ydk::Entity
{
    public:
        TunnelIdTarget();
        ~TunnelIdTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget


class Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget : public ydk::Entity
{
    public:
        Ipv4PseudowireTarget();
        ~Ipv4PseudowireTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf virtual_circuit_id; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget


class Ipsla::OperationData::Operations::Operation::History::Target : public ydk::Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lifes; //type: Ipsla::OperationData::Operations::Operation::History::Target::Lifes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Target::Lifes> lifes;
        
}; // Ipsla::OperationData::Operations::Operation::History::Target


class Ipsla::OperationData::Operations::Operation::History::Target::Lifes : public ydk::Entity
{
    public:
        Lifes();
        ~Lifes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Life; //type: Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life

        ydk::YList life;
        
}; // Ipsla::OperationData::Operations::Operation::History::Target::Lifes


class Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life : public ydk::Entity
{
    public:
        Life();
        ~Life();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf life_index; //type: uint32
        class Buckets; //type: Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets> buckets;
        
}; // Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life


class Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets : public ydk::Entity
{
    public:
        Buckets();
        ~Buckets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bucket; //type: Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket

        ydk::YList bucket;
        
}; // Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets


class Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket : public ydk::Entity
{
    public:
        Bucket();
        ~Bucket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bucket_index; //type: uint32
        ydk::YLeaf start_time; //type: uint64
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf return_code; //type: IpslaRetCode
        class TargetAddress; //type: Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress> target_address;
        
}; // Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket


class Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf target_type; //type: IpslaTargetTypeEnum
        ydk::YLeaf ipv4_address_target; //type: string
        ydk::YLeaf ipv6_address_target; //type: string
        class Ipv4PrefixTarget; //type: Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget
        class TunnelIdTarget; //type: Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget
        class Ipv4PseudowireTarget; //type: Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget> ipv4_prefix_target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget> tunnel_id_target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget> ipv4_pseudowire_target;
        
}; // Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress


class Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget : public ydk::Entity
{
    public:
        Ipv4PrefixTarget();
        ~Ipv4PrefixTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask_length; //type: uint8

}; // Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget


class Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget : public ydk::Entity
{
    public:
        TunnelIdTarget();
        ~TunnelIdTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget


class Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget : public ydk::Entity
{
    public:
        Ipv4PseudowireTarget();
        ~Ipv4PseudowireTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf virtual_circuit_id; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget


class Ipsla::OperationData::Operations::Operation::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Latest; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest
        class Aggregated; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest> latest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated> aggregated;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics


class Ipsla::OperationData::Operations::Operation::Statistics::Latest : public ydk::Entity
{
    public:
        Latest();
        ~Latest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Target; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target
        class Hops; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops
        class LpdPaths; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target> target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops> hops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths> lpd_paths;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target : public ydk::Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats
        class SpecificStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats> common_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats> specific_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats : public ydk::Entity
{
    public:
        CommonStats();
        ~CommonStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_time; //type: uint64
        ydk::YLeaf return_code; //type: IpslaRetCode
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf update_count; //type: uint32
        ydk::YLeaf ok_count; //type: uint32
        ydk::YLeaf disconnect_count; //type: uint32
        ydk::YLeaf timeout_count; //type: uint32
        ydk::YLeaf busy_count; //type: uint32
        ydk::YLeaf no_connection_count; //type: uint32
        ydk::YLeaf dropped_count; //type: uint32
        ydk::YLeaf internal_error_count; //type: uint32
        ydk::YLeaf sequence_error_count; //type: uint32
        ydk::YLeaf verify_error_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats : public ydk::Entity
{
    public:
        SpecificStats();
        ~SpecificStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf op_type; //type: OpTypeEnum
        class IcmpPathJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats
        class UdpJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats> icmp_path_jitter_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats> udp_jitter_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats : public ydk::Entity
{
    public:
        IcmpPathJitterStats();
        ~IcmpPathJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf packet_interval; //type: uint32
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf packet_count; //type: uint32
        ydk::YLeaf packet_loss_count; //type: uint32
        ydk::YLeaf out_of_sequence_count; //type: uint32
        ydk::YLeaf discarded_sample_count; //type: uint32
        ydk::YLeaf verify_errors_count; //type: uint32
        ydk::YLeaf dropped_error_count; //type: uint32
        ydk::YLeaf jitter; //type: uint32
        ydk::YLeaf pos_jitter_sum; //type: uint32
        ydk::YLeaf pos_jitter_sum2; //type: uint64
        ydk::YLeaf pos_jitter_min; //type: uint32
        ydk::YLeaf pos_jitter_max; //type: uint32
        ydk::YLeaf pos_jitter_count; //type: uint32
        ydk::YLeaf neg_jitter_sum; //type: uint32
        ydk::YLeaf neg_jitter_min; //type: uint32
        ydk::YLeaf neg_jitter_max; //type: uint32
        ydk::YLeaf neg_jitter_sum2; //type: uint64
        ydk::YLeaf neg_jitter_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats : public ydk::Entity
{
    public:
        UdpJitterStats();
        ~UdpJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf jitter_in; //type: uint32
        ydk::YLeaf jitter_out; //type: uint32
        ydk::YLeaf packet_loss_sd; //type: uint32
        ydk::YLeaf packet_loss_ds; //type: uint32
        ydk::YLeaf packet_out_of_sequence; //type: uint32
        ydk::YLeaf packet_mia; //type: uint32
        ydk::YLeaf packet_skipped; //type: uint32
        ydk::YLeaf packet_late_arrivals; //type: uint32
        ydk::YLeaf packet_invalid_tstamp; //type: uint32
        ydk::YLeaf internal_errors_count; //type: uint32
        ydk::YLeaf busies_count; //type: uint32
        ydk::YLeaf positive_sd_sum; //type: uint32
        ydk::YLeaf positive_sd_sum2; //type: uint64
        ydk::YLeaf positive_sd_min; //type: uint32
        ydk::YLeaf positive_sd_max; //type: uint32
        ydk::YLeaf positive_sd_count; //type: uint32
        ydk::YLeaf negative_sd_sum; //type: uint32
        ydk::YLeaf negative_sd_sum2; //type: uint64
        ydk::YLeaf negative_sd_min; //type: uint32
        ydk::YLeaf negative_sd_max; //type: uint32
        ydk::YLeaf negative_sd_count; //type: uint32
        ydk::YLeaf positive_ds_sum; //type: uint32
        ydk::YLeaf positive_ds_sum2; //type: uint64
        ydk::YLeaf positive_ds_min; //type: uint32
        ydk::YLeaf positive_ds_max; //type: uint32
        ydk::YLeaf positive_ds_count; //type: uint32
        ydk::YLeaf negative_ds_sum; //type: uint32
        ydk::YLeaf negative_ds_sum2; //type: uint64
        ydk::YLeaf negative_ds_min; //type: uint32
        ydk::YLeaf negative_ds_max; //type: uint32
        ydk::YLeaf negative_ds_count; //type: uint32
        ydk::YLeaf one_way_count; //type: uint32
        ydk::YLeaf one_way_sd_min; //type: uint32
        ydk::YLeaf one_way_sd_max; //type: uint32
        ydk::YLeaf one_way_sd_sum; //type: uint32
        ydk::YLeaf one_way_sd_sum2; //type: uint64
        ydk::YLeaf one_way_ds_min; //type: uint32
        ydk::YLeaf one_way_ds_max; //type: uint32
        ydk::YLeaf one_way_ds_sum; //type: uint32
        ydk::YLeaf one_way_ds_sum2; //type: uint64

}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hop; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop

        ydk::YList hop;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_index; //type: uint32
        class CommonStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats
        class SpecificStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats> common_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats> specific_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats : public ydk::Entity
{
    public:
        CommonStats();
        ~CommonStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_time; //type: uint64
        ydk::YLeaf return_code; //type: IpslaRetCode
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf update_count; //type: uint32
        ydk::YLeaf ok_count; //type: uint32
        ydk::YLeaf disconnect_count; //type: uint32
        ydk::YLeaf timeout_count; //type: uint32
        ydk::YLeaf busy_count; //type: uint32
        ydk::YLeaf no_connection_count; //type: uint32
        ydk::YLeaf dropped_count; //type: uint32
        ydk::YLeaf internal_error_count; //type: uint32
        ydk::YLeaf sequence_error_count; //type: uint32
        ydk::YLeaf verify_error_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats : public ydk::Entity
{
    public:
        SpecificStats();
        ~SpecificStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf op_type; //type: OpTypeEnum
        class IcmpPathJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats
        class UdpJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats> icmp_path_jitter_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats> udp_jitter_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats : public ydk::Entity
{
    public:
        IcmpPathJitterStats();
        ~IcmpPathJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf packet_interval; //type: uint32
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf packet_count; //type: uint32
        ydk::YLeaf packet_loss_count; //type: uint32
        ydk::YLeaf out_of_sequence_count; //type: uint32
        ydk::YLeaf discarded_sample_count; //type: uint32
        ydk::YLeaf verify_errors_count; //type: uint32
        ydk::YLeaf dropped_error_count; //type: uint32
        ydk::YLeaf jitter; //type: uint32
        ydk::YLeaf pos_jitter_sum; //type: uint32
        ydk::YLeaf pos_jitter_sum2; //type: uint64
        ydk::YLeaf pos_jitter_min; //type: uint32
        ydk::YLeaf pos_jitter_max; //type: uint32
        ydk::YLeaf pos_jitter_count; //type: uint32
        ydk::YLeaf neg_jitter_sum; //type: uint32
        ydk::YLeaf neg_jitter_min; //type: uint32
        ydk::YLeaf neg_jitter_max; //type: uint32
        ydk::YLeaf neg_jitter_sum2; //type: uint64
        ydk::YLeaf neg_jitter_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats : public ydk::Entity
{
    public:
        UdpJitterStats();
        ~UdpJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf jitter_in; //type: uint32
        ydk::YLeaf jitter_out; //type: uint32
        ydk::YLeaf packet_loss_sd; //type: uint32
        ydk::YLeaf packet_loss_ds; //type: uint32
        ydk::YLeaf packet_out_of_sequence; //type: uint32
        ydk::YLeaf packet_mia; //type: uint32
        ydk::YLeaf packet_skipped; //type: uint32
        ydk::YLeaf packet_late_arrivals; //type: uint32
        ydk::YLeaf packet_invalid_tstamp; //type: uint32
        ydk::YLeaf internal_errors_count; //type: uint32
        ydk::YLeaf busies_count; //type: uint32
        ydk::YLeaf positive_sd_sum; //type: uint32
        ydk::YLeaf positive_sd_sum2; //type: uint64
        ydk::YLeaf positive_sd_min; //type: uint32
        ydk::YLeaf positive_sd_max; //type: uint32
        ydk::YLeaf positive_sd_count; //type: uint32
        ydk::YLeaf negative_sd_sum; //type: uint32
        ydk::YLeaf negative_sd_sum2; //type: uint64
        ydk::YLeaf negative_sd_min; //type: uint32
        ydk::YLeaf negative_sd_max; //type: uint32
        ydk::YLeaf negative_sd_count; //type: uint32
        ydk::YLeaf positive_ds_sum; //type: uint32
        ydk::YLeaf positive_ds_sum2; //type: uint64
        ydk::YLeaf positive_ds_min; //type: uint32
        ydk::YLeaf positive_ds_max; //type: uint32
        ydk::YLeaf positive_ds_count; //type: uint32
        ydk::YLeaf negative_ds_sum; //type: uint32
        ydk::YLeaf negative_ds_sum2; //type: uint64
        ydk::YLeaf negative_ds_min; //type: uint32
        ydk::YLeaf negative_ds_max; //type: uint32
        ydk::YLeaf negative_ds_count; //type: uint32
        ydk::YLeaf one_way_count; //type: uint32
        ydk::YLeaf one_way_sd_min; //type: uint32
        ydk::YLeaf one_way_sd_max; //type: uint32
        ydk::YLeaf one_way_sd_sum; //type: uint32
        ydk::YLeaf one_way_sd_sum2; //type: uint64
        ydk::YLeaf one_way_ds_min; //type: uint32
        ydk::YLeaf one_way_ds_max; //type: uint32
        ydk::YLeaf one_way_ds_sum; //type: uint32
        ydk::YLeaf one_way_ds_sum2; //type: uint64

}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths : public ydk::Entity
{
    public:
        LpdPaths();
        ~LpdPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LpdPath; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath

        ydk::YList lpd_path;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath : public ydk::Entity
{
    public:
        LpdPath();
        ~LpdPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_index; //type: uint32
        ydk::YLeaf return_code; //type: IpslaRetCode
        class PathId; //type: Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId> path_id;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath


class Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId : public ydk::Entity
{
    public:
        PathId();
        ~PathId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_selector; //type: string
        ydk::YLeaf output_interface; //type: string
        ydk::YLeaf nexthop_address; //type: string
        ydk::YLeafList downstream_label; //type: list of  uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated : public ydk::Entity
{
    public:
        Aggregated();
        ~Aggregated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EnhancedIntervals; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals
        class Hours; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals> enhanced_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours> hours;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals : public ydk::Entity
{
    public:
        EnhancedIntervals();
        ~EnhancedIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EnhancedInterval; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval

        ydk::YList enhanced_interval;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval : public ydk::Entity
{
    public:
        EnhancedInterval();
        ~EnhancedInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enhanced_interval; //type: uint32
        class StartTimes; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes> start_times;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes : public ydk::Entity
{
    public:
        StartTimes();
        ~StartTimes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StartTime; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime

        ydk::YList start_time;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval_start_time; //type: string
        class CommonStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats
        class SpecificStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats> common_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats> specific_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats : public ydk::Entity
{
    public:
        CommonStats();
        ~CommonStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_time; //type: uint64
        ydk::YLeaf return_code; //type: IpslaRetCode
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf update_count; //type: uint32
        ydk::YLeaf ok_count; //type: uint32
        ydk::YLeaf disconnect_count; //type: uint32
        ydk::YLeaf timeout_count; //type: uint32
        ydk::YLeaf busy_count; //type: uint32
        ydk::YLeaf no_connection_count; //type: uint32
        ydk::YLeaf dropped_count; //type: uint32
        ydk::YLeaf internal_error_count; //type: uint32
        ydk::YLeaf sequence_error_count; //type: uint32
        ydk::YLeaf verify_error_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats : public ydk::Entity
{
    public:
        SpecificStats();
        ~SpecificStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf op_type; //type: OpTypeEnum
        class IcmpPathJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats
        class UdpJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats> icmp_path_jitter_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats> udp_jitter_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats : public ydk::Entity
{
    public:
        IcmpPathJitterStats();
        ~IcmpPathJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf packet_interval; //type: uint32
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf packet_count; //type: uint32
        ydk::YLeaf packet_loss_count; //type: uint32
        ydk::YLeaf out_of_sequence_count; //type: uint32
        ydk::YLeaf discarded_sample_count; //type: uint32
        ydk::YLeaf verify_errors_count; //type: uint32
        ydk::YLeaf dropped_error_count; //type: uint32
        ydk::YLeaf jitter; //type: uint32
        ydk::YLeaf pos_jitter_sum; //type: uint32
        ydk::YLeaf pos_jitter_sum2; //type: uint64
        ydk::YLeaf pos_jitter_min; //type: uint32
        ydk::YLeaf pos_jitter_max; //type: uint32
        ydk::YLeaf pos_jitter_count; //type: uint32
        ydk::YLeaf neg_jitter_sum; //type: uint32
        ydk::YLeaf neg_jitter_min; //type: uint32
        ydk::YLeaf neg_jitter_max; //type: uint32
        ydk::YLeaf neg_jitter_sum2; //type: uint64
        ydk::YLeaf neg_jitter_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats : public ydk::Entity
{
    public:
        UdpJitterStats();
        ~UdpJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf jitter_in; //type: uint32
        ydk::YLeaf jitter_out; //type: uint32
        ydk::YLeaf packet_loss_sd; //type: uint32
        ydk::YLeaf packet_loss_ds; //type: uint32
        ydk::YLeaf packet_out_of_sequence; //type: uint32
        ydk::YLeaf packet_mia; //type: uint32
        ydk::YLeaf packet_skipped; //type: uint32
        ydk::YLeaf packet_late_arrivals; //type: uint32
        ydk::YLeaf packet_invalid_tstamp; //type: uint32
        ydk::YLeaf internal_errors_count; //type: uint32
        ydk::YLeaf busies_count; //type: uint32
        ydk::YLeaf positive_sd_sum; //type: uint32
        ydk::YLeaf positive_sd_sum2; //type: uint64
        ydk::YLeaf positive_sd_min; //type: uint32
        ydk::YLeaf positive_sd_max; //type: uint32
        ydk::YLeaf positive_sd_count; //type: uint32
        ydk::YLeaf negative_sd_sum; //type: uint32
        ydk::YLeaf negative_sd_sum2; //type: uint64
        ydk::YLeaf negative_sd_min; //type: uint32
        ydk::YLeaf negative_sd_max; //type: uint32
        ydk::YLeaf negative_sd_count; //type: uint32
        ydk::YLeaf positive_ds_sum; //type: uint32
        ydk::YLeaf positive_ds_sum2; //type: uint64
        ydk::YLeaf positive_ds_min; //type: uint32
        ydk::YLeaf positive_ds_max; //type: uint32
        ydk::YLeaf positive_ds_count; //type: uint32
        ydk::YLeaf negative_ds_sum; //type: uint32
        ydk::YLeaf negative_ds_sum2; //type: uint64
        ydk::YLeaf negative_ds_min; //type: uint32
        ydk::YLeaf negative_ds_max; //type: uint32
        ydk::YLeaf negative_ds_count; //type: uint32
        ydk::YLeaf one_way_count; //type: uint32
        ydk::YLeaf one_way_sd_min; //type: uint32
        ydk::YLeaf one_way_sd_max; //type: uint32
        ydk::YLeaf one_way_sd_sum; //type: uint32
        ydk::YLeaf one_way_sd_sum2; //type: uint64
        ydk::YLeaf one_way_ds_min; //type: uint32
        ydk::YLeaf one_way_ds_max; //type: uint32
        ydk::YLeaf one_way_ds_sum; //type: uint32
        ydk::YLeaf one_way_ds_sum2; //type: uint64

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours : public ydk::Entity
{
    public:
        Hours();
        ~Hours();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour

        ydk::YList hour;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour : public ydk::Entity
{
    public:
        Hour();
        ~Hour();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hour_index; //type: uint32
        class Distributed; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed
        class NonDistributed; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed> distributed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed> non_distributed;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed : public ydk::Entity
{
    public:
        Distributed();
        ~Distributed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Paths; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths
        class Target; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths> paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target> target;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Path; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path

        ydk::YList path;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_index; //type: uint32
        class Hops; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops> hops;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hop; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop

        ydk::YList hop;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_index; //type: uint32
        class DistributionIntervals; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals> distribution_intervals;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals : public ydk::Entity
{
    public:
        DistributionIntervals();
        ~DistributionIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DistributionInterval; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval

        ydk::YList distribution_interval;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval : public ydk::Entity
{
    public:
        DistributionInterval();
        ~DistributionInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distribution_index; //type: uint32
        class CommonStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats
        class SpecificStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats> common_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats> specific_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats : public ydk::Entity
{
    public:
        CommonStats();
        ~CommonStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_time; //type: uint64
        ydk::YLeaf return_code; //type: IpslaRetCode
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf update_count; //type: uint32
        ydk::YLeaf ok_count; //type: uint32
        ydk::YLeaf disconnect_count; //type: uint32
        ydk::YLeaf timeout_count; //type: uint32
        ydk::YLeaf busy_count; //type: uint32
        ydk::YLeaf no_connection_count; //type: uint32
        ydk::YLeaf dropped_count; //type: uint32
        ydk::YLeaf internal_error_count; //type: uint32
        ydk::YLeaf sequence_error_count; //type: uint32
        ydk::YLeaf verify_error_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats : public ydk::Entity
{
    public:
        SpecificStats();
        ~SpecificStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf op_type; //type: OpTypeEnum
        class IcmpPathJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats
        class UdpJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats> icmp_path_jitter_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats> udp_jitter_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats : public ydk::Entity
{
    public:
        IcmpPathJitterStats();
        ~IcmpPathJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf packet_interval; //type: uint32
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf packet_count; //type: uint32
        ydk::YLeaf packet_loss_count; //type: uint32
        ydk::YLeaf out_of_sequence_count; //type: uint32
        ydk::YLeaf discarded_sample_count; //type: uint32
        ydk::YLeaf verify_errors_count; //type: uint32
        ydk::YLeaf dropped_error_count; //type: uint32
        ydk::YLeaf jitter; //type: uint32
        ydk::YLeaf pos_jitter_sum; //type: uint32
        ydk::YLeaf pos_jitter_sum2; //type: uint64
        ydk::YLeaf pos_jitter_min; //type: uint32
        ydk::YLeaf pos_jitter_max; //type: uint32
        ydk::YLeaf pos_jitter_count; //type: uint32
        ydk::YLeaf neg_jitter_sum; //type: uint32
        ydk::YLeaf neg_jitter_min; //type: uint32
        ydk::YLeaf neg_jitter_max; //type: uint32
        ydk::YLeaf neg_jitter_sum2; //type: uint64
        ydk::YLeaf neg_jitter_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats : public ydk::Entity
{
    public:
        UdpJitterStats();
        ~UdpJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf jitter_in; //type: uint32
        ydk::YLeaf jitter_out; //type: uint32
        ydk::YLeaf packet_loss_sd; //type: uint32
        ydk::YLeaf packet_loss_ds; //type: uint32
        ydk::YLeaf packet_out_of_sequence; //type: uint32
        ydk::YLeaf packet_mia; //type: uint32
        ydk::YLeaf packet_skipped; //type: uint32
        ydk::YLeaf packet_late_arrivals; //type: uint32
        ydk::YLeaf packet_invalid_tstamp; //type: uint32
        ydk::YLeaf internal_errors_count; //type: uint32
        ydk::YLeaf busies_count; //type: uint32
        ydk::YLeaf positive_sd_sum; //type: uint32
        ydk::YLeaf positive_sd_sum2; //type: uint64
        ydk::YLeaf positive_sd_min; //type: uint32
        ydk::YLeaf positive_sd_max; //type: uint32
        ydk::YLeaf positive_sd_count; //type: uint32
        ydk::YLeaf negative_sd_sum; //type: uint32
        ydk::YLeaf negative_sd_sum2; //type: uint64
        ydk::YLeaf negative_sd_min; //type: uint32
        ydk::YLeaf negative_sd_max; //type: uint32
        ydk::YLeaf negative_sd_count; //type: uint32
        ydk::YLeaf positive_ds_sum; //type: uint32
        ydk::YLeaf positive_ds_sum2; //type: uint64
        ydk::YLeaf positive_ds_min; //type: uint32
        ydk::YLeaf positive_ds_max; //type: uint32
        ydk::YLeaf positive_ds_count; //type: uint32
        ydk::YLeaf negative_ds_sum; //type: uint32
        ydk::YLeaf negative_ds_sum2; //type: uint64
        ydk::YLeaf negative_ds_min; //type: uint32
        ydk::YLeaf negative_ds_max; //type: uint32
        ydk::YLeaf negative_ds_count; //type: uint32
        ydk::YLeaf one_way_count; //type: uint32
        ydk::YLeaf one_way_sd_min; //type: uint32
        ydk::YLeaf one_way_sd_max; //type: uint32
        ydk::YLeaf one_way_sd_sum; //type: uint32
        ydk::YLeaf one_way_sd_sum2; //type: uint64
        ydk::YLeaf one_way_ds_min; //type: uint32
        ydk::YLeaf one_way_ds_max; //type: uint32
        ydk::YLeaf one_way_ds_sum; //type: uint32
        ydk::YLeaf one_way_ds_sum2; //type: uint64

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target : public ydk::Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DistributionIntervals; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals> distribution_intervals;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals : public ydk::Entity
{
    public:
        DistributionIntervals();
        ~DistributionIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DistributionInterval; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval

        ydk::YList distribution_interval;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval : public ydk::Entity
{
    public:
        DistributionInterval();
        ~DistributionInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distribution_index; //type: uint32
        class CommonStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats
        class SpecificStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats> common_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats> specific_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats : public ydk::Entity
{
    public:
        CommonStats();
        ~CommonStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_time; //type: uint64
        ydk::YLeaf return_code; //type: IpslaRetCode
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf update_count; //type: uint32
        ydk::YLeaf ok_count; //type: uint32
        ydk::YLeaf disconnect_count; //type: uint32
        ydk::YLeaf timeout_count; //type: uint32
        ydk::YLeaf busy_count; //type: uint32
        ydk::YLeaf no_connection_count; //type: uint32
        ydk::YLeaf dropped_count; //type: uint32
        ydk::YLeaf internal_error_count; //type: uint32
        ydk::YLeaf sequence_error_count; //type: uint32
        ydk::YLeaf verify_error_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats : public ydk::Entity
{
    public:
        SpecificStats();
        ~SpecificStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf op_type; //type: OpTypeEnum
        class IcmpPathJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats
        class UdpJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats> icmp_path_jitter_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats> udp_jitter_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats : public ydk::Entity
{
    public:
        IcmpPathJitterStats();
        ~IcmpPathJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf packet_interval; //type: uint32
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf packet_count; //type: uint32
        ydk::YLeaf packet_loss_count; //type: uint32
        ydk::YLeaf out_of_sequence_count; //type: uint32
        ydk::YLeaf discarded_sample_count; //type: uint32
        ydk::YLeaf verify_errors_count; //type: uint32
        ydk::YLeaf dropped_error_count; //type: uint32
        ydk::YLeaf jitter; //type: uint32
        ydk::YLeaf pos_jitter_sum; //type: uint32
        ydk::YLeaf pos_jitter_sum2; //type: uint64
        ydk::YLeaf pos_jitter_min; //type: uint32
        ydk::YLeaf pos_jitter_max; //type: uint32
        ydk::YLeaf pos_jitter_count; //type: uint32
        ydk::YLeaf neg_jitter_sum; //type: uint32
        ydk::YLeaf neg_jitter_min; //type: uint32
        ydk::YLeaf neg_jitter_max; //type: uint32
        ydk::YLeaf neg_jitter_sum2; //type: uint64
        ydk::YLeaf neg_jitter_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats : public ydk::Entity
{
    public:
        UdpJitterStats();
        ~UdpJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf jitter_in; //type: uint32
        ydk::YLeaf jitter_out; //type: uint32
        ydk::YLeaf packet_loss_sd; //type: uint32
        ydk::YLeaf packet_loss_ds; //type: uint32
        ydk::YLeaf packet_out_of_sequence; //type: uint32
        ydk::YLeaf packet_mia; //type: uint32
        ydk::YLeaf packet_skipped; //type: uint32
        ydk::YLeaf packet_late_arrivals; //type: uint32
        ydk::YLeaf packet_invalid_tstamp; //type: uint32
        ydk::YLeaf internal_errors_count; //type: uint32
        ydk::YLeaf busies_count; //type: uint32
        ydk::YLeaf positive_sd_sum; //type: uint32
        ydk::YLeaf positive_sd_sum2; //type: uint64
        ydk::YLeaf positive_sd_min; //type: uint32
        ydk::YLeaf positive_sd_max; //type: uint32
        ydk::YLeaf positive_sd_count; //type: uint32
        ydk::YLeaf negative_sd_sum; //type: uint32
        ydk::YLeaf negative_sd_sum2; //type: uint64
        ydk::YLeaf negative_sd_min; //type: uint32
        ydk::YLeaf negative_sd_max; //type: uint32
        ydk::YLeaf negative_sd_count; //type: uint32
        ydk::YLeaf positive_ds_sum; //type: uint32
        ydk::YLeaf positive_ds_sum2; //type: uint64
        ydk::YLeaf positive_ds_min; //type: uint32
        ydk::YLeaf positive_ds_max; //type: uint32
        ydk::YLeaf positive_ds_count; //type: uint32
        ydk::YLeaf negative_ds_sum; //type: uint32
        ydk::YLeaf negative_ds_sum2; //type: uint64
        ydk::YLeaf negative_ds_min; //type: uint32
        ydk::YLeaf negative_ds_max; //type: uint32
        ydk::YLeaf negative_ds_count; //type: uint32
        ydk::YLeaf one_way_count; //type: uint32
        ydk::YLeaf one_way_sd_min; //type: uint32
        ydk::YLeaf one_way_sd_max; //type: uint32
        ydk::YLeaf one_way_sd_sum; //type: uint32
        ydk::YLeaf one_way_sd_sum2; //type: uint64
        ydk::YLeaf one_way_ds_min; //type: uint32
        ydk::YLeaf one_way_ds_max; //type: uint32
        ydk::YLeaf one_way_ds_sum; //type: uint32
        ydk::YLeaf one_way_ds_sum2; //type: uint64

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed : public ydk::Entity
{
    public:
        NonDistributed();
        ~NonDistributed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Target; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target
        class Paths; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths
        class LpdPaths; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target> target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths> paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths> lpd_paths;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target : public ydk::Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats
        class SpecificStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats> common_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats> specific_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats : public ydk::Entity
{
    public:
        CommonStats();
        ~CommonStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_time; //type: uint64
        ydk::YLeaf return_code; //type: IpslaRetCode
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf update_count; //type: uint32
        ydk::YLeaf ok_count; //type: uint32
        ydk::YLeaf disconnect_count; //type: uint32
        ydk::YLeaf timeout_count; //type: uint32
        ydk::YLeaf busy_count; //type: uint32
        ydk::YLeaf no_connection_count; //type: uint32
        ydk::YLeaf dropped_count; //type: uint32
        ydk::YLeaf internal_error_count; //type: uint32
        ydk::YLeaf sequence_error_count; //type: uint32
        ydk::YLeaf verify_error_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats : public ydk::Entity
{
    public:
        SpecificStats();
        ~SpecificStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf op_type; //type: OpTypeEnum
        class IcmpPathJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats
        class UdpJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats> icmp_path_jitter_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats> udp_jitter_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats : public ydk::Entity
{
    public:
        IcmpPathJitterStats();
        ~IcmpPathJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf packet_interval; //type: uint32
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf packet_count; //type: uint32
        ydk::YLeaf packet_loss_count; //type: uint32
        ydk::YLeaf out_of_sequence_count; //type: uint32
        ydk::YLeaf discarded_sample_count; //type: uint32
        ydk::YLeaf verify_errors_count; //type: uint32
        ydk::YLeaf dropped_error_count; //type: uint32
        ydk::YLeaf jitter; //type: uint32
        ydk::YLeaf pos_jitter_sum; //type: uint32
        ydk::YLeaf pos_jitter_sum2; //type: uint64
        ydk::YLeaf pos_jitter_min; //type: uint32
        ydk::YLeaf pos_jitter_max; //type: uint32
        ydk::YLeaf pos_jitter_count; //type: uint32
        ydk::YLeaf neg_jitter_sum; //type: uint32
        ydk::YLeaf neg_jitter_min; //type: uint32
        ydk::YLeaf neg_jitter_max; //type: uint32
        ydk::YLeaf neg_jitter_sum2; //type: uint64
        ydk::YLeaf neg_jitter_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats : public ydk::Entity
{
    public:
        UdpJitterStats();
        ~UdpJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf jitter_in; //type: uint32
        ydk::YLeaf jitter_out; //type: uint32
        ydk::YLeaf packet_loss_sd; //type: uint32
        ydk::YLeaf packet_loss_ds; //type: uint32
        ydk::YLeaf packet_out_of_sequence; //type: uint32
        ydk::YLeaf packet_mia; //type: uint32
        ydk::YLeaf packet_skipped; //type: uint32
        ydk::YLeaf packet_late_arrivals; //type: uint32
        ydk::YLeaf packet_invalid_tstamp; //type: uint32
        ydk::YLeaf internal_errors_count; //type: uint32
        ydk::YLeaf busies_count; //type: uint32
        ydk::YLeaf positive_sd_sum; //type: uint32
        ydk::YLeaf positive_sd_sum2; //type: uint64
        ydk::YLeaf positive_sd_min; //type: uint32
        ydk::YLeaf positive_sd_max; //type: uint32
        ydk::YLeaf positive_sd_count; //type: uint32
        ydk::YLeaf negative_sd_sum; //type: uint32
        ydk::YLeaf negative_sd_sum2; //type: uint64
        ydk::YLeaf negative_sd_min; //type: uint32
        ydk::YLeaf negative_sd_max; //type: uint32
        ydk::YLeaf negative_sd_count; //type: uint32
        ydk::YLeaf positive_ds_sum; //type: uint32
        ydk::YLeaf positive_ds_sum2; //type: uint64
        ydk::YLeaf positive_ds_min; //type: uint32
        ydk::YLeaf positive_ds_max; //type: uint32
        ydk::YLeaf positive_ds_count; //type: uint32
        ydk::YLeaf negative_ds_sum; //type: uint32
        ydk::YLeaf negative_ds_sum2; //type: uint64
        ydk::YLeaf negative_ds_min; //type: uint32
        ydk::YLeaf negative_ds_max; //type: uint32
        ydk::YLeaf negative_ds_count; //type: uint32
        ydk::YLeaf one_way_count; //type: uint32
        ydk::YLeaf one_way_sd_min; //type: uint32
        ydk::YLeaf one_way_sd_max; //type: uint32
        ydk::YLeaf one_way_sd_sum; //type: uint32
        ydk::YLeaf one_way_sd_sum2; //type: uint64
        ydk::YLeaf one_way_ds_min; //type: uint32
        ydk::YLeaf one_way_ds_max; //type: uint32
        ydk::YLeaf one_way_ds_sum; //type: uint32
        ydk::YLeaf one_way_ds_sum2; //type: uint64

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Path; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path

        ydk::YList path;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_index; //type: uint32
        class Hops; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops> hops;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hop; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop

        ydk::YList hop;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_index; //type: uint32
        class CommonStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats
        class SpecificStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats> common_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats> specific_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats : public ydk::Entity
{
    public:
        CommonStats();
        ~CommonStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operation_time; //type: uint64
        ydk::YLeaf return_code; //type: IpslaRetCode
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf update_count; //type: uint32
        ydk::YLeaf ok_count; //type: uint32
        ydk::YLeaf disconnect_count; //type: uint32
        ydk::YLeaf timeout_count; //type: uint32
        ydk::YLeaf busy_count; //type: uint32
        ydk::YLeaf no_connection_count; //type: uint32
        ydk::YLeaf dropped_count; //type: uint32
        ydk::YLeaf internal_error_count; //type: uint32
        ydk::YLeaf sequence_error_count; //type: uint32
        ydk::YLeaf verify_error_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats : public ydk::Entity
{
    public:
        SpecificStats();
        ~SpecificStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf op_type; //type: OpTypeEnum
        class IcmpPathJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats
        class UdpJitterStats; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats> icmp_path_jitter_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats> udp_jitter_stats;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats : public ydk::Entity
{
    public:
        IcmpPathJitterStats();
        ~IcmpPathJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf dest_address; //type: string
        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf packet_interval; //type: uint32
        ydk::YLeaf response_time_count; //type: uint32
        ydk::YLeaf response_time; //type: uint32
        ydk::YLeaf min_response_time; //type: uint32
        ydk::YLeaf max_response_time; //type: uint32
        ydk::YLeaf sum_response_time; //type: uint32
        ydk::YLeaf sum2_response_time; //type: uint64
        ydk::YLeaf packet_count; //type: uint32
        ydk::YLeaf packet_loss_count; //type: uint32
        ydk::YLeaf out_of_sequence_count; //type: uint32
        ydk::YLeaf discarded_sample_count; //type: uint32
        ydk::YLeaf verify_errors_count; //type: uint32
        ydk::YLeaf dropped_error_count; //type: uint32
        ydk::YLeaf jitter; //type: uint32
        ydk::YLeaf pos_jitter_sum; //type: uint32
        ydk::YLeaf pos_jitter_sum2; //type: uint64
        ydk::YLeaf pos_jitter_min; //type: uint32
        ydk::YLeaf pos_jitter_max; //type: uint32
        ydk::YLeaf pos_jitter_count; //type: uint32
        ydk::YLeaf neg_jitter_sum; //type: uint32
        ydk::YLeaf neg_jitter_min; //type: uint32
        ydk::YLeaf neg_jitter_max; //type: uint32
        ydk::YLeaf neg_jitter_sum2; //type: uint64
        ydk::YLeaf neg_jitter_count; //type: uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats : public ydk::Entity
{
    public:
        UdpJitterStats();
        ~UdpJitterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf jitter_in; //type: uint32
        ydk::YLeaf jitter_out; //type: uint32
        ydk::YLeaf packet_loss_sd; //type: uint32
        ydk::YLeaf packet_loss_ds; //type: uint32
        ydk::YLeaf packet_out_of_sequence; //type: uint32
        ydk::YLeaf packet_mia; //type: uint32
        ydk::YLeaf packet_skipped; //type: uint32
        ydk::YLeaf packet_late_arrivals; //type: uint32
        ydk::YLeaf packet_invalid_tstamp; //type: uint32
        ydk::YLeaf internal_errors_count; //type: uint32
        ydk::YLeaf busies_count; //type: uint32
        ydk::YLeaf positive_sd_sum; //type: uint32
        ydk::YLeaf positive_sd_sum2; //type: uint64
        ydk::YLeaf positive_sd_min; //type: uint32
        ydk::YLeaf positive_sd_max; //type: uint32
        ydk::YLeaf positive_sd_count; //type: uint32
        ydk::YLeaf negative_sd_sum; //type: uint32
        ydk::YLeaf negative_sd_sum2; //type: uint64
        ydk::YLeaf negative_sd_min; //type: uint32
        ydk::YLeaf negative_sd_max; //type: uint32
        ydk::YLeaf negative_sd_count; //type: uint32
        ydk::YLeaf positive_ds_sum; //type: uint32
        ydk::YLeaf positive_ds_sum2; //type: uint64
        ydk::YLeaf positive_ds_min; //type: uint32
        ydk::YLeaf positive_ds_max; //type: uint32
        ydk::YLeaf positive_ds_count; //type: uint32
        ydk::YLeaf negative_ds_sum; //type: uint32
        ydk::YLeaf negative_ds_sum2; //type: uint64
        ydk::YLeaf negative_ds_min; //type: uint32
        ydk::YLeaf negative_ds_max; //type: uint32
        ydk::YLeaf negative_ds_count; //type: uint32
        ydk::YLeaf one_way_count; //type: uint32
        ydk::YLeaf one_way_sd_min; //type: uint32
        ydk::YLeaf one_way_sd_max; //type: uint32
        ydk::YLeaf one_way_sd_sum; //type: uint32
        ydk::YLeaf one_way_sd_sum2; //type: uint64
        ydk::YLeaf one_way_ds_min; //type: uint32
        ydk::YLeaf one_way_ds_max; //type: uint32
        ydk::YLeaf one_way_ds_sum; //type: uint32
        ydk::YLeaf one_way_ds_sum2; //type: uint64

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths : public ydk::Entity
{
    public:
        LpdPaths();
        ~LpdPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LpdPath; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath

        ydk::YList lpd_path;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath : public ydk::Entity
{
    public:
        LpdPath();
        ~LpdPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_index; //type: uint32
        ydk::YLeaf return_code; //type: IpslaRetCode
        class PathId; //type: Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_oper::Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId> path_id;
        
}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath


class Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId : public ydk::Entity
{
    public:
        PathId();
        ~PathId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_selector; //type: string
        ydk::YLeaf output_interface; //type: string
        ydk::YLeaf nexthop_address; //type: string
        ydk::YLeafList downstream_label; //type: list of  uint32

}; // Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId


class Ipsla::ApplicationInfo : public ydk::Entity
{
    public:
        ApplicationInfo();
        ~ApplicationInfo();

        bool has_data() const override;
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
        ydk::YLeaf max_entries; //type: uint32
        ydk::YLeaf entries_configured; //type: uint32
        ydk::YLeaf active_entries; //type: uint32
        ydk::YLeaf pending_entries; //type: uint32
        ydk::YLeaf inactive_entries; //type: uint32
        ydk::YLeaf configurable_probes; //type: uint32
        ydk::YLeaf min_memory; //type: uint32
        ydk::YLeaf hw_timestamp_disabled; //type: boolean
        ydk::YLeafList operation_type; //type: list of  SlaOpTypes

}; // Ipsla::ApplicationInfo

class IpslaTargetTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_address_target_type;
        static const ydk::Enum::YLeaf ipv4_prefix_target_type;
        static const ydk::Enum::YLeaf tunnel_id_target_type;
        static const ydk::Enum::YLeaf ipv4_pseudowire_target_type;
        static const ydk::Enum::YLeaf ipv6_address_target_type;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-address-target-type") return 1;
            if (name == "ipv4-prefix-target-type") return 2;
            if (name == "tunnel-id-target-type") return 3;
            if (name == "ipv4-pseudowire-target-type") return 4;
            if (name == "ipv6-address-target-type") return 5;
            return -1;
        }
};

class SlaOpTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oper_icmp_echo;
        static const ydk::Enum::YLeaf oper_icmp_path_jitter;
        static const ydk::Enum::YLeaf oper_icmp_path_echo;
        static const ydk::Enum::YLeaf oper_udp_jitter;
        static const ydk::Enum::YLeaf oper_udp_echo;
        static const ydk::Enum::YLeaf oper_mpls_lsp_ping;
        static const ydk::Enum::YLeaf oper_mpls_lsp_trace;
        static const ydk::Enum::YLeaf oper_mpls_lsp_group;

        static int get_enum_value(const std::string & name) {
            if (name == "oper-icmp-echo") return 1;
            if (name == "oper-icmp-path-jitter") return 2;
            if (name == "oper-icmp-path-echo") return 4;
            if (name == "oper-udp-jitter") return 8;
            if (name == "oper-udp-echo") return 16;
            if (name == "oper-mpls-lsp-ping") return 32;
            if (name == "oper-mpls-lsp-trace") return 64;
            if (name == "oper-mpls-lsp-group") return 128;
            return -1;
        }
};

class IpslaRetCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsla_ret_code_unknown;
        static const ydk::Enum::YLeaf ipsla_ret_code_ok;
        static const ydk::Enum::YLeaf ipsla_ret_code_disconnect;
        static const ydk::Enum::YLeaf ipsla_ret_code_over_threshold;
        static const ydk::Enum::YLeaf ipsla_ret_code_timeout;
        static const ydk::Enum::YLeaf ipsla_ret_code_busy;
        static const ydk::Enum::YLeaf ipsla_ret_code_no_connection;
        static const ydk::Enum::YLeaf ipsla_ret_code_dropped;
        static const ydk::Enum::YLeaf ipsla_ret_code_sequence_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_verify_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_application_specific;
        static const ydk::Enum::YLeaf ipsla_ret_code_dns_server_timeout;
        static const ydk::Enum::YLeaf ipsla_ret_code_tcp_connect_timeout;
        static const ydk::Enum::YLeaf ipsla_ret_code_http_transaction_timeout;
        static const ydk::Enum::YLeaf ipsla_ret_code_dns_query_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_http_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_internal_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_mpls_lsp_echo_tx_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_mpls_lsp_unreachable;
        static const ydk::Enum::YLeaf ipsla_ret_code_mpls_lsp_malformed_request;
        static const ydk::Enum::YLeaf ipsla_ret_code_mpls_lsp_reachable_but_not_fec;
        static const ydk::Enum::YLeaf ipsla_ret_code_mpls_lsp_ds_map_mismatch;
        static const ydk::Enum::YLeaf ipsla_ret_code_mpls_lsp_duplicate;
        static const ydk::Enum::YLeaf ipsla_ret_code_failure;
        static const ydk::Enum::YLeaf ipsla_ret_code_malloc_failure;
        static const ydk::Enum::YLeaf ipsla_ret_code_sock_open_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_sock_bind_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_sock_send_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_sock_recv_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_sock_connect_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_sock_set_option_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_sock_attach_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_ctrl_msg_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_no_key_chain;
        static const ydk::Enum::YLeaf ipsla_ret_code_key_chain_lib_fail;
        static const ydk::Enum::YLeaf ipsla_ret_code_no_key_id;
        static const ydk::Enum::YLeaf ipsla_ret_code_invalid_key_id;
        static const ydk::Enum::YLeaf ipsla_ret_code_entry_exist;
        static const ydk::Enum::YLeaf ipsla_ret_code_entry_not_found;
        static const ydk::Enum::YLeaf ipsla_ret_code_hop_over_max;
        static const ydk::Enum::YLeaf ipsla_ret_code_hop_dup_address;
        static const ydk::Enum::YLeaf ipsla_ret_code_vrf_name_error;
        static const ydk::Enum::YLeaf ipsla_ret_code_resp_failure;
        static const ydk::Enum::YLeaf ipsla_ret_code_auth_failure;
        static const ydk::Enum::YLeaf ipsla_ret_code_format_failure;
        static const ydk::Enum::YLeaf ipsla_ret_code_port_in_use;
        static const ydk::Enum::YLeaf ipsla_ret_code_no_route;
        static const ydk::Enum::YLeaf ipsla_ret_code_pending;
        static const ydk::Enum::YLeaf ipsla_ret_code_invalid_address;
        static const ydk::Enum::YLeaf ipsla_ret_code_max;

        static int get_enum_value(const std::string & name) {
            if (name == "ipsla-ret-code-unknown") return 0;
            if (name == "ipsla-ret-code-ok") return 1;
            if (name == "ipsla-ret-code-disconnect") return 2;
            if (name == "ipsla-ret-code-over-threshold") return 3;
            if (name == "ipsla-ret-code-timeout") return 4;
            if (name == "ipsla-ret-code-busy") return 5;
            if (name == "ipsla-ret-code-no-connection") return 6;
            if (name == "ipsla-ret-code-dropped") return 7;
            if (name == "ipsla-ret-code-sequence-error") return 8;
            if (name == "ipsla-ret-code-verify-error") return 9;
            if (name == "ipsla-ret-code-application-specific") return 10;
            if (name == "ipsla-ret-code-dns-server-timeout") return 11;
            if (name == "ipsla-ret-code-tcp-connect-timeout") return 12;
            if (name == "ipsla-ret-code-http-transaction-timeout") return 13;
            if (name == "ipsla-ret-code-dns-query-error") return 14;
            if (name == "ipsla-ret-code-http-error") return 15;
            if (name == "ipsla-ret-code-internal-error") return 16;
            if (name == "ipsla-ret-code-mpls-lsp-echo-tx-error") return 17;
            if (name == "ipsla-ret-code-mpls-lsp-unreachable") return 18;
            if (name == "ipsla-ret-code-mpls-lsp-malformed-request") return 19;
            if (name == "ipsla-ret-code-mpls-lsp-reachable-but-not-fec") return 20;
            if (name == "ipsla-ret-code-mpls-lsp-ds-map-mismatch") return 21;
            if (name == "ipsla-ret-code-mpls-lsp-duplicate") return 22;
            if (name == "ipsla-ret-code-failure") return 23;
            if (name == "ipsla-ret-code-malloc-failure") return 24;
            if (name == "ipsla-ret-code-sock-open-error") return 25;
            if (name == "ipsla-ret-code-sock-bind-error") return 26;
            if (name == "ipsla-ret-code-sock-send-error") return 27;
            if (name == "ipsla-ret-code-sock-recv-error") return 28;
            if (name == "ipsla-ret-code-sock-connect-error") return 29;
            if (name == "ipsla-ret-code-sock-set-option-error") return 30;
            if (name == "ipsla-ret-code-sock-attach-error") return 31;
            if (name == "ipsla-ret-code-ctrl-msg-error") return 32;
            if (name == "ipsla-ret-code-no-key-chain") return 33;
            if (name == "ipsla-ret-code-key-chain-lib-fail") return 34;
            if (name == "ipsla-ret-code-no-key-id") return 35;
            if (name == "ipsla-ret-code-invalid-key-id") return 36;
            if (name == "ipsla-ret-code-entry-exist") return 37;
            if (name == "ipsla-ret-code-entry-not-found") return 38;
            if (name == "ipsla-ret-code-hop-over-max") return 39;
            if (name == "ipsla-ret-code-hop-dup-address") return 40;
            if (name == "ipsla-ret-code-vrf-name-error") return 41;
            if (name == "ipsla-ret-code-resp-failure") return 42;
            if (name == "ipsla-ret-code-auth-failure") return 43;
            if (name == "ipsla-ret-code-format-failure") return 44;
            if (name == "ipsla-ret-code-port-in-use") return 45;
            if (name == "ipsla-ret-code-no-route") return 46;
            if (name == "ipsla-ret-code-pending") return 47;
            if (name == "ipsla-ret-code-invalid-address") return 48;
            if (name == "ipsla-ret-code-max") return 49;
            return -1;
        }
};

class OpTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icmp_echo;
        static const ydk::Enum::YLeaf icmp_path_jitter;
        static const ydk::Enum::YLeaf icmp_path_echo;
        static const ydk::Enum::YLeaf udp_jitter;
        static const ydk::Enum::YLeaf udp_echo;
        static const ydk::Enum::YLeaf mpls_lsp_ping;
        static const ydk::Enum::YLeaf mpls_lsp_trace;
        static const ydk::Enum::YLeaf mpls_lsp_group;

        static int get_enum_value(const std::string & name) {
            if (name == "icmp-echo") return 1;
            if (name == "icmp-path-jitter") return 2;
            if (name == "icmp-path-echo") return 4;
            if (name == "udp-jitter") return 8;
            if (name == "udp-echo") return 16;
            if (name == "mpls-lsp-ping") return 32;
            if (name == "mpls-lsp-trace") return 64;
            if (name == "mpls-lsp-group") return 128;
            return -1;
        }
};

class IpslaLspGrpPathStatusEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsla_lsp_grp_path_status_unknown;
        static const ydk::Enum::YLeaf ipsla_lsp_grp_path_status_up;
        static const ydk::Enum::YLeaf ipsla_lsp_grp_path_status_down;
        static const ydk::Enum::YLeaf ipsla_lsp_grp_path_status_retry;
        static const ydk::Enum::YLeaf ipsla_lsp_grp_path_status_pending;

        static int get_enum_value(const std::string & name) {
            if (name == "ipsla-lsp-grp-path-status-unknown") return 0;
            if (name == "ipsla-lsp-grp-path-status-up") return 1;
            if (name == "ipsla-lsp-grp-path-status-down") return 2;
            if (name == "ipsla-lsp-grp-path-status-retry") return 3;
            if (name == "ipsla-lsp-grp-path-status-pending") return 4;
            return -1;
        }
};

class IpslaOperStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsla_oper_state_inactive;
        static const ydk::Enum::YLeaf ipsla_oper_state_pending;
        static const ydk::Enum::YLeaf ipsla_oper_state_active;

        static int get_enum_value(const std::string & name) {
            if (name == "ipsla-oper-state-inactive") return 0;
            if (name == "ipsla-oper-state-pending") return 1;
            if (name == "ipsla-oper-state-active") return 2;
            return -1;
        }
};

class IpslaMplsLpdDiscoveryModeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_unknown;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_initial_running;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_initial_complete;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_rediscovery_running;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_rediscovery_complete;

        static int get_enum_value(const std::string & name) {
            if (name == "ipsla-mpls-lpd-unknown") return 0;
            if (name == "ipsla-mpls-lpd-initial-running") return 1;
            if (name == "ipsla-mpls-lpd-initial-complete") return 2;
            if (name == "ipsla-mpls-lpd-rediscovery-running") return 3;
            if (name == "ipsla-mpls-lpd-rediscovery-complete") return 4;
            return -1;
        }
};

class IpslaMplsLpdRetCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_ret_code_unknown;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_ret_code_no_path;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_ret_code_all_path_broken;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_ret_code_all_path_unexplorable;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_ret_code_all_path_broken_or_unexplorable;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_ret_code_timeout;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_ret_code_error;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_ret_code_ok;

        static int get_enum_value(const std::string & name) {
            if (name == "ipsla-mpls-lpd-ret-code-unknown") return 1;
            if (name == "ipsla-mpls-lpd-ret-code-no-path") return 2;
            if (name == "ipsla-mpls-lpd-ret-code-all-path-broken") return 3;
            if (name == "ipsla-mpls-lpd-ret-code-all-path-unexplorable") return 4;
            if (name == "ipsla-mpls-lpd-ret-code-all-path-broken-or-unexplorable") return 5;
            if (name == "ipsla-mpls-lpd-ret-code-timeout") return 6;
            if (name == "ipsla-mpls-lpd-ret-code-error") return 7;
            if (name == "ipsla-mpls-lpd-ret-code-ok") return 8;
            return -1;
        }
};

class IpslaLspGrpStatusEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsla_lsp_grp_status_unknown;
        static const ydk::Enum::YLeaf ipsla_lsp_grp_status_up;
        static const ydk::Enum::YLeaf ipsla_lsp_grp_status_partial;
        static const ydk::Enum::YLeaf ipsla_lsp_grp_status_down;
        static const ydk::Enum::YLeaf ipsla_lsp_grp_status_pending;

        static int get_enum_value(const std::string & name) {
            if (name == "ipsla-lsp-grp-status-unknown") return 1;
            if (name == "ipsla-lsp-grp-status-up") return 2;
            if (name == "ipsla-lsp-grp-status-partial") return 3;
            if (name == "ipsla-lsp-grp-status-down") return 4;
            if (name == "ipsla-lsp-grp-status-pending") return 5;
            return -1;
        }
};

class IpslaMplsAddDeleteEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsla_mpls_add_delete_add_q;
        static const ydk::Enum::YLeaf ipsla_mpls_add_delete_delete_q;

        static int get_enum_value(const std::string & name) {
            if (name == "ipsla-mpls-add-delete-add-q") return 1;
            if (name == "ipsla-mpls-add-delete-delete-q") return 2;
            return -1;
        }
};

class IpslaMplsLpdPathDiscoveryStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_path_discovery_unknown;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_path_discovery_ok;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_path_discovery_broken;
        static const ydk::Enum::YLeaf ipsla_mpls_lpd_path_discovery_unexplorable;

        static int get_enum_value(const std::string & name) {
            if (name == "ipsla-mpls-lpd-path-discovery-unknown") return 0;
            if (name == "ipsla-mpls-lpd-path-discovery-ok") return 1;
            if (name == "ipsla-mpls-lpd-path-discovery-broken") return 2;
            if (name == "ipsla-mpls-lpd-path-discovery-unexplorable") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MAN_IPSLA_OPER_ */

