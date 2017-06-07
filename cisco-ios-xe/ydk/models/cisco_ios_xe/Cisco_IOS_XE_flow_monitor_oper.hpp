#ifndef _CISCO_IOS_XE_FLOW_MONITOR_OPER_
#define _CISCO_IOS_XE_FLOW_MONITOR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_flow_monitor_oper {

class FlowMonitors : public Entity
{
    public:
        FlowMonitors();
        ~FlowMonitors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class FlowMonitor; //type: FlowMonitors::FlowMonitor

        std::vector<std::shared_ptr<Cisco_IOS_XE_flow_monitor_oper::FlowMonitors::FlowMonitor> > flow_monitor;
        
}; // FlowMonitors


class FlowMonitors::FlowMonitor : public Entity
{
    public:
        FlowMonitor();
        ~FlowMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf time_collected; //type: uint64
        class Flows; //type: FlowMonitors::FlowMonitor::Flows

        std::shared_ptr<Cisco_IOS_XE_flow_monitor_oper::FlowMonitors::FlowMonitor::Flows> flows;
        
}; // FlowMonitors::FlowMonitor


class FlowMonitors::FlowMonitor::Flows : public Entity
{
    public:
        Flows();
        ~Flows();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flow; //type: FlowMonitors::FlowMonitor::Flows::Flow

        std::vector<std::shared_ptr<Cisco_IOS_XE_flow_monitor_oper::FlowMonitors::FlowMonitor::Flows::Flow> > flow;
        
}; // FlowMonitors::FlowMonitor::Flows


class FlowMonitors::FlowMonitor::Flows::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf interface_input; //type: string
        YLeaf is_multicast; //type: string
        YLeaf vrf_id_input; //type: int64
        YLeaf source_port; //type: int64
        YLeaf destination_port; //type: int64
        YLeaf ip_tos; //type: string
        YLeaf ip_protocol; //type: int64
        YLeaf interface_output; //type: string
        YLeaf bytes; //type: int64
        YLeaf packets; //type: int64

}; // FlowMonitors::FlowMonitor::Flows::Flow


}
}

#endif /* _CISCO_IOS_XE_FLOW_MONITOR_OPER_ */

