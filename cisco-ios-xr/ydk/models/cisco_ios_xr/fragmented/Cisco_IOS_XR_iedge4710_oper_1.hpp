#ifndef _CISCO_IOS_XR_IEDGE4710_OPER_1_
#define _CISCO_IOS_XR_IEDGE4710_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_iedge4710_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_iedge4710_oper {


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AddressFamilySummaries : public Entity
{
    public:
        AddressFamilySummaries();
        ~AddressFamilySummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AddressFamilySummary; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary> > address_family_summary;


}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary : public Entity
{
    public:
        AddressFamilySummary();
        ~AddressFamilySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: SubscriberAddressFamilyFilterFlagEnum

        class StateXr; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::UsernameSummaries : public Entity
{
    public:
        UsernameSummaries();
        ~UsernameSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UsernameSummary; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary> > username_summary;


}; // Subscriber::Session::Nodes::Node::UsernameSummaries


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary : public Entity
{
    public:
        UsernameSummary();
        ~UsernameSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf username; //type: string

        class StateXr; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries : public Entity
{
    public:
        AccessInterfaceSummaries();
        ~AccessInterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccessInterfaceSummary; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary> > access_interface_summary;


}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary : public Entity
{
    public:
        AccessInterfaceSummary();
        ~AccessInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class StateXr; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries : public Entity
{
    public:
        Ipv4AddressSummaries();
        ~Ipv4AddressSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4AddressSummary; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary> > ipv4_address_summary;


}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary : public Entity
{
    public:
        Ipv4AddressSummary();
        ~Ipv4AddressSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string

        class StateXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::VrfSummaries : public Entity
{
    public:
        VrfSummaries();
        ~VrfSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfSummary; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary> > vrf_summary;


}; // Subscriber::Session::Nodes::Node::VrfSummaries


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary : public Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class StateXr; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr
        class AddressFamilyXr; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr> address_family_xr;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr> state_xr;


}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr : public Entity
{
    public:
        StateXr();
        ~StateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initialized_sessions; //type: uint32
        YLeaf connecting_sessions; //type: uint32
        YLeaf connected_sessions; //type: uint32
        YLeaf activated_sessions; //type: uint32
        YLeaf idle_sessions; //type: uint32
        YLeaf disconnecting_sessions; //type: uint32
        YLeaf end_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr : public Entity
{
    public:
        AddressFamilyXr();
        ~AddressFamilyXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pppoe; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe
        class IpSubscriberDhcp; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp
        class IpSubscriberPacket; //type: Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp> ip_subscriber_dhcp;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket> ip_subscriber_packet;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe> pppoe;


}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe : public Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp : public Entity
{
    public:
        IpSubscriberDhcp();
        ~IpSubscriberDhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp


class Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket : public Entity
{
    public:
        IpSubscriberPacket();
        ~IpSubscriberPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_progress_sessions; //type: uint32
        YLeaf ipv4_only_sessions; //type: uint32
        YLeaf ipv6_only_sessions; //type: uint32
        YLeaf dual_part_up_sessions; //type: uint32
        YLeaf dual_up_sessions; //type: uint32
        YLeaf lac_sessions; //type: uint32



}; // Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket


class Subscriber::Session::Nodes::Node::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Session_; //type: Subscriber::Session::Nodes::Node::Sessions::Session_

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_> > session;


}; // Subscriber::Session::Nodes::Node::Sessions


class Subscriber::Session::Nodes::Node::Sessions::Session_ : public Entity
{
    public:
        Session_();
        ~Session_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: string
        YLeaf session_type; //type: IedgeOperSessionEnum
        YLeaf pppoe_sub_type; //type: IedgePppSubEnum
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf circuit_id; //type: string
        YLeaf remote_id; //type: string
        YLeaf lns_address; //type: string
        YLeaf lac_address; //type: string
        YLeaf tunnel_client_authentication_id; //type: string
        YLeaf tunnel_server_authentication_id; //type: string
        YLeaf session_ip_address; //type: string
        YLeaf session_ipv6_address; //type: string
        YLeaf session_ipv6_prefix; //type: string
        YLeaf delegated_ipv6_prefix; //type: string
        YLeaf ipv6_interface_id; //type: string
        YLeaf mac_address; //type: string
        YLeaf account_session_id; //type: string
        YLeaf nas_port; //type: string
        YLeaf username; //type: string
        YLeaf clientname; //type: string
        YLeaf formattedname; //type: string
        YLeaf is_session_authentic; //type: boolean
        YLeaf is_session_author; //type: boolean
        YLeaf session_state; //type: IedgeOperSessionStateEnum
        YLeaf session_creation_time; //type: string
        YLeaf idle_state_change_time; //type: string
        YLeaf total_session_idle_time; //type: uint32
        YLeaf access_interface_name; //type: string
        YLeaf pending_callbacks; //type: uint64
        YLeaf af_up_status; //type: uint32
        YLeaf session_ipv4_state; //type: IedgeOperSessionAfStateEnum
        YLeaf session_ipv6_state; //type: IedgeOperSessionAfStateEnum

        class Accounting; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting
        class UserProfileAttributes; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes
        class MobilityAttributes; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes
        class SessionChangeOfAuthorization; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes> mobility_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization> > session_change_of_authorization;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes> user_profile_attributes;


}; // Subscriber::Session::Nodes::Node::Sessions::Session_


class Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccountingSession; //type: Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession> > accounting_session;


}; // Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting


class Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession : public Entity
{
    public:
        AccountingSession();
        ~AccountingSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf accounting_state_rc; //type: uint32
        YLeaf accounting_stop_state; //type: uint32
        YLeaf record_context_name; //type: string
        YLeaf method_list_name; //type: string
        YLeaf account_session_id; //type: string
        YLeaf accounting_start_time; //type: string
        YLeaf is_interim_accounting_enabled; //type: boolean
        YLeaf interim_interval; //type: uint32
        YLeaf last_successful_interim_update_time; //type: string
        YLeaf next_interim_update_attempt_time; //type: uint32
        YLeaf last_interim_update_attempt_time; //type: string
        YLeaf sent_interim_updates; //type: uint32
        YLeaf accepted_interim_updates; //type: uint32
        YLeaf rejected_interim_updates; //type: uint32
        YLeaf sent_interim_update_failures; //type: uint32



}; // Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession


class Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes : public Entity
{
    public:
        UserProfileAttributes();
        ~UserProfileAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4mtu; //type: uint32
        YLeaf ipv4_unnumbered; //type: string
        YLeaf authorization_service_type; //type: AaaAuthServiceEnum
        YLeaf tunnel_client_endpoint; //type: string
        YLeaf tunnel_server_endpoint; //type: string
        YLeaf tunnel_tos_setting; //type: uint32
        YLeaf tunnel_medium; //type: AaaTunnelMediumEnum
        YLeaf tunnel_preference; //type: uint32
        YLeaf tunnel_client_authentication_id; //type: string
        YLeaf tunnel_protocol; //type: AaaTunnelProtoEnum
        YLeaf actual_data_rate_upstream; //type: uint32
        YLeaf actual_data_rate_downstream; //type: uint32
        YLeaf attainable_data_rate_upstream; //type: uint32
        YLeaf attainable_data_rate_downstream; //type: uint32
        YLeaf pool_address; //type: string
        YLeaf circuit_id; //type: string
        YLeaf connection_receive_speed; //type: uint32
        YLeaf connection_transmission_speed; //type: uint32
        YLeaf destination_station_id; //type: string
        YLeaf primary_dns_server_address; //type: string
        YLeaf secondary_dns_server_address; //type: string
        YLeaf formatted_calling_station_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf interface_type; //type: AaaInterfaceEnum
        YLeaf interim_accounting_interval; //type: uint32
        YLeaf ingress_access_list; //type: string
        YLeaf egress_access_list; //type: string
        YLeaf ip_netmask; //type: string
        YLeaf is_interworking_functionality; //type: boolean
        YLeaf max_interleaving_delay_downstream; //type: uint32
        YLeaf max_interleaving_delay_upstream; //type: uint32
        YLeaf max_data_rate_upstream; //type: uint32
        YLeaf max_data_rate_downstream; //type: uint32
        YLeaf min_data_rate_downstream; //type: uint32
        YLeaf min_data_rate_downstream_low_power; //type: uint32
        YLeaf min_data_rate_upstream_low_power; //type: uint32
        YLeaf primary_net_bios_server_address; //type: string
        YLeaf secondary_net_bios_server_address; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf remote_id; //type: string
        YLeaf route; //type: string
        YLeaf session_timeout; //type: uint32
        YLeaf strict_rpf_packets; //type: uint32
        YLeaf accounting_session_id; //type: string
        YLeaf upstream_parameterized_qos_policy; //type: string
        YLeaf downstream_parameterized_qos_policy; //type: string
        YLeaf upstream_qos_policy; //type: string
        YLeaf downstream_qos_policy; //type: string
        YLeaf session_termination_cause; //type: AaaTerminateCauseEnum



}; // Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes


class Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes : public Entity
{
    public:
        MobilityAttributes();
        ~MobilityAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mpc_protocol; //type: boolean
        YLeaf mobility_ipv4_address; //type: string
        YLeaf mobility_default_ipv4_gateway; //type: string
        YLeaf mobility_dns_server; //type: string
        YLeaf mobility_dhcp_server; //type: string
        YLeaf mobility_ipv4_netmask; //type: string
        YLeaf domain_name; //type: string
        YLeaf uplink_gre_key; //type: string
        YLeaf downlink_gre_key; //type: string
        YLeaf lease_time; //type: string



}; // Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes


class Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization : public Entity
{
    public:
        SessionChangeOfAuthorization();
        ~SessionChangeOfAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf request_acked; //type: boolean
        YLeaf request_time; //type: string
        YLeaf coa_request_attributes; //type: string
        YLeaf reply_time; //type: string
        YLeaf coa_reply_attributes; //type: string



}; // Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization

class IedgeLicenseManager : public Entity
{
    public:
        IedgeLicenseManager();
        ~IedgeLicenseManager();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Nodes; //type: IedgeLicenseManager::Nodes

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes> nodes;


}; // IedgeLicenseManager


class IedgeLicenseManager::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: IedgeLicenseManager::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes::Node> > node;


}; // IedgeLicenseManager::Nodes


class IedgeLicenseManager::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nodeid; //type: string

        class IedgeLicenseManagerSummary; //type: IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary

        std::shared_ptr<Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary> iedge_license_manager_summary;


}; // IedgeLicenseManager::Nodes::Node


class IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary : public Entity
{
    public:
        IedgeLicenseManagerSummary();
        ~IedgeLicenseManagerSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_limit; //type: uint32
        YLeaf session_threshold; //type: uint32
        YLeaf session_license_count; //type: uint32
        YLeaf session_count; //type: uint32



}; // IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary


}
}

#endif /* _CISCO_IOS_XR_IEDGE4710_OPER_1_ */

