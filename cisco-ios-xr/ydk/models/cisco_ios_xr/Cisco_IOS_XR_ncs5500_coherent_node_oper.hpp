#ifndef _CISCO_IOS_XR_NCS5500_COHERENT_NODE_OPER_
#define _CISCO_IOS_XR_NCS5500_COHERENT_NODE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5500_coherent_node_oper {

class Coherent : public ydk::Entity
{
    public:
        Coherent();
        ~Coherent();

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

        class Nodes; //type: Coherent::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes> nodes;
        
}; // Coherent


class Coherent::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: Coherent::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node> > node;
        
}; // Coherent::Nodes


class Coherent::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_name; //type: string
        class CoherentTimeStats; //type: Coherent::Nodes::Node::CoherentTimeStats
        class Devicemapping; //type: Coherent::Nodes::Node::Devicemapping
        class Coherenthealth; //type: Coherent::Nodes::Node::Coherenthealth
        class PortModeAllInfo; //type: Coherent::Nodes::Node::PortModeAllInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats> coherent_time_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Coherenthealth> coherenthealth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Devicemapping> devicemapping;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::PortModeAllInfo> port_mode_all_info;
        
}; // Coherent::Nodes::Node


class Coherent::Nodes::Node::CoherentTimeStats : public ydk::Entity
{
    public:
        CoherentTimeStats();
        ~CoherentTimeStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf driver_init; //type: string
        ydk::YLeaf driver_operational; //type: string
        ydk::YLeaf device_created; //type: string
        ydk::YLeaf optics_controllers_created; //type: string
        ydk::YLeaf dsp_controllers_created; //type: string
        ydk::YLeaf eth_intf_created; //type: string
        class OptsEaBulkCreate; //type: Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate
        class OptsEaBulkUpdate; //type: Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate
        class DspEaBulkCreate; //type: Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate
        class DspEaBulkUpdate; //type: Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate
        class PortStat; //type: Coherent::Nodes::Node::CoherentTimeStats::PortStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate> dsp_ea_bulk_create;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate> dsp_ea_bulk_update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate> opts_ea_bulk_create;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate> opts_ea_bulk_update;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat> > port_stat;
        
}; // Coherent::Nodes::Node::CoherentTimeStats


class Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate : public ydk::Entity
{
    public:
        DspEaBulkCreate();
        ~DspEaBulkCreate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf time_taken; //type: string
        ydk::YLeaf worst_time; //type: string

}; // Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate


class Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate : public ydk::Entity
{
    public:
        DspEaBulkUpdate();
        ~DspEaBulkUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf time_taken; //type: string
        ydk::YLeaf worst_time; //type: string

}; // Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate


class Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate : public ydk::Entity
{
    public:
        OptsEaBulkCreate();
        ~OptsEaBulkCreate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf time_taken; //type: string
        ydk::YLeaf worst_time; //type: string

}; // Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate


class Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate : public ydk::Entity
{
    public:
        OptsEaBulkUpdate();
        ~OptsEaBulkUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf time_taken; //type: string
        ydk::YLeaf worst_time; //type: string

}; // Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate


class Coherent::Nodes::Node::CoherentTimeStats::PortStat : public ydk::Entity
{
    public:
        PortStat();
        ~PortStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf laser_state; //type: boolean
        ydk::YLeaf provisioned_frequency; //type: uint32
        ydk::YLeaf tx_power; //type: uint32
        ydk::YLeaf cd_min; //type: uint32
        ydk::YLeaf cd_max; //type: uint32
        ydk::YLeaf traffic_type; //type: string
        class LaserOnStats; //type: Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats
        class LaserOffStats; //type: Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats
        class WlOpStats; //type: Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats
        class TxpwrOpStats; //type: Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats
        class CdminOpStats; //type: Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats
        class CdmaxOpStats; //type: Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats
        class TraffictypeOpStats; //type: Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats> cdmax_op_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats> cdmin_op_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats> laser_off_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats> laser_on_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats> traffictype_op_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats> txpwr_op_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats> wl_op_stats;
        
}; // Coherent::Nodes::Node::CoherentTimeStats::PortStat


class Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats : public ydk::Entity
{
    public:
        CdmaxOpStats();
        ~CdmaxOpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf time_taken; //type: string
        ydk::YLeaf worst_time; //type: string

}; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats


class Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats : public ydk::Entity
{
    public:
        CdminOpStats();
        ~CdminOpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf time_taken; //type: string
        ydk::YLeaf worst_time; //type: string

}; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats


class Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats : public ydk::Entity
{
    public:
        LaserOffStats();
        ~LaserOffStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf time_taken; //type: string
        ydk::YLeaf worst_time; //type: string

}; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats


class Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats : public ydk::Entity
{
    public:
        LaserOnStats();
        ~LaserOnStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf time_taken; //type: string
        ydk::YLeaf worst_time; //type: string

}; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats


class Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats : public ydk::Entity
{
    public:
        TraffictypeOpStats();
        ~TraffictypeOpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf time_taken; //type: string
        ydk::YLeaf worst_time; //type: string

}; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats


class Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats : public ydk::Entity
{
    public:
        TxpwrOpStats();
        ~TxpwrOpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf time_taken; //type: string
        ydk::YLeaf worst_time; //type: string

}; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats


class Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats : public ydk::Entity
{
    public:
        WlOpStats();
        ~WlOpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf time_taken; //type: string
        ydk::YLeaf worst_time; //type: string

}; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats


class Coherent::Nodes::Node::Coherenthealth : public ydk::Entity
{
    public:
        Coherenthealth();
        ~Coherenthealth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf im_state; //type: boolean
        ydk::YLeaf aipc_srvr_state; //type: boolean
        ydk::YLeaf sysdb_state; //type: boolean
        ydk::YLeaf pm_state; //type: boolean
        ydk::YLeaf optics_ea_conn; //type: boolean
        ydk::YLeaf dsp_ea_conn; //type: boolean
        ydk::YLeaf vether_state; //type: boolean
        ydk::YLeaf morgoth_alive; //type: boolean
        ydk::YLeaf prov_infra_state; //type: boolean
        ydk::YLeaf sdk_fpga_compatible; //type: boolean
        ydk::YLeaf pending_provision; //type: boolean
        ydk::YLeaf pulse_sent; //type: boolean
        ydk::YLeaf inside_prov_loop; //type: boolean
        ydk::YLeaf fpd_in_progress; //type: boolean
        ydk::YLeaf prov_run_count; //type: uint32
        ydk::YLeaf sdk_version; //type: string
        ydk::YLeaf morgoth_running_version; //type: string
        ydk::YLeaf morgoth_downloaded_version; //type: string
        ydk::YLeaf morgoth_golden_version; //type: string
        ydk::YLeaf denali0_version; //type: string
        ydk::YLeaf denali1_version; //type: string
        ydk::YLeaf denali2_version; //type: string
        ydk::YLeaf board_type; //type: string
        ydk::YLeaf jlink_op; //type: string
        class PortData; //type: Coherent::Nodes::Node::Coherenthealth::PortData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Coherenthealth::PortData> > port_data;
        
}; // Coherent::Nodes::Node::Coherenthealth


class Coherent::Nodes::Node::Coherenthealth::PortData : public ydk::Entity
{
    public:
        PortData();
        ~PortData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_ctrl_created; //type: boolean
        ydk::YLeaf dsp_ctrl_created; //type: boolean
        ydk::YLeaf has_pluggable; //type: boolean
        ydk::YLeaf optics_admin_up; //type: boolean
        ydk::YLeaf dsp_admin_up; //type: boolean
        ydk::YLeaf laser_state; //type: boolean
        ydk::YLeaf laser_on_pending; //type: boolean
        ydk::YLeaf provisioning_needed; //type: boolean
        ydk::YLeaf force_reprovision; //type: boolean
        ydk::YLeaf fp_port_idx; //type: uint32
        ydk::YLeaf configured_frequency; //type: uint32
        ydk::YLeaf provisioned_frequency; //type: uint32
        ydk::YLeaf configured_tx_power; //type: string
        ydk::YLeaf provisioned_tx_power; //type: string
        ydk::YLeaf configured_cd_min; //type: string
        ydk::YLeaf provisioned_cd_min; //type: string
        ydk::YLeaf configured_cd_max; //type: string
        ydk::YLeaf provisioned_cd_max; //type: string
        ydk::YLeaf configured_traffic_type; //type: string
        ydk::YLeaf provisioned_traffic_type; //type: string
        ydk::YLeaf configured_loopback_mode; //type: string
        ydk::YLeaf provisioned_loopback_mode; //type: string
        ydk::YLeaf expected_ctp2_led_state; //type: string
        ydk::YLeaf provisioned_ctp2_led_state; //type: string
        ydk::YLeaf led_op_rc; //type: int32
        ydk::YLeaf laser_op_rc; //type: int32
        ydk::YLeaf wlen_op_rc; //type: int32
        ydk::YLeaf traffic_op_rc; //type: int32
        ydk::YLeaf loopback_op_rc; //type: int32
        ydk::YLeaf tx_power_op_rc; //type: int32
        ydk::YLeaf cd_min_op_rc; //type: int32
        ydk::YLeaf cd_max_op_rc; //type: int32
        ydk::YLeaf provisioning_failed; //type: boolean
        ydk::YLeaf ctp2_hw_alarms; //type: string
        ydk::YLeaf denali_hw_alarms; //type: string
        ydk::YLeaf is_pm_port_created_opt; //type: boolean
        ydk::YLeaf rc_pm_port_opt; //type: int32
        ydk::YLeaf pm_port_state_opt; //type: int32
        ydk::YLeaf rc_pm_provision_opt; //type: int32
        ydk::YLeaf is_alarm_port_created_opt; //type: boolean
        ydk::YLeaf rc_alarm_port_opt; //type: int32
        ydk::YLeaf is_pm_port_created_dsp; //type: boolean
        ydk::YLeaf rc_pm_port_dsp; //type: int32
        ydk::YLeaf pm_port_state_dsp; //type: int32
        ydk::YLeaf rc_pm_provision_dsp; //type: int32
        ydk::YLeaf is_alarm_port_created_dsp; //type: boolean
        ydk::YLeaf rc_alarm_port_dsp; //type: int32
        class CtpInfo; //type: Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo
        class InterfaceInfo; //type: Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo> ctp_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo> interface_info;
        
}; // Coherent::Nodes::Node::Coherenthealth::PortData


class Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo : public ydk::Entity
{
    public:
        CtpInfo();
        ~CtpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deviation; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf date_code_number; //type: string
        ydk::YLeaf clei_code_number; //type: string
        ydk::YLeaf vendorname; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf module_hardware_version_number; //type: uint16
        ydk::YLeaf module_firmware_running_version_number; //type: uint16
        ydk::YLeaf module_firmware_committed_version_number; //type: uint16
        ydk::YLeaf ctp_type; //type: uint32

}; // Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo


class Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo : public ydk::Entity
{
    public:
        InterfaceInfo();
        ~InterfaceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EthData; //type: Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData> > eth_data;
        
}; // Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo


class Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData : public ydk::Entity
{
    public:
        EthData();
        ~EthData();

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
        ydk::YLeaf intf_handle; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf admin_up; //type: boolean
        ydk::YLeaf is_created; //type: boolean

}; // Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData


class Coherent::Nodes::Node::Devicemapping : public ydk::Entity
{
    public:
        Devicemapping();
        ~Devicemapping();

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
        class DevMap; //type: Coherent::Nodes::Node::Devicemapping::DevMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Devicemapping::DevMap> > dev_map;
        
}; // Coherent::Nodes::Node::Devicemapping


class Coherent::Nodes::Node::Devicemapping::DevMap : public ydk::Entity
{
    public:
        DevMap();
        ~DevMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device_address; //type: string
        ydk::YLeaf ifhandle; //type: string
        ydk::YLeaf intf_name; //type: string

}; // Coherent::Nodes::Node::Devicemapping::DevMap


class Coherent::Nodes::Node::PortModeAllInfo : public ydk::Entity
{
    public:
        PortModeAllInfo();
        ~PortModeAllInfo();

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
        class PortmodeEntry; //type: Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry> > portmode_entry;
        
}; // Coherent::Nodes::Node::PortModeAllInfo


class Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry : public ydk::Entity
{
    public:
        PortmodeEntry();
        ~PortmodeEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf_name; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf fec; //type: string
        ydk::YLeaf diff; //type: string
        ydk::YLeaf modulation; //type: string

}; // Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry


}
}

#endif /* _CISCO_IOS_XR_NCS5500_COHERENT_NODE_OPER_ */

