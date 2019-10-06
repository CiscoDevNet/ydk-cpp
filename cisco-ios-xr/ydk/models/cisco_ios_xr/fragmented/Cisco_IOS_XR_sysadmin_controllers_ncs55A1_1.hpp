#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_1_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_ncs55A1_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs55A1 {


class Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList : public ydk::Entity
{
    public:
        RackInfoList();
        ~RackInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_id; //type: int32
        ydk::YLeaf rack_name; //type: string
        ydk::YLeaf rack_type; //type: string
        ydk::YLeaf sfe_asics_total; //type: int32
        ydk::YLeaf sfe_asics_up; //type: int32
        ydk::YLeaf sfe_asics_dn; //type: int32
        ydk::YLeaf fia_asics_total; //type: int32
        ydk::YLeaf fia_asics_up; //type: int32
        ydk::YLeaf fia_asics_dn; //type: int32
        ydk::YLeaf plane_up; //type: uint32
        ydk::YLeaf plane_dn; //type: uint32
        ydk::YLeaf plane_mcast_dn; //type: uint32
        ydk::YLeaf plane_admin_dn; //type: uint32
        ydk::YLeaf show_rack_plane_detail; //type: boolean
        ydk::YLeaf amba_valid; //type: int32
        class RackPlaneInfoList; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList

        ydk::YList rack_plane_info_list;
        
}; // Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList


class Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList : public ydk::Entity
{
    public:
        RackPlaneInfoList();
        ~RackPlaneInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plane_id; //type: int32
        ydk::YLeaf plane_state; //type: string
        ydk::YLeaf plane_mode; //type: string
        ydk::YLeaf asics_total; //type: int32
        ydk::YLeaf asics_up; //type: int32
        ydk::YLeaf asics_dn; //type: int32
        class ReachableAmba; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba

        ydk::YList reachable_amba;
        
}; // Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList


class Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba : public ydk::Entity
{
    public:
        ReachableAmba();
        ~ReachableAmba();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int32
        ydk::YLeaf num_reachable; //type: int32

}; // Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList::RackPlaneInfoList::ReachableAmba


class Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus : public ydk::Entity
{
    public:
        FsdbStatus();
        ~FsdbStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_id; //type: int32
        ydk::YLeaf status; //type: boolean

}; // Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus


class Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus : public ydk::Entity
{
    public:
        SfeStatus();
        ~SfeStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loc_str; //type: string
        ydk::YLeaf status; //type: boolean

}; // Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus


class Controller::Fabric::Oper::FsdbAggregator : public ydk::Entity
{
    public:
        FsdbAggregator();
        ~FsdbAggregator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Fsdbagg; //type: Controller::Fabric::Oper::FsdbAggregator::Fsdbagg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbAggregator::Fsdbagg> fsdbagg;
        
}; // Controller::Fabric::Oper::FsdbAggregator


class Controller::Fabric::Oper::FsdbAggregator::Fsdbagg : public ydk::Entity
{
    public:
        Fsdbagg();
        ~Fsdbagg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Trace; //type: Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace

        ydk::YList trace;
        
}; // Controller::Fabric::Oper::FsdbAggregator::Fsdbagg


class Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf buffer; //type: string
        class Location; //type: Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location

        ydk::YList location;
        
}; // Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace


class Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location


class Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions


class Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Controller::Fabric::Oper::FsdbAggregator::Fsdbagg::Trace::Location::AllOptions::TraceBlocks


class Controller::Fabric::Oper::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Rack; //type: Controller::Fabric::Oper::Link::Rack
        class NodeLocation; //type: Controller::Fabric::Oper::Link::NodeLocation

        ydk::YList rack;
        ydk::YList node_location;
        
}; // Controller::Fabric::Oper::Link


class Controller::Fabric::Oper::Link::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rack_number; //type: int32
        class Port; //type: Controller::Fabric::Oper::Link::Rack::Port

        ydk::YList port;
        
}; // Controller::Fabric::Oper::Link::Rack


class Controller::Fabric::Oper::Link::Rack::Port : public ydk::Entity
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

        ydk::YLeaf portname; //type: string
        ydk::YLeaf description; //type: string
        class Location; //type: Controller::Fabric::Oper::Link::Rack::Port::Location
        class Rx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx
        class Tx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx

        ydk::YList location;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Tx> tx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port


class Controller::Fabric::Oper::Link::Rack::Port::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loc_str; //type: string
        class Rx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx
        class Tx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx> tx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail
        class State; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State
        class Statistics; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics> statistics;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State : public ydk::Entity
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

        class Up; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up
        class Down; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down
        class Mismatch; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up> up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down> down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch> mismatch;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up : public ydk::Entity
{
    public:
        Up();
        ~Up();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Up::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down : public ydk::Entity
{
    public:
        Down();
        ~Down();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Down::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch : public ydk::Entity
{
    public:
        Mismatch();
        ~Mismatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Rx::Statistics::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail
        class State; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State
        class Statistics; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics> statistics;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State : public ydk::Entity
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

        class Up; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up
        class Down; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down
        class Mismatch; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up> up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down> down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch> mismatch;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up : public ydk::Entity
{
    public:
        Up();
        ~Up();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Up::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down : public ydk::Entity
{
    public:
        Down();
        ~Down();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Down::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch : public ydk::Entity
{
    public:
        Mismatch();
        ~Mismatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Location::Tx::Statistics::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Detail
        class State; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State
        class Statistics; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics> statistics;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State : public ydk::Entity
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

        class Up; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up
        class Down; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down
        class Mismatch; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up> up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down> down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch> mismatch;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up : public ydk::Entity
{
    public:
        Up();
        ~Up();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Up::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down : public ydk::Entity
{
    public:
        Down();
        ~Down();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Down::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch : public ydk::Entity
{
    public:
        Mismatch();
        ~Mismatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Detail::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::State::Mismatch::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Detail::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf rack_num; //type: string
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64
        ydk::YLeaf is_link_error; //type: boolean
        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Controller::Fabric::Oper::Link::Rack::Port::Rx::Statistics::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail
        class State; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State
        class Statistics; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Tx::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics> statistics;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief::DataIdx : public ydk::Entity
{
    public:
        DataIdx();
        ~DataIdx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_data_idx; //type: int64
        ydk::YLeaf sfe_port; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf near_end_cdr_ln; //type: string
        ydk::YLeaf near_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cxp_ch; //type: string
        ydk::YLeaf far_end_cdr_ln; //type: string
        ydk::YLeaf neighbor_link; //type: string
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief::DataIdx::History : public ydk::Entity
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

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief::DataIdx::History


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_1_ */

