#ifndef _CISCO_IOS_XR_IEDGE4710_OPER_1_
#define _CISCO_IOS_XR_IEDGE4710_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_iedge4710_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_iedge4710_oper {


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AddressFamilySummaries : public ydk::Entity
{
    public:
        AddressFamilySummaries();
        ~AddressFamilySummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressFamilySummary; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary> > address_family_summary;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary : public ydk::Entity
{
    public:
        AddressFamilySummary();
        ~AddressFamilySummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: SubscriberAddressFamilyFilterFlag
        class StateXr; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::UsernameSummaries : public ydk::Entity
{
    public:
        UsernameSummaries();
        ~UsernameSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UsernameSummary; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary> > username_summary;
        
}; // Subscriber::Session::Nodes::Node::UsernameSummaries


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary : public ydk::Entity
{
    public:
        UsernameSummary();
        ~UsernameSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries : public ydk::Entity
{
    public:
        AccessInterfaceSummaries();
        ~AccessInterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessInterfaceSummary; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary> > access_interface_summary;
        
}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary : public ydk::Entity
{
    public:
        AccessInterfaceSummary();
        ~AccessInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries : public ydk::Entity
{
    public:
        Ipv4AddressSummaries();
        ~Ipv4AddressSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AddressSummary; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary> > ipv4_address_summary;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary : public ydk::Entity
{
    public:
        Ipv4AddressSummary();
        ~Ipv4AddressSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::VrfSummaries : public ydk::Entity
{
    public:
        VrfSummaries();
        ~VrfSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfSummary; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary> > vrf_summary;
        
}; // Subscriber::Session::Nodes::Node::VrfSummaries


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary : public ydk::Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class StateXr; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr> state_xr;
        
}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr : public ydk::Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initialized_sessions; //type: uint32
        ydk::YLeaf connecting_sessions; //type: uint32
        ydk::YLeaf connected_sessions; //type: uint32
        ydk::YLeaf activated_sessions; //type: uint32
        ydk::YLeaf idle_sessions; //type: uint32
        ydk::YLeaf disconnecting_sessions; //type: uint32
        ydk::YLeaf end_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr : public ydk::Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pppoe; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe> pppoe;
        
}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp : public ydk::Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket : public ydk::Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_progress_sessions; //type: uint32
        ydk::YLeaf ipv4_only_sessions; //type: uint32
        ydk::YLeaf ipv6_only_sessions; //type: uint32
        ydk::YLeaf dual_part_up_sessions; //type: uint32
        ydk::YLeaf dual_up_sessions; //type: uint32
        ydk::YLeaf lac_sessions; //type: uint32

}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Session_; //type: Subscriber::Session::Nodes::Node::Sessions::Session_

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_> > session;
        
}; // Subscriber::Session::Nodes::Node::Sessions


class Subscriber::Session::Nodes::Node::Sessions::Session_ : public ydk::Entity
{
    public:
        Session_();
        ~Session_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: string
        ydk::YLeaf session_type; //type: IedgeOperSession
        ydk::YLeaf pppoe_sub_type; //type: IedgePppSub
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf lns_address; //type: string
        ydk::YLeaf lac_address; //type: string
        ydk::YLeaf tunnel_client_authentication_id; //type: string
        ydk::YLeaf tunnel_server_authentication_id; //type: string
        ydk::YLeaf session_ip_address; //type: string
        ydk::YLeaf session_ipv6_address; //type: string
        ydk::YLeaf session_ipv6_prefix; //type: string
        ydk::YLeaf delegated_ipv6_prefix; //type: string
        ydk::YLeaf ipv6_interface_id; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf account_session_id; //type: string
        ydk::YLeaf nas_port; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf clientname; //type: string
        ydk::YLeaf formattedname; //type: string
        ydk::YLeaf is_session_authentic; //type: boolean
        ydk::YLeaf is_session_author; //type: boolean
        ydk::YLeaf session_state; //type: IedgeOperSessionState
        ydk::YLeaf session_creation_time; //type: string
        ydk::YLeaf idle_state_change_time; //type: string
        ydk::YLeaf total_session_idle_time; //type: uint32
        ydk::YLeaf access_interface_name; //type: string
        ydk::YLeaf pending_callbacks; //type: uint64
        ydk::YLeaf af_up_status; //type: uint32
        ydk::YLeaf session_ipv4_state; //type: IedgeOperSessionAfState
        ydk::YLeaf session_ipv6_state; //type: IedgeOperSessionAfState
        class Accounting; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting
        class UserProfileAttributes; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes
        class MobilityAttributes; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes
        class SessionChangeOfAuthorization; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes> mobility_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization> > session_change_of_authorization;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes> user_profile_attributes;
        
}; // Subscriber::Session::Nodes::Node::Sessions::Session_


class Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccountingSession; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession> > accounting_session;
        
}; // Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting


class Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession : public ydk::Entity
{
    public:
        AccountingSession();
        ~AccountingSession();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accounting_state_rc; //type: uint32
        ydk::YLeaf accounting_stop_state; //type: uint32
        ydk::YLeaf record_context_name; //type: string
        ydk::YLeaf method_list_name; //type: string
        ydk::YLeaf account_session_id; //type: string
        ydk::YLeaf accounting_start_time; //type: string
        ydk::YLeaf is_interim_accounting_enabled; //type: boolean
        ydk::YLeaf interim_interval; //type: uint32
        ydk::YLeaf last_successful_interim_update_time; //type: string
        ydk::YLeaf next_interim_update_attempt_time; //type: uint32
        ydk::YLeaf last_interim_update_attempt_time; //type: string
        ydk::YLeaf sent_interim_updates; //type: uint32
        ydk::YLeaf accepted_interim_updates; //type: uint32
        ydk::YLeaf rejected_interim_updates; //type: uint32
        ydk::YLeaf sent_interim_update_failures; //type: uint32

}; // Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession


class Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes : public ydk::Entity
{
    public:
        UserProfileAttributes();
        ~UserProfileAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4mtu; //type: uint32
        ydk::YLeaf ipv4_unnumbered; //type: string
        ydk::YLeaf authorization_service_type; //type: AaaAuthService
        ydk::YLeaf tunnel_client_endpoint; //type: string
        ydk::YLeaf tunnel_server_endpoint; //type: string
        ydk::YLeaf tunnel_tos_setting; //type: uint32
        ydk::YLeaf tunnel_medium; //type: AaaTunnelMedium
        ydk::YLeaf tunnel_preference; //type: uint32
        ydk::YLeaf tunnel_client_authentication_id; //type: string
        ydk::YLeaf tunnel_protocol; //type: AaaTunnelProto
        ydk::YLeaf actual_data_rate_upstream; //type: uint32
        ydk::YLeaf actual_data_rate_downstream; //type: uint32
        ydk::YLeaf attainable_data_rate_upstream; //type: uint32
        ydk::YLeaf attainable_data_rate_downstream; //type: uint32
        ydk::YLeaf pool_address; //type: string
        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf connection_receive_speed; //type: uint32
        ydk::YLeaf connection_transmission_speed; //type: uint32
        ydk::YLeaf destination_station_id; //type: string
        ydk::YLeaf primary_dns_server_address; //type: string
        ydk::YLeaf secondary_dns_server_address; //type: string
        ydk::YLeaf formatted_calling_station_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_type; //type: AaaInterface
        ydk::YLeaf interim_accounting_interval; //type: uint32
        ydk::YLeaf ingress_access_list; //type: string
        ydk::YLeaf egress_access_list; //type: string
        ydk::YLeaf ip_netmask; //type: string
        ydk::YLeaf is_interworking_functionality; //type: boolean
        ydk::YLeaf max_interleaving_delay_downstream; //type: uint32
        ydk::YLeaf max_interleaving_delay_upstream; //type: uint32
        ydk::YLeaf max_data_rate_upstream; //type: uint32
        ydk::YLeaf max_data_rate_downstream; //type: uint32
        ydk::YLeaf min_data_rate_downstream; //type: uint32
        ydk::YLeaf min_data_rate_downstream_low_power; //type: uint32
        ydk::YLeaf min_data_rate_upstream_low_power; //type: uint32
        ydk::YLeaf primary_net_bios_server_address; //type: string
        ydk::YLeaf secondary_net_bios_server_address; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf route; //type: string
        ydk::YLeaf session_timeout; //type: uint32
        ydk::YLeaf strict_rpf_packets; //type: uint32
        ydk::YLeaf accounting_session_id; //type: string
        ydk::YLeaf upstream_parameterized_qos_policy; //type: string
        ydk::YLeaf downstream_parameterized_qos_policy; //type: string
        ydk::YLeaf upstream_qos_policy; //type: string
        ydk::YLeaf downstream_qos_policy; //type: string
        ydk::YLeaf session_termination_cause; //type: AaaTerminateCause

}; // Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes


class Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes : public ydk::Entity
{
    public:
        MobilityAttributes();
        ~MobilityAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpc_protocol; //type: boolean
        ydk::YLeaf mobility_ipv4_address; //type: string
        ydk::YLeaf mobility_default_ipv4_gateway; //type: string
        ydk::YLeaf mobility_dns_server; //type: string
        ydk::YLeaf mobility_dhcp_server; //type: string
        ydk::YLeaf mobility_ipv4_netmask; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf uplink_gre_key; //type: string
        ydk::YLeaf downlink_gre_key; //type: string
        ydk::YLeaf lease_time; //type: string

}; // Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes


class Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization : public ydk::Entity
{
    public:
        SessionChangeOfAuthorization();
        ~SessionChangeOfAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request_acked; //type: boolean
        ydk::YLeaf request_time; //type: string
        ydk::YLeaf coa_request_attributes; //type: string
        ydk::YLeaf reply_time; //type: string
        ydk::YLeaf coa_reply_attributes; //type: string

}; // Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization

class IedgeLicenseManager : public ydk::Entity
{
    public:
        IedgeLicenseManager();
        ~IedgeLicenseManager();

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

        class Nodes; //type: IedgeLicenseManager::Nodes

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes> nodes;
        
}; // IedgeLicenseManager


class IedgeLicenseManager::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: IedgeLicenseManager::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes::Node> > node;
        
}; // IedgeLicenseManager::Nodes


class IedgeLicenseManager::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nodeid; //type: string
        class IedgeLicenseManagerSummary; //type: IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary> iedge_license_manager_summary;
        
}; // IedgeLicenseManager::Nodes::Node


class IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary : public ydk::Entity
{
    public:
        IedgeLicenseManagerSummary();
        ~IedgeLicenseManagerSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_limit; //type: uint32
        ydk::YLeaf session_threshold; //type: uint32
        ydk::YLeaf session_license_count; //type: uint32
        ydk::YLeaf session_count; //type: uint32

}; // IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary


}
}

#endif /* _CISCO_IOS_XR_IEDGE4710_OPER_1_ */

