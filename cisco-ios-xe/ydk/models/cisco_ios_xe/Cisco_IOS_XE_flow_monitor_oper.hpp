#ifndef _CISCO_IOS_XE_FLOW_MONITOR_OPER_
#define _CISCO_IOS_XE_FLOW_MONITOR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_flow_monitor_oper {

class FlowMonitors : public ydk::Entity
{
    public:
        FlowMonitors();
        ~FlowMonitors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class FlowMonitor; //type: FlowMonitors::FlowMonitor

        std::vector<std::shared_ptr<Cisco_IOS_XE_flow_monitor_oper::FlowMonitors::FlowMonitor> > flow_monitor;
        
}; // FlowMonitors


class FlowMonitors::FlowMonitor : public ydk::Entity
{
    public:
        FlowMonitor();
        ~FlowMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf time_collected; //type: uint64
        class Flows; //type: FlowMonitors::FlowMonitor::Flows

        std::shared_ptr<Cisco_IOS_XE_flow_monitor_oper::FlowMonitors::FlowMonitor::Flows> flows;
        
}; // FlowMonitors::FlowMonitor


class FlowMonitors::FlowMonitor::Flows : public ydk::Entity
{
    public:
        Flows();
        ~Flows();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: FlowMonitors::FlowMonitor::Flows::Flow

        std::vector<std::shared_ptr<Cisco_IOS_XE_flow_monitor_oper::FlowMonitors::FlowMonitor::Flows::Flow> > flow;
        
}; // FlowMonitors::FlowMonitor::Flows


class FlowMonitors::FlowMonitor::Flows::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf interface_input; //type: string
        ydk::YLeaf is_multicast; //type: string
        ydk::YLeaf vrf_id_input; //type: int64
        ydk::YLeaf source_port; //type: int64
        ydk::YLeaf destination_port; //type: int64
        ydk::YLeaf ip_tos; //type: string
        ydk::YLeaf ip_protocol; //type: int64
        ydk::YLeaf interface_output; //type: string
        ydk::YLeaf bytes; //type: int64
        ydk::YLeaf packets; //type: int64

}; // FlowMonitors::FlowMonitor::Flows::Flow


}
}

#endif /* _CISCO_IOS_XE_FLOW_MONITOR_OPER_ */

