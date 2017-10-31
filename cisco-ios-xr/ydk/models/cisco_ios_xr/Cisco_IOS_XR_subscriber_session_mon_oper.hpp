#ifndef _CISCO_IOS_XR_SUBSCRIBER_SESSION_MON_OPER_
#define _CISCO_IOS_XR_SUBSCRIBER_SESSION_MON_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_session_mon_oper {

class SessionMon : public ydk::Entity
{
    public:
        SessionMon();
        ~SessionMon();

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

        class Nodes; //type: SessionMon::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes> nodes;
        
}; // SessionMon


class SessionMon::Nodes : public ydk::Entity
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

        class Node; //type: SessionMon::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes::Node> > node;
        
}; // SessionMon::Nodes


class SessionMon::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        class SessionMonStatistics; //type: SessionMon::Nodes::Node::SessionMonStatistics
        class InterfaceAllStatistics; //type: SessionMon::Nodes::Node::InterfaceAllStatistics
        class LicenseStatistics; //type: SessionMon::Nodes::Node::LicenseStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes::Node::SessionMonStatistics> session_mon_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes::Node::InterfaceAllStatistics> interface_all_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes::Node::LicenseStatistics> license_statistics;
        
}; // SessionMon::Nodes::Node


class SessionMon::Nodes::Node::SessionMonStatistics : public ydk::Entity
{
    public:
        SessionMonStatistics();
        ~SessionMonStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint32
        ydk::YLeaf pppoe; //type: uint32
        ydk::YLeaf pppoe_ds; //type: uint32
        ydk::YLeaf dhcpv4; //type: uint32
        ydk::YLeaf dhcpv6; //type: uint32
        ydk::YLeaf dhcp_ds; //type: uint32
        ydk::YLeaf ippkt; //type: uint32
        ydk::YLeaf active_sessions; //type: uint32
        ydk::YLeaf standby_sessions; //type: uint32
        ydk::YLeaf peak_active_sessions; //type: uint32
        ydk::YLeaf peak_standby_sessions; //type: uint32
        ydk::YLeaf peak_start_time; //type: uint32
        ydk::YLeaf timeout_value; //type: uint32

}; // SessionMon::Nodes::Node::SessionMonStatistics


class SessionMon::Nodes::Node::InterfaceAllStatistics : public ydk::Entity
{
    public:
        InterfaceAllStatistics();
        ~InterfaceAllStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceAllStatistic; //type: SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_session_mon_oper::SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic> > interface_all_statistic;
        
}; // SessionMon::Nodes::Node::InterfaceAllStatistics


class SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic : public ydk::Entity
{
    public:
        InterfaceAllStatistic();
        ~InterfaceAllStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf pppoe; //type: uint32
        ydk::YLeaf pppoe_ds; //type: uint32
        ydk::YLeaf dhcpv4; //type: uint32
        ydk::YLeaf dhcpv6; //type: uint32
        ydk::YLeaf dhcp_ds; //type: uint32
        ydk::YLeaf ippkt; //type: uint32
        ydk::YLeaf active_sessions; //type: uint32
        ydk::YLeaf standby_sessions; //type: uint32
        ydk::YLeaf peak_active_sessions; //type: uint32
        ydk::YLeaf peak_standby_sessions; //type: uint32
        ydk::YLeaf peak_start_time; //type: uint32
        ydk::YLeaf timeout_value; //type: uint32

}; // SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic


class SessionMon::Nodes::Node::LicenseStatistics : public ydk::Entity
{
    public:
        LicenseStatistics();
        ~LicenseStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint32
        ydk::YLeaf pppoe; //type: uint32
        ydk::YLeaf pppoe_ds; //type: uint32
        ydk::YLeaf dhcpv4; //type: uint32
        ydk::YLeaf dhcpv6; //type: uint32
        ydk::YLeaf dhcp_ds; //type: uint32
        ydk::YLeaf ippkt; //type: uint32
        ydk::YLeaf active_sessions; //type: uint32
        ydk::YLeaf standby_sessions; //type: uint32
        ydk::YLeaf peak_active_sessions; //type: uint32
        ydk::YLeaf peak_standby_sessions; //type: uint32
        ydk::YLeaf peak_start_time; //type: uint32
        ydk::YLeaf timeout_value; //type: uint32

}; // SessionMon::Nodes::Node::LicenseStatistics


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_SESSION_MON_OPER_ */

