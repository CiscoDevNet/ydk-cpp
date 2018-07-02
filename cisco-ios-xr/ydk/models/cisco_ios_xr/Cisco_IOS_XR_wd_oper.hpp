#ifndef _CISCO_IOS_XR_WD_OPER_
#define _CISCO_IOS_XR_WD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_wd_oper {

class Watchdog : public ydk::Entity
{
    public:
        Watchdog();
        ~Watchdog();

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

        class Nodes; //type: Watchdog::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_wd_oper::Watchdog::Nodes> nodes;
        
}; // Watchdog


class Watchdog::Nodes : public ydk::Entity
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

        class Node; //type: Watchdog::Nodes::Node

        ydk::YList node;
        
}; // Watchdog::Nodes


class Watchdog::Nodes::Node : public ydk::Entity
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
        class ThresholdMemory; //type: Watchdog::Nodes::Node::ThresholdMemory
        class MemoryState; //type: Watchdog::Nodes::Node::MemoryState
        class OverloadState; //type: Watchdog::Nodes::Node::OverloadState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory> threshold_memory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::MemoryState> memory_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::OverloadState> overload_state;
        
}; // Watchdog::Nodes::Node


class Watchdog::Nodes::Node::ThresholdMemory : public ydk::Entity
{
    public:
        ThresholdMemory();
        ~ThresholdMemory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default; //type: Watchdog::Nodes::Node::ThresholdMemory::Default
        class Configured; //type: Watchdog::Nodes::Node::ThresholdMemory::Configured

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Default> default_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Configured> configured;
        
}; // Watchdog::Nodes::Node::ThresholdMemory


class Watchdog::Nodes::Node::ThresholdMemory::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfiguredMemory; //type: Watchdog::Nodes::Node::ThresholdMemory::Default::ConfiguredMemory
        class Memory; //type: Watchdog::Nodes::Node::ThresholdMemory::Default::Memory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Default::ConfiguredMemory> configured_memory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Default::Memory> memory;
        
}; // Watchdog::Nodes::Node::ThresholdMemory::Default


class Watchdog::Nodes::Node::ThresholdMemory::Default::ConfiguredMemory : public ydk::Entity
{
    public:
        ConfiguredMemory();
        ~ConfiguredMemory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf severe; //type: uint32
        ydk::YLeaf critical; //type: uint64

}; // Watchdog::Nodes::Node::ThresholdMemory::Default::ConfiguredMemory


class Watchdog::Nodes::Node::ThresholdMemory::Default::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physical_memory; //type: uint32
        ydk::YLeaf free_memory; //type: uint64
        ydk::YLeaf memory_state; //type: MemoryState

}; // Watchdog::Nodes::Node::ThresholdMemory::Default::Memory


class Watchdog::Nodes::Node::ThresholdMemory::Configured : public ydk::Entity
{
    public:
        Configured();
        ~Configured();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minor; //type: uint32
        ydk::YLeaf severe; //type: uint32
        ydk::YLeaf critical; //type: uint64

}; // Watchdog::Nodes::Node::ThresholdMemory::Configured


class Watchdog::Nodes::Node::MemoryState : public ydk::Entity
{
    public:
        MemoryState();
        ~MemoryState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physical_memory; //type: uint32
        ydk::YLeaf free_memory; //type: uint64
        ydk::YLeaf memory_state; //type: MemoryState

}; // Watchdog::Nodes::Node::MemoryState


class Watchdog::Nodes::Node::OverloadState : public ydk::Entity
{
    public:
        OverloadState();
        ~OverloadState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf overload_control_notification; //type: OverloadCtrlNotif
        ydk::YLeaf default_wdsysmon_throttle; //type: uint32
        ydk::YLeaf configured_wdsysmon_throttle; //type: uint32
        class CurrentThrottle; //type: Watchdog::Nodes::Node::OverloadState::CurrentThrottle
        class LastThrottle; //type: Watchdog::Nodes::Node::OverloadState::LastThrottle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::OverloadState::CurrentThrottle> current_throttle;
        ydk::YList last_throttle;
        
}; // Watchdog::Nodes::Node::OverloadState


class Watchdog::Nodes::Node::OverloadState::CurrentThrottle : public ydk::Entity
{
    public:
        CurrentThrottle();
        ~CurrentThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle_duration; //type: uint32
        ydk::YLeaf start_time; //type: string

}; // Watchdog::Nodes::Node::OverloadState::CurrentThrottle


class Watchdog::Nodes::Node::OverloadState::LastThrottle : public ydk::Entity
{
    public:
        LastThrottle();
        ~LastThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle_duration; //type: uint32
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf stop_time; //type: string

}; // Watchdog::Nodes::Node::OverloadState::LastThrottle

class MemoryState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf severe;
        static const ydk::Enum::YLeaf critical;

};

class OverloadCtrlNotif : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};


}
}

#endif /* _CISCO_IOS_XR_WD_OPER_ */

