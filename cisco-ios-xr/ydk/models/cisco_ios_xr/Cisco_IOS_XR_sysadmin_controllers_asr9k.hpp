#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_ASR9K_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_ASR9K_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_asr9k {

class Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

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

        class Switch; //type: Controller::Switch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch> switch_;
        
}; // Controller


class Controller::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Oper; //type: Controller::Switch::Oper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper> oper;
        
}; // Controller::Switch


class Controller::Switch::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Reachable; //type: Controller::Switch::Oper::Reachable
        class Summary; //type: Controller::Switch::Oper::Summary
        class Statistics; //type: Controller::Switch::Oper::Statistics
        class Mac; //type: Controller::Switch::Oper::Mac
        class Bridge; //type: Controller::Switch::Oper::Bridge
        class Fdb; //type: Controller::Switch::Oper::Fdb
        class Vlan; //type: Controller::Switch::Oper::Vlan
        class Esd; //type: Controller::Switch::Oper::Esd
        class MgmtAgent; //type: Controller::Switch::Oper::MgmtAgent
        class Sdr; //type: Controller::Switch::Oper::Sdr
        class PortState; //type: Controller::Switch::Oper::PortState
        class Trunk; //type: Controller::Switch::Oper::Trunk
        class SwitchDebugCont; //type: Controller::Switch::Oper::SwitchDebugCont

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Reachable> reachable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Mac> mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Bridge> bridge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb> fdb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Esd> esd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::MgmtAgent> mgmt_agent;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Sdr> sdr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::PortState> port_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Trunk> trunk;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::SwitchDebugCont> switch_debug_cont;
        
}; // Controller::Switch::Oper


class Controller::Switch::Oper::Reachable : public ydk::Entity
{
    public:
        Reachable();
        ~Reachable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Reachable::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Reachable


class Controller::Switch::Oper::Reachable::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum

}; // Controller::Switch::Oper::Reachable::Location


class Controller::Switch::Oper::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Summary::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Summary


class Controller::Switch::Oper::Summary::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf serial_num; //type: string
        class PortIter; //type: Controller::Switch::Oper::Summary::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Summary::Location


class Controller::Switch::Oper::Summary::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        ydk::YLeaf phys_state; //type: EsdmaSwitchPortState
        ydk::YLeaf admin_state; //type: EsdmaSwitchPortState
        ydk::YLeaf port_speed; //type: string
        ydk::YLeaf protocol_state; //type: MlapStateEnum
        ydk::YLeaf forwarding; //type: SwitchForwardingState
        ydk::YLeaf connects_to; //type: string

}; // Controller::Switch::Oper::Summary::Location::PortIter


class Controller::Switch::Oper::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class SummaryStatistics; //type: Controller::Switch::Oper::Statistics::SummaryStatistics
        class Detail; //type: Controller::Switch::Oper::Statistics::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Statistics::SummaryStatistics> summary_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Statistics::Detail> detail;
        
}; // Controller::Switch::Oper::Statistics


class Controller::Switch::Oper::Statistics::SummaryStatistics : public ydk::Entity
{
    public:
        SummaryStatistics();
        ~SummaryStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Statistics::SummaryStatistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Statistics::SummaryStatistics


class Controller::Switch::Oper::Statistics::SummaryStatistics::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf serial_num; //type: string
        class PortIter; //type: Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Statistics::SummaryStatistics::Location


class Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        ydk::YLeaf phys_state; //type: EsdmaSwitchPortState
        ydk::YLeaf state_changes; //type: uint32
        ydk::YLeaf sw_sum_tx_packets; //type: uint64
        ydk::YLeaf sw_sum_rx_packets; //type: uint64
        ydk::YLeaf sw_sum_tx_drops_errors; //type: uint64
        ydk::YLeaf sw_sum_rx_drops_errors; //type: uint64
        ydk::YLeaf connects_to; //type: string

}; // Controller::Switch::Oper::Statistics::SummaryStatistics::Location::PortIter


class Controller::Switch::Oper::Statistics::Detail : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Statistics::Detail::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Statistics::Detail


class Controller::Switch::Oper::Statistics::Detail::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Statistics::Detail::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Statistics::Detail::Location


class Controller::Switch::Oper::Statistics::Detail::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        ydk::YLeaf phys_state; //type: EsdmaSwitchPortState
        ydk::YLeaf port_speed; //type: string
        ydk::YLeaf connects_to; //type: string
        class Counters; //type: Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters> counters;
        
}; // Controller::Switch::Oper::Statistics::Detail::Location::PortIter


class Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sw_det_rx_ucast_packets; //type: uint64
        ydk::YLeaf sw_det_rx_mcast_packets; //type: uint64
        ydk::YLeaf sw_det_rx_bcast_packets; //type: uint64
        ydk::YLeaf sw_det_rx_flow_control; //type: uint64
        ydk::YLeaf sw_det_rx_good_octets; //type: uint64
        ydk::YLeaf sw_det_rx_bad_octets; //type: uint64
        ydk::YLeaf sw_det_rx_fifo_overrun; //type: uint64
        ydk::YLeaf sw_det_rx_undersize; //type: uint64
        ydk::YLeaf sw_det_rx_fragments; //type: uint64
        ydk::YLeaf sw_det_rx_oversize; //type: uint64
        ydk::YLeaf sw_det_rx_jabber; //type: uint64
        ydk::YLeaf sw_det_rx_errors; //type: uint64
        ydk::YLeaf sw_det_rx_bad_crc; //type: uint64
        ydk::YLeaf sw_det_rx_collisions; //type: uint64
        ydk::YLeaf sw_det_rx_policing_drops; //type: uint64
        ydk::YLeaf sw_det_tx_ucast_packets; //type: uint64
        ydk::YLeaf sw_det_tx_mcast_packets; //type: uint64
        ydk::YLeaf sw_det_tx_bcast_packets; //type: uint64
        ydk::YLeaf sw_det_tx_flow_control; //type: uint64
        ydk::YLeaf sw_det_tx_good_octets; //type: uint64
        ydk::YLeaf sw_det_tx_deferred; //type: uint64
        ydk::YLeaf sw_det_tx_fifo_unrun; //type: uint64
        ydk::YLeaf sw_det_tx_mult_collision; //type: uint64
        ydk::YLeaf sw_det_tx_excess_collision; //type: uint64
        ydk::YLeaf sw_det_tx_late_collisions; //type: uint64
        ydk::YLeaf sw_det_tx_policing_drops; //type: uint64
        ydk::YLeaf sw_det_txq_drops; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_64; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_65_127; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_128_255; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_256_511; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_512_1023; //type: uint64
        ydk::YLeaf sw_det_rxtx_packets_1024_max; //type: uint64

}; // Controller::Switch::Oper::Statistics::Detail::Location::PortIter::Counters


class Controller::Switch::Oper::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacStatistics; //type: Controller::Switch::Oper::Mac::MacStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Mac::MacStatistics> mac_statistics;
        
}; // Controller::Switch::Oper::Mac


class Controller::Switch::Oper::Mac::MacStatistics : public ydk::Entity
{
    public:
        MacStatistics();
        ~MacStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Mac::MacStatistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Mac::MacStatistics


class Controller::Switch::Oper::Mac::MacStatistics::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Mac::MacStatistics::Location


class Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class MacEntry; //type: Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry

        ydk::YList mac_entry;
        
}; // Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter


class Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry : public ydk::Entity
{
    public:
        MacEntry();
        ~MacEntry();

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
        ydk::YLeaf base_reg; //type: string
        ydk::YLeaf desc; //type: string
        ydk::YLeaf value_; //type: string

}; // Controller::Switch::Oper::Mac::MacStatistics::Location::PortIter::MacEntry


class Controller::Switch::Oper::Bridge : public ydk::Entity
{
    public:
        Bridge();
        ~Bridge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Statistics; //type: Controller::Switch::Oper::Bridge::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Bridge::Statistics> statistics;
        
}; // Controller::Switch::Oper::Bridge


class Controller::Switch::Oper::Bridge::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Bridge::Statistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Bridge::Statistics


class Controller::Switch::Oper::Bridge::Statistics::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class IngressSetId; //type: Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId
        class EgressSetId; //type: Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId

        ydk::YList ingress_set_id;
        ydk::YList egress_set_id;
        
}; // Controller::Switch::Oper::Bridge::Statistics::Location


class Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId : public ydk::Entity
{
    public:
        IngressSetId();
        ~IngressSetId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ingress_set; //type: uint32
        ydk::YLeaf ingress_set_name; //type: string
        ydk::YLeaf ingress_frames; //type: uint64
        ydk::YLeaf ingress_vlan_discards; //type: uint64
        ydk::YLeaf ingress_security_discards; //type: uint64
        ydk::YLeaf ingress_other_discards; //type: uint64

}; // Controller::Switch::Oper::Bridge::Statistics::Location::IngressSetId


class Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId : public ydk::Entity
{
    public:
        EgressSetId();
        ~EgressSetId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf egress_set; //type: uint32
        ydk::YLeaf egress_set_name; //type: string
        ydk::YLeaf egress_ucast_frames; //type: uint64
        ydk::YLeaf egress_mcast_frames; //type: uint64
        ydk::YLeaf egress_bcast_frames; //type: uint64
        ydk::YLeaf egress_discarded_frames; //type: uint64
        ydk::YLeaf egress_txq_congestion; //type: uint64
        ydk::YLeaf egress_ctrl_packets; //type: uint64
        ydk::YLeaf egress_other_drops; //type: uint64

}; // Controller::Switch::Oper::Bridge::Statistics::Location::EgressSetId


class Controller::Switch::Oper::Fdb : public ydk::Entity
{
    public:
        Fdb();
        ~Fdb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vlan; //type: Controller::Switch::Oper::Fdb::Vlan
        class Mac; //type: Controller::Switch::Oper::Fdb::Mac
        class Port; //type: Controller::Switch::Oper::Fdb::Port
        class Statistics; //type: Controller::Switch::Oper::Fdb::Statistics
        class SwitchFdbCommon; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Mac> mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::SwitchFdbCommon> switch_fdb_common;
        
}; // Controller::Switch::Oper::Fdb


class Controller::Switch::Oper::Fdb::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VlanIter; //type: Controller::Switch::Oper::Fdb::Vlan::VlanIter

        ydk::YList vlan_iter;
        
}; // Controller::Switch::Oper::Fdb::Vlan


class Controller::Switch::Oper::Fdb::Vlan::VlanIter : public ydk::Entity
{
    public:
        VlanIter();
        ~VlanIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vlan; //type: uint16
        class SwitchFdbCommon; //type: Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon> switch_fdb_common;
        
}; // Controller::Switch::Oper::Fdb::Vlan::VlanIter


class Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon : public ydk::Entity
{
    public:
        SwitchFdbCommon();
        ~SwitchFdbCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon


class Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf num_entries; //type: uint32
        ydk::YLeaf has_trunk_entry; //type: uint8
        ydk::YLeaf trunk_entry_message; //type: string
        class FdbBlock; //type: Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock> fdb_block;
        
}; // Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location


class Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock : public ydk::Entity
{
    public:
        FdbBlock();
        ~FdbBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FdbEntry; //type: Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry

        ydk::YList fdb_entry;
        
}; // Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock


class Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry : public ydk::Entity
{
    public:
        FdbEntry();
        ~FdbEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_index; //type: uint32
        ydk::YLeaf fdb_mac_addr; //type: string
        ydk::YLeaf fdb_vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::fdb_vlan)
        ydk::YLeaf fdb_vlan_hex;
        ydk::YLeaf fdb_port; //type: int32
        ydk::YLeaf fdb_trap_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_static_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeafList fdb_synced_cores; //type: list of  uint8

}; // Controller::Switch::Oper::Fdb::Vlan::VlanIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry


class Controller::Switch::Oper::Fdb::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacIter; //type: Controller::Switch::Oper::Fdb::Mac::MacIter

        ydk::YList mac_iter;
        
}; // Controller::Switch::Oper::Fdb::Mac


class Controller::Switch::Oper::Fdb::Mac::MacIter : public ydk::Entity
{
    public:
        MacIter();
        ~MacIter();

        bool has_data() const override;
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
        class SwitchFdbCommon; //type: Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon> switch_fdb_common;
        
}; // Controller::Switch::Oper::Fdb::Mac::MacIter


class Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon : public ydk::Entity
{
    public:
        SwitchFdbCommon();
        ~SwitchFdbCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon


class Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf num_entries; //type: uint32
        ydk::YLeaf has_trunk_entry; //type: uint8
        ydk::YLeaf trunk_entry_message; //type: string
        class FdbBlock; //type: Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock> fdb_block;
        
}; // Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location


class Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock : public ydk::Entity
{
    public:
        FdbBlock();
        ~FdbBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FdbEntry; //type: Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry

        ydk::YList fdb_entry;
        
}; // Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock


class Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry : public ydk::Entity
{
    public:
        FdbEntry();
        ~FdbEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_index; //type: uint32
        ydk::YLeaf fdb_mac_addr; //type: string
        ydk::YLeaf fdb_vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::fdb_vlan)
        ydk::YLeaf fdb_vlan_hex;
        ydk::YLeaf fdb_port; //type: int32
        ydk::YLeaf fdb_trap_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_static_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeafList fdb_synced_cores; //type: list of  uint8

}; // Controller::Switch::Oper::Fdb::Mac::MacIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry


class Controller::Switch::Oper::Fdb::Port : public ydk::Entity
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

        class PortIter; //type: Controller::Switch::Oper::Fdb::Port::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Fdb::Port


class Controller::Switch::Oper::Fdb::Port::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf port; //type: int32
        class SwitchFdbCommon; //type: Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon> switch_fdb_common;
        
}; // Controller::Switch::Oper::Fdb::Port::PortIter


class Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon : public ydk::Entity
{
    public:
        SwitchFdbCommon();
        ~SwitchFdbCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon


class Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf num_entries; //type: uint32
        ydk::YLeaf has_trunk_entry; //type: uint8
        ydk::YLeaf trunk_entry_message; //type: string
        class FdbBlock; //type: Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock> fdb_block;
        
}; // Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location


class Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock : public ydk::Entity
{
    public:
        FdbBlock();
        ~FdbBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FdbEntry; //type: Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry

        ydk::YList fdb_entry;
        
}; // Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock


class Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry : public ydk::Entity
{
    public:
        FdbEntry();
        ~FdbEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_index; //type: uint32
        ydk::YLeaf fdb_mac_addr; //type: string
        ydk::YLeaf fdb_vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry::fdb_vlan)
        ydk::YLeaf fdb_vlan_hex;
        ydk::YLeaf fdb_port; //type: int32
        ydk::YLeaf fdb_trap_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_static_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeafList fdb_synced_cores; //type: list of  uint8

}; // Controller::Switch::Oper::Fdb::Port::PortIter::SwitchFdbCommon::Location::FdbBlock::FdbEntry


class Controller::Switch::Oper::Fdb::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Fdb::Statistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::Statistics


class Controller::Switch::Oper::Fdb::Statistics::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class CounterInfo; //type: Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo
        class CoreId; //type: Controller::Switch::Oper::Fdb::Statistics::Location::CoreId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo> counter_info;
        ydk::YList core_id;
        
}; // Controller::Switch::Oper::Fdb::Statistics::Location


class Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo : public ydk::Entity
{
    public:
        CounterInfo();
        ~CounterInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_shadow_entries; //type: uint32
        ydk::YLeaf fdb_max_shadow_entries; //type: uint32
        ydk::YLeaf fdb_max_hash_chain; //type: uint32
        ydk::YLeaf fdb_entries_added; //type: uint32
        ydk::YLeaf fdb_entries_deleted; //type: uint32
        ydk::YLeaf fdb_entries_updated; //type: uint32
        ydk::YLeaf fdb_flushes; //type: uint32
        ydk::YLeaf fdb_address_updates; //type: uint32
        ydk::YLeaf fdb_new_addresses; //type: uint32
        ydk::YLeaf fdb_aged_updates; //type: uint32
        ydk::YLeaf fdb_transplant_updates; //type: uint32
        ydk::YLeaf fdb_forwarding_updates; //type: uint32
        ydk::YLeaf fdb_address_insert_errors; //type: uint32
        ydk::YLeaf fdb_address_update_errors; //type: uint32
        ydk::YLeaf fdb_memory_errors; //type: uint32
        ydk::YLeaf fdb_allocation_errors; //type: uint32
        ydk::YLeaf fdb_address_updates_queued; //type: uint32
        ydk::YLeaf fdb_address_queue_full; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_forwarding_updates_queued; //type: uint32
        ydk::YLeaf fdb_forwarding_queue_full; //type: EsdmaSwitchYesNoEnum

}; // Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo


class Controller::Switch::Oper::Fdb::Statistics::Location::CoreId : public ydk::Entity
{
    public:
        CoreId();
        ~CoreId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf core; //type: int32
        ydk::YLeaf core_entries; //type: uint32
        ydk::YLeaf core_static_entries; //type: uint32

}; // Controller::Switch::Oper::Fdb::Statistics::Location::CoreId


class Controller::Switch::Oper::Fdb::SwitchFdbCommon : public ydk::Entity
{
    public:
        SwitchFdbCommon();
        ~SwitchFdbCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon


class Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf num_entries; //type: uint32
        ydk::YLeaf has_trunk_entry; //type: uint8
        ydk::YLeaf trunk_entry_message; //type: string
        class FdbBlock; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock> fdb_block;
        
}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location


class Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock : public ydk::Entity
{
    public:
        FdbBlock();
        ~FdbBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FdbEntry; //type: Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry

        ydk::YList fdb_entry;
        
}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock


class Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry : public ydk::Entity
{
    public:
        FdbEntry();
        ~FdbEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fdb_index; //type: uint32
        ydk::YLeaf fdb_mac_addr; //type: string
        ydk::YLeaf fdb_vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::fdb_vlan)
        ydk::YLeaf fdb_vlan_hex;
        ydk::YLeaf fdb_port; //type: int32
        ydk::YLeaf fdb_trap_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf fdb_static_entry; //type: EsdmaSwitchYesNoEnum
        ydk::YLeafList fdb_synced_cores; //type: list of  uint8

}; // Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry


class Controller::Switch::Oper::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Rules; //type: Controller::Switch::Oper::Vlan::Rules
        class Information; //type: Controller::Switch::Oper::Vlan::Information
        class VlanDetail; //type: Controller::Switch::Oper::Vlan::VlanDetail
        class Membership; //type: Controller::Switch::Oper::Vlan::Membership

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Vlan::Rules> rules;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Vlan::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Vlan::VlanDetail> vlan_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Vlan::Membership> membership;
        
}; // Controller::Switch::Oper::Vlan


class Controller::Switch::Oper::Vlan::Rules : public ydk::Entity
{
    public:
        Rules();
        ~Rules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Vlan::Rules::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Vlan::Rules


class Controller::Switch::Oper::Vlan::Rules::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Vlan::Rules::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Vlan::Rules::Location


class Controller::Switch::Oper::Vlan::Rules::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class VlanId; //type: Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::Rules::Location::PortIter


class Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        class RuleId; //type: Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId

        ydk::YList rule_id;
        
}; // Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId


class Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId : public ydk::Entity
{
    public:
        RuleId();
        ~RuleId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: SwitchDataDirectionEnum
        ydk::YLeaf match_table; //type: SwitchTableTypeEnum
        ydk::YLeaf match_type; //type: SwitchMatchTypeEnum
        ydk::YLeaf match_vlan_id; //type: uint16
        ydk::YLeaf action; //type: SwitchActionTypeEnum
        ydk::YLeaf action_vlan_id; //type: uint16

}; // Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId


class Controller::Switch::Oper::Vlan::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Vlan::Information::Location
        class Summary; //type: Controller::Switch::Oper::Vlan::Information::Summary

        ydk::YList location;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Vlan::Information::Summary> summary;
        
}; // Controller::Switch::Oper::Vlan::Information


class Controller::Switch::Oper::Vlan::Information::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf serial_num; //type: string
        class SdrId; //type: Controller::Switch::Oper::Vlan::Information::Location::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Location


class Controller::Switch::Oper::Vlan::Information::Location::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        class VlanId; //type: Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Location::SdrId


class Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::vlan)
        ydk::YLeaf vlan_hex;
        ydk::YLeaf vlan_use; //type: string

}; // Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId


class Controller::Switch::Oper::Vlan::Information::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SdrId; //type: Controller::Switch::Oper::Vlan::Information::Summary::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Summary


class Controller::Switch::Oper::Vlan::Information::Summary::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        class VlanId; //type: Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::Information::Summary::SdrId


class Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::vlan)
        ydk::YLeaf vlan_hex;
        ydk::YLeaf vlan_use; //type: string

}; // Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId


class Controller::Switch::Oper::Vlan::VlanDetail : public ydk::Entity
{
    public:
        VlanDetail();
        ~VlanDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VlanId; //type: Controller::Switch::Oper::Vlan::VlanDetail::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::VlanDetail


class Controller::Switch::Oper::Vlan::VlanDetail::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vlan; //type: uint16
        class Rules; //type: Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules> rules;
        
}; // Controller::Switch::Oper::Vlan::VlanDetail::VlanId


class Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules : public ydk::Entity
{
    public:
        Rules();
        ~Rules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules


class Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location


class Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class RuleId; //type: Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId

        ydk::YList rule_id;
        
}; // Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter


class Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId : public ydk::Entity
{
    public:
        RuleId();
        ~RuleId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: SwitchDataDirectionEnum
        ydk::YLeaf match_table; //type: SwitchTableTypeEnum
        ydk::YLeaf match_type; //type: SwitchMatchTypeEnum
        ydk::YLeaf match_vlan_id; //type: uint16
        ydk::YLeaf action; //type: SwitchActionTypeEnum
        ydk::YLeaf action_vlan_id; //type: uint16

}; // Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId


class Controller::Switch::Oper::Vlan::Membership : public ydk::Entity
{
    public:
        Membership();
        ~Membership();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Vlan::Membership::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Vlan::Membership


class Controller::Switch::Oper::Vlan::Membership::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class VlanId; //type: Controller::Switch::Oper::Vlan::Membership::Location::VlanId

        ydk::YList vlan_id;
        
}; // Controller::Switch::Oper::Vlan::Membership::Location


class Controller::Switch::Oper::Vlan::Membership::Location::VlanId : public ydk::Entity
{
    public:
        VlanId();
        ~VlanId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        //type: uint16 (refers to cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Vlan::Membership::Location::VlanId::vlan)
        ydk::YLeaf vlan_hex;
        ydk::YLeafList port; //type: list of  uint8

}; // Controller::Switch::Oper::Vlan::Membership::Location::VlanId


class Controller::Switch::Oper::Esd : public ydk::Entity
{
    public:
        Esd();
        ~Esd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Instance; //type: Controller::Switch::Oper::Esd::Instance

        ydk::YList instance;
        
}; // Controller::Switch::Oper::Esd


class Controller::Switch::Oper::Esd::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf process_name; //type: string
        class Trace; //type: Controller::Switch::Oper::Esd::Instance::Trace

        ydk::YList trace;
        
}; // Controller::Switch::Oper::Esd::Instance


class Controller::Switch::Oper::Esd::Instance::Trace : public ydk::Entity
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

        ydk::YLeaf buffer; //type: string
        class Location; //type: Controller::Switch::Oper::Esd::Instance::Trace::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Esd::Instance::Trace


class Controller::Switch::Oper::Esd::Instance::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::Switch::Oper::Esd::Instance::Trace::Location


class Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions


class Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks


class Controller::Switch::Oper::MgmtAgent : public ydk::Entity
{
    public:
        MgmtAgent();
        ~MgmtAgent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Esdma; //type: Controller::Switch::Oper::MgmtAgent::Esdma
        class Connections; //type: Controller::Switch::Oper::MgmtAgent::Connections

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::MgmtAgent::Esdma> esdma;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::MgmtAgent::Connections> connections;
        
}; // Controller::Switch::Oper::MgmtAgent


class Controller::Switch::Oper::MgmtAgent::Esdma : public ydk::Entity
{
    public:
        Esdma();
        ~Esdma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Trace; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace

        ydk::YList trace;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace : public ydk::Entity
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
        class Location; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks


class Controller::Switch::Oper::MgmtAgent::Connections : public ydk::Entity
{
    public:
        Connections();
        ~Connections();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sdr_nm_num_clients; //type: uint32
        ydk::YLeaf esd_client_num_clients; //type: uint32
        ydk::YLeaf mlap_client_num_clients; //type: uint32
        class EsdmaInfo; //type: Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo
        class SdrNmClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId
        class EsdClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId
        class MlapClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo> esdma_info;
        ydk::YList sdr_nm_client_id;
        ydk::YList esd_client_id;
        ydk::YList mlap_client_id;
        
}; // Controller::Switch::Oper::MgmtAgent::Connections


class Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo : public ydk::Entity
{
    public:
        EsdmaInfo();
        ~EsdmaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf active_esdma_address; //type: string

}; // Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo


class Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId : public ydk::Entity
{
    public:
        SdrNmClientId();
        ~SdrNmClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sdr_nm_ip_address; //type: string
        ydk::YLeaf sdr_nm_port_num; //type: uint16

}; // Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId


class Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId : public ydk::Entity
{
    public:
        EsdClientId();
        ~EsdClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf esd_client_ip_address; //type: string
        ydk::YLeaf esd_client_port_num; //type: uint16
        ydk::YLeaf esd_client_location; //type: string
        ydk::YLeaf esd_client_switch_info_cached; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf esd_client_sdr_info_cached; //type: EsdmaSwitchYesNoEnum

}; // Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId


class Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId : public ydk::Entity
{
    public:
        MlapClientId();
        ~MlapClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mlap_client_ip_address; //type: string
        ydk::YLeaf mlap_client_port_num; //type: uint16
        ydk::YLeaf mlap_client_location; //type: string
        ydk::YLeaf mlap_client_switch_info_cached; //type: EsdmaSwitchYesNoEnum

}; // Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId


class Controller::Switch::Oper::Sdr : public ydk::Entity
{
    public:
        Sdr();
        ~Sdr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PortStatistics; //type: Controller::Switch::Oper::Sdr::PortStatistics
        class GlobalStatistics; //type: Controller::Switch::Oper::Sdr::GlobalStatistics
        class Policers; //type: Controller::Switch::Oper::Sdr::Policers
        class SdrDetail; //type: Controller::Switch::Oper::Sdr::SdrDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Sdr::PortStatistics> port_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Sdr::GlobalStatistics> global_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Sdr::Policers> policers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Sdr::SdrDetail> sdr_detail;
        
}; // Controller::Switch::Oper::Sdr


class Controller::Switch::Oper::Sdr::PortStatistics : public ydk::Entity
{
    public:
        PortStatistics();
        ~PortStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Sdr::PortStatistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Sdr::PortStatistics


class Controller::Switch::Oper::Sdr::PortStatistics::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Sdr::PortStatistics::Location


class Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class SdrId; //type: Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter


class Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        class TrafficTypeId; //type: Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId

        ydk::YList traffic_type_id;
        
}; // Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId


class Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId : public ydk::Entity
{
    public:
        TrafficTypeId();
        ~TrafficTypeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_type; //type: EsdmaSdrTrafficType
        class DirectionId; //type: Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId

        ydk::YList direction_id;
        
}; // Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId


class Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId : public ydk::Entity
{
    public:
        DirectionId();
        ~DirectionId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: SwitchDataDirectionEnum
        ydk::YLeaf green_packets; //type: uint64
        ydk::YLeaf yellow_packets; //type: uint64
        ydk::YLeaf red_packets; //type: uint64

}; // Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId


class Controller::Switch::Oper::Sdr::GlobalStatistics : public ydk::Entity
{
    public:
        GlobalStatistics();
        ~GlobalStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Sdr::GlobalStatistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Sdr::GlobalStatistics


class Controller::Switch::Oper::Sdr::GlobalStatistics::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class SdrId; //type: Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Sdr::GlobalStatistics::Location


class Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        class TrafficTypeId; //type: Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId

        ydk::YList traffic_type_id;
        
}; // Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId


class Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId : public ydk::Entity
{
    public:
        TrafficTypeId();
        ~TrafficTypeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_type; //type: EsdmaSdrTrafficType
        class TrafficClassId; //type: Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId

        ydk::YList traffic_class_id;
        
}; // Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId


class Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId : public ydk::Entity
{
    public:
        TrafficClassId();
        ~TrafficClassId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tc; //type: int8
        ydk::YLeaf green_packets; //type: uint64
        ydk::YLeaf yellow_packets; //type: uint64
        ydk::YLeaf red_packets; //type: uint64

}; // Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId


class Controller::Switch::Oper::Sdr::Policers : public ydk::Entity
{
    public:
        Policers();
        ~Policers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Sdr::Policers::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Sdr::Policers


class Controller::Switch::Oper::Sdr::Policers::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class EsdPolicerStatus; //type: Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus
        class SdrId; //type: Controller::Switch::Oper::Sdr::Policers::Location::SdrId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus> esd_policer_status;
        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Sdr::Policers::Location


class Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus : public ydk::Entity
{
    public:
        EsdPolicerStatus();
        ~EsdPolicerStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IndentGroup; //type: Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup> indent_group;
        
}; // Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus


class Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup : public ydk::Entity
{
    public:
        IndentGroup();
        ~IndentGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf esd_port_policing_enabled; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf esd_port_committed_burst_size; //type: uint32
        ydk::YLeaf esd_port_peak_burst_size; //type: uint32
        ydk::YLeaf esd_port_policer_mru; //type: uint32
        ydk::YLeaf esd_global_policing_enabled; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf esd_global_committed_burst_size; //type: uint32
        ydk::YLeaf esd_global_peak_burst_size; //type: uint32
        ydk::YLeaf esd_global_policer_mru; //type: uint32

}; // Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup


class Controller::Switch::Oper::Sdr::Policers::Location::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr; //type: uint8
        ydk::YLeaf esd_sdr_name; //type: string
        ydk::YLeaf esd_sdr_cir; //type: uint8
        ydk::YLeaf esd_sdr_pir; //type: uint8
        class EsdSdrCosTypeIter; //type: Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter

        ydk::YList esd_sdr_cos_type_iter;
        
}; // Controller::Switch::Oper::Sdr::Policers::Location::SdrId


class Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter : public ydk::Entity
{
    public:
        EsdSdrCosTypeIter();
        ~EsdSdrCosTypeIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf esd_sdr_cos_type; //type: EsdCirEirType
        ydk::YLeaf esd_sdr_cos_0; //type: uint8
        ydk::YLeaf esd_sdr_cos_1; //type: uint8
        ydk::YLeaf esd_sdr_cos_2; //type: uint8
        ydk::YLeaf esd_sdr_cos_3; //type: uint8
        ydk::YLeaf esd_sdr_cos_4; //type: uint8
        ydk::YLeaf esd_sdr_cos_5; //type: uint8
        ydk::YLeaf esd_sdr_cos_6; //type: uint8
        ydk::YLeaf esd_sdr_cos_7; //type: uint8

}; // Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter


class Controller::Switch::Oper::Sdr::SdrDetail : public ydk::Entity
{
    public:
        SdrDetail();
        ~SdrDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SdrId; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId

        ydk::YList sdr_id;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sdr; //type: uint8
        class PortStatistics; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics> port_statistics;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics : public ydk::Entity
{
    public:
        PortStatistics();
        ~PortStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location : public ydk::Entity
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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32
        class TrafficTypeId; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId

        ydk::YList traffic_type_id;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId : public ydk::Entity
{
    public:
        TrafficTypeId();
        ~TrafficTypeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_type; //type: EsdmaSdrTrafficType
        class DirectionId; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId

        ydk::YList direction_id;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId : public ydk::Entity
{
    public:
        DirectionId();
        ~DirectionId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: SwitchDataDirectionEnum
        class TrafficClassId; //type: Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId

        ydk::YList traffic_class_id;
        
}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId


class Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId : public ydk::Entity
{
    public:
        TrafficClassId();
        ~TrafficClassId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tc; //type: int8
        ydk::YLeaf green_packets; //type: uint64
        ydk::YLeaf yellow_packets; //type: uint64
        ydk::YLeaf red_packets; //type: uint64

}; // Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId


class Controller::Switch::Oper::PortState : public ydk::Entity
{
    public:
        PortState();
        ~PortState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::PortState::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::PortState


class Controller::Switch::Oper::PortState::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::PortState::Location::PortIter

        ydk::YList port_iter;
        
}; // Controller::Switch::Oper::PortState::Location


class Controller::Switch::Oper::PortState::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32

}; // Controller::Switch::Oper::PortState::Location::PortIter


class Controller::Switch::Oper::Trunk : public ydk::Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::Trunk::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::Trunk


class Controller::Switch::Oper::Trunk::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf trunk_member_count; //type: uint32
        ydk::YLeaf trunk_name; //type: string
        class TrunkMemberPortIter; //type: Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter

        ydk::YList trunk_member_port_iter;
        
}; // Controller::Switch::Oper::Trunk::Location


class Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter : public ydk::Entity
{
    public:
        TrunkMemberPortIter();
        ~TrunkMemberPortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trunk_member_port; //type: uint32
        ydk::YLeaf trunk_member_status; //type: EsdmaTrunkMemberStatus

}; // Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter


class Controller::Switch::Oper::SwitchDebugCont : public ydk::Entity
{
    public:
        SwitchDebugCont();
        ~SwitchDebugCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Debug; //type: Controller::Switch::Oper::SwitchDebugCont::Debug

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::SwitchDebugCont::Debug> debug;
        
}; // Controller::Switch::Oper::SwitchDebugCont


class Controller::Switch::Oper::SwitchDebugCont::Debug : public ydk::Entity
{
    public:
        Debug();
        ~Debug();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Counters; //type: Controller::Switch::Oper::SwitchDebugCont::Debug::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::SwitchDebugCont::Debug::Counters> counters;
        
}; // Controller::Switch::Oper::SwitchDebugCont::Debug


class Controller::Switch::Oper::SwitchDebugCont::Debug::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location

        ydk::YList location;
        
}; // Controller::Switch::Oper::SwitchDebugCont::Debug::Counters


class Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class Counters_; //type: Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_asr9k::Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_> counters;
        
}; // Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location


class Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_ : public ydk::Entity
{
    public:
        Counters_();
        ~Counters_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf phy_polling_enabled; //type: boolean
        ydk::YLeaf tx_thread_wdog_cnt; //type: uint64
        ydk::YLeaf rx_thread_wdog_cnt; //type: uint64
        ydk::YLeaf task_lock_longest_wait_time; //type: uint64
        ydk::YLeaf task_lock_longest_wait_event; //type: uint32
        ydk::YLeaf task_lock_longest_held_time; //type: uint64
        ydk::YLeaf task_lock_longest_held_event; //type: uint32
        ydk::YLeaf task_unlock_longest_wait_time; //type: uint64
        ydk::YLeaf task_unlock_longest_wait_event; //type: uint32
        ydk::YLeaf dma_max_rx_dequeued_per_int; //type: uint64
        ydk::YLeaf dma_rx_packets_dequeued; //type: uint64
        ydk::YLeaf dma_rx_packet_dequeue_errors; //type: uint64
        ydk::YLeaf dma_tx_packets_queued; //type: uint64
        ydk::YLeaf dma_tx_packets_completed; //type: uint64
        ydk::YLeaf dma_tx_packet_no_msg_errors; //type: uint64
        ydk::YLeaf dma_tx_packet_msg_too_big_errors; //type: uint64
        ydk::YLeaf dma_tx_packet_no_buffer_errors; //type: uint64
        ydk::YLeaf dma_tx_packet_queue_errors; //type: uint64
        ydk::YLeaf dma_tx_packet_completion_errors; //type: uint64
        ydk::YLeaf dma_max_tx_freed_per_int; //type: uint64
        ydk::YLeaf dma_tx_buf_alloc_count; //type: uint64
        ydk::YLeaf dma_tx_buf_free_count; //type: uint64
        class SwitchCore; //type: Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore

        ydk::YList switch_core;
        
}; // Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_


class Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore : public ydk::Entity
{
    public:
        SwitchCore();
        ~SwitchCore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf core; //type: uint8
        ydk::YLeaf msi_count; //type: uint64
        ydk::YLeaf aer_count; //type: uint64
        ydk::YLeaf hp_count; //type: uint64
        ydk::YLeaf wdog_count; //type: uint64
        ydk::YLeaf core_task_lock_longest_wait_time; //type: uint64
        ydk::YLeaf core_task_lock_longest_held_time; //type: uint64
        ydk::YLeaf core_task_unlock_longest_wait_time; //type: uint64

}; // Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_ASR9K_ */

