#ifndef _CISCO_IOS_XR_SYNCC_OPER_
#define _CISCO_IOS_XR_SYNCC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_syncc_oper {

class TimingController : public ydk::Entity
{
    public:
        TimingController();
        ~TimingController();

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

        class Nodes; //type: TimingController::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_syncc_oper::TimingController::Nodes> nodes;
        
}; // TimingController


class TimingController::Nodes : public ydk::Entity
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

        class Node; //type: TimingController::Nodes::Node

        ydk::YList node;
        
}; // TimingController::Nodes


class TimingController::Nodes::Node : public ydk::Entity
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
        class State; //type: TimingController::Nodes::Node::State
        class Clock; //type: TimingController::Nodes::Node::Clock
        class TimingSource; //type: TimingController::Nodes::Node::TimingSource

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_syncc_oper::TimingController::Nodes::Node::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_syncc_oper::TimingController::Nodes::Node::Clock> clock_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_syncc_oper::TimingController::Nodes::Node::TimingSource> timing_source;
        
}; // TimingController::Nodes::Node


class TimingController::Nodes::Node::State : public ydk::Entity
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

        class SynccInstance; //type: TimingController::Nodes::Node::State::SynccInstance

        ydk::YList syncc_instance;
        
}; // TimingController::Nodes::Node::State


class TimingController::Nodes::Node::State::SynccInstance : public ydk::Entity
{
    public:
        SynccInstance();
        ~SynccInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf controller_state; //type: SynccStates
        ydk::YLeaf syncc_node_state; //type: NodeState
        ydk::YLeaf verbose_level; //type: uint32
        ydk::YLeaf initial_count; //type: uint32
        ydk::YLeaf shutdown_count; //type: uint32
        ydk::YLeaf set_input_count; //type: uint32
        ydk::YLeaf set_capability_count; //type: uint32
        ydk::YLeaf get_clock_count; //type: uint32
        ydk::YLeaf set_clock_out_count; //type: uint32
        ydk::YLeaf sync_enable_count; //type: uint32
        ydk::YLeaf sync_disable_count; //type: uint32
        ydk::YLeaf capability_count; //type: uint32
        ydk::YLeaf set_quality_level_count; //type: uint32
        ydk::YLeaf input_notification; //type: uint32
        ydk::YLeaf capability_notification; //type: uint32
        ydk::YLeaf status_notification; //type: uint32
        ydk::YLeaf resync_notification; //type: uint32

}; // TimingController::Nodes::Node::State::SynccInstance


class TimingController::Nodes::Node::Clock : public ydk::Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SynccInstance; //type: TimingController::Nodes::Node::Clock::SynccInstance

        ydk::YList syncc_instance;
        
}; // TimingController::Nodes::Node::Clock


class TimingController::Nodes::Node::Clock::SynccInstance : public ydk::Entity
{
    public:
        SynccInstance();
        ~SynccInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clock_; //type: TimingController::Nodes::Node::Clock::SynccInstance::Clock_

        ydk::YList clock_;
        
}; // TimingController::Nodes::Node::Clock::SynccInstance


class TimingController::Nodes::Node::Clock::SynccInstance::Clock_ : public ydk::Entity
{
    public:
        Clock_();
        ~Clock_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_configured_port0; //type: boolean
        ydk::YLeaf is_configured_port1; //type: boolean
        ydk::YLeaf is_configured_port2; //type: boolean
        ydk::YLeaf is_configured_port3; //type: boolean
        ydk::YLeaf mode_port0; //type: ClockModes
        ydk::YLeaf mode_port1; //type: ClockModes
        ydk::YLeaf mode_port2; //type: ClockModes
        ydk::YLeaf mode_port3; //type: ClockModes
        ydk::YLeaf submode1_port0; //type: Smode1
        ydk::YLeaf submode1_port1; //type: Smode1
        ydk::YLeaf submode1_port2; //type: Smode1
        ydk::YLeaf submode1_port3; //type: Smode1
        ydk::YLeaf submode2_port0; //type: Smode2
        ydk::YLeaf submode2_port1; //type: Smode2
        ydk::YLeaf submode2_port2; //type: Smode2
        ydk::YLeaf submode2_port3; //type: Smode2
        ydk::YLeaf submode3_port0; //type: uint32
        ydk::YLeaf submode3_port1; //type: uint32
        ydk::YLeaf submode3_port2; //type: uint32
        ydk::YLeaf submode3_port3; //type: uint32
        ydk::YLeaf shutdown_port0; //type: uint32
        ydk::YLeaf shutdown_port1; //type: uint32
        ydk::YLeaf shutdown_port2; //type: uint32
        ydk::YLeaf shutdown_port3; //type: uint32
        ydk::YLeaf direction_port0; //type: Direct
        ydk::YLeaf direction_port1; //type: Direct
        ydk::YLeaf direction_port2; //type: Direct
        ydk::YLeaf direction_port3; //type: Direct
        ydk::YLeaf baudrate_port0; //type: uint32
        ydk::YLeaf baudrate_port1; //type: uint32
        ydk::YLeaf baudrate_port2; //type: uint32
        ydk::YLeaf baudrate_port3; //type: uint32
        ydk::YLeaf quality_option_port0; //type: QlOption1
        ydk::YLeaf quality_option_port1; //type: QlOption1
        ydk::YLeaf quality_option_port2; //type: QlOption1
        ydk::YLeaf quality_option_port3; //type: QlOption1
        ydk::YLeaf transmit_ssm_port0; //type: uint32
        ydk::YLeaf transmit_ssm_port1; //type: uint32
        ydk::YLeaf transmit_ssm_port2; //type: uint32
        ydk::YLeaf transmit_ssm_port3; //type: uint32
        ydk::YLeaf recieve_ssm_port0; //type: uint32
        ydk::YLeaf recieve_ssm_port1; //type: uint32
        ydk::YLeaf recieve_ssm_port2; //type: uint32
        ydk::YLeaf recieve_ssm_port3; //type: uint32
        ydk::YLeaf interface_state_port0; //type: InterfaceState
        ydk::YLeaf interface_state_port1; //type: InterfaceState
        ydk::YLeaf interface_state_port2; //type: InterfaceState
        ydk::YLeaf interface_state_port3; //type: InterfaceState

}; // TimingController::Nodes::Node::Clock::SynccInstance::Clock_


class TimingController::Nodes::Node::TimingSource : public ydk::Entity
{
    public:
        TimingSource();
        ~TimingSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SynccInstance; //type: TimingController::Nodes::Node::TimingSource::SynccInstance

        ydk::YList syncc_instance;
        
}; // TimingController::Nodes::Node::TimingSource


class TimingController::Nodes::Node::TimingSource::SynccInstance : public ydk::Entity
{
    public:
        SynccInstance();
        ~SynccInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TimingStatusT0; //type: TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0
        class TimingStatusT4; //type: TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4
        class TimingStatus1588; //type: TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588

        ydk::YList timing_status_t0;
        ydk::YList timing_status_t4;
        ydk::YList timing_status1588;
        
}; // TimingController::Nodes::Node::TimingSource::SynccInstance


class TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0 : public ydk::Entity
{
    public:
        TimingStatusT0();
        ~TimingStatusT0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: uint8
        ydk::YLeaf slot; //type: uint8
        ydk::YLeaf port; //type: uint8
        ydk::YLeaf clock_source; //type: Source
        ydk::YLeaf rank; //type: uint8
        ydk::YLeaf quality_level_option; //type: uint8
        ydk::YLeaf quality_level_value; //type: uint8
        ydk::YLeaf user_priority; //type: uint8
        ydk::YLeaf clock_state; //type: SourceStateName
        ydk::YLeaf is_select; //type: boolean

}; // TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT0


class TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4 : public ydk::Entity
{
    public:
        TimingStatusT4();
        ~TimingStatusT4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: uint8
        ydk::YLeaf slot; //type: uint8
        ydk::YLeaf port; //type: uint8
        ydk::YLeaf clock_source; //type: Source
        ydk::YLeaf rank; //type: uint8
        ydk::YLeaf quality_level_option; //type: uint8
        ydk::YLeaf quality_level_value; //type: uint8
        ydk::YLeaf user_priority; //type: uint8
        ydk::YLeaf clock_state; //type: SourceStateName
        ydk::YLeaf is_select; //type: boolean

}; // TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatusT4


class TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588 : public ydk::Entity
{
    public:
        TimingStatus1588();
        ~TimingStatus1588();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: uint8
        ydk::YLeaf slot; //type: uint8
        ydk::YLeaf port; //type: uint8
        ydk::YLeaf clock_source; //type: Source
        ydk::YLeaf rank; //type: uint8
        ydk::YLeaf quality_level_option; //type: uint8
        ydk::YLeaf quality_level_value; //type: uint8
        ydk::YLeaf user_priority; //type: uint8
        ydk::YLeaf clock_state; //type: SourceStateName
        ydk::YLeaf is_select; //type: boolean

}; // TimingController::Nodes::Node::TimingSource::SynccInstance::TimingStatus1588

class Smode1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf extended_super_frame;
        static const ydk::Enum::YLeaf d4;
        static const ydk::Enum::YLeaf non_crc4;
        static const ydk::Enum::YLeaf crc4;
        static const ydk::Enum::YLeaf submode1_none;

};

class Smode2 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ami_mode;
        static const ydk::Enum::YLeaf b8zs;
        static const ydk::Enum::YLeaf hdb3;
        static const ydk::Enum::YLeaf submode2_none;

};

class ClockModes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf t1;
        static const ydk::Enum::YLeaf e1;
        static const ydk::Enum::YLeaf two_m;
        static const ydk::Enum::YLeaf input64k;
        static const ydk::Enum::YLeaf output6m;
        static const ydk::Enum::YLeaf uti;
        static const ydk::Enum::YLeaf none;

};

class QlOption1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf quality_level_none;
        static const ydk::Enum::YLeaf o1;
        static const ydk::Enum::YLeaf o2_g1;
        static const ydk::Enum::YLeaf o2_g2;

};

class Direct : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf receive_transmit;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf receive;

};

class SourceStateName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_valid;
        static const ydk::Enum::YLeaf unqualified;
        static const ydk::Enum::YLeaf available;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf unmonitored;
        static const ydk::Enum::YLeaf error;

};

class Source : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf ethernet_line_interface;
        static const ydk::Enum::YLeaf sonet_line_interface;
        static const ydk::Enum::YLeaf clock_interface;
        static const ydk::Enum::YLeaf internal;

};

class NodeState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf standby;

};

class InterfaceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf admin_down;

};

class SynccStates : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf shutdown;

};


}
}

#endif /* _CISCO_IOS_XR_SYNCC_OPER_ */

