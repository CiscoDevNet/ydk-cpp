#ifndef _CISCO_IOS_XR_SUBSCRIBER_SESSION_MON_OPER_
#define _CISCO_IOS_XR_SUBSCRIBER_SESSION_MON_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_subscriber_session_mon_oper {

class SessionMon : public Entity
{
    public:
        SessionMon();
        ~SessionMon();

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

        class Nodes; //type: SessionMon::Nodes

        std::shared_ptr<Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes> nodes;
        
}; // SessionMon


class SessionMon::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: SessionMon::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes::Node> > node;
        
}; // SessionMon::Nodes


class SessionMon::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: string
        class SessionMonStatistics; //type: SessionMon::Nodes::Node::SessionMonStatistics
        class InterfaceAllStatistics; //type: SessionMon::Nodes::Node::InterfaceAllStatistics
        class LicenseStatistics; //type: SessionMon::Nodes::Node::LicenseStatistics

        std::shared_ptr<Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes::Node::InterfaceAllStatistics> interface_all_statistics;
        std::shared_ptr<Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes::Node::LicenseStatistics> license_statistics;
        std::shared_ptr<Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes::Node::SessionMonStatistics> session_mon_statistics;
        
}; // SessionMon::Nodes::Node


class SessionMon::Nodes::Node::SessionMonStatistics : public Entity
{
    public:
        SessionMonStatistics();
        ~SessionMonStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint32
        YLeaf pppoe; //type: uint32
        YLeaf pppoe_ds; //type: uint32
        YLeaf dhcpv4; //type: uint32
        YLeaf dhcpv6; //type: uint32
        YLeaf dhcp_ds; //type: uint32
        YLeaf ippkt; //type: uint32
        YLeaf active_sessions; //type: uint32
        YLeaf standby_sessions; //type: uint32
        YLeaf peak_active_sessions; //type: uint32
        YLeaf peak_standby_sessions; //type: uint32

}; // SessionMon::Nodes::Node::SessionMonStatistics


class SessionMon::Nodes::Node::InterfaceAllStatistics : public Entity
{
    public:
        InterfaceAllStatistics();
        ~InterfaceAllStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceAllStatistic; //type: SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic> > interface_all_statistic;
        
}; // SessionMon::Nodes::Node::InterfaceAllStatistics


class SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic : public Entity
{
    public:
        InterfaceAllStatistic();
        ~InterfaceAllStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf total; //type: uint32
        YLeaf pppoe; //type: uint32
        YLeaf pppoe_ds; //type: uint32
        YLeaf dhcpv4; //type: uint32
        YLeaf dhcpv6; //type: uint32
        YLeaf dhcp_ds; //type: uint32
        YLeaf ippkt; //type: uint32
        YLeaf active_sessions; //type: uint32
        YLeaf standby_sessions; //type: uint32
        YLeaf peak_active_sessions; //type: uint32
        YLeaf peak_standby_sessions; //type: uint32

}; // SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic


class SessionMon::Nodes::Node::LicenseStatistics : public Entity
{
    public:
        LicenseStatistics();
        ~LicenseStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint32
        YLeaf pppoe; //type: uint32
        YLeaf pppoe_ds; //type: uint32
        YLeaf dhcpv4; //type: uint32
        YLeaf dhcpv6; //type: uint32
        YLeaf dhcp_ds; //type: uint32
        YLeaf ippkt; //type: uint32
        YLeaf active_sessions; //type: uint32
        YLeaf standby_sessions; //type: uint32
        YLeaf peak_active_sessions; //type: uint32
        YLeaf peak_standby_sessions; //type: uint32

}; // SessionMon::Nodes::Node::LicenseStatistics


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_SESSION_MON_OPER_ */

