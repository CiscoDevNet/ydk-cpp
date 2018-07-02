#ifndef _CISCO_IOS_XE_NATIVE_13_
#define _CISCO_IOS_XE_NATIVE_13_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_12.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Vlan::VlanList::PrivateVlan : public ydk::Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: empty
        ydk::YLeaf association; //type: string
        ydk::YLeaf community; //type: empty
        ydk::YLeaf isolated; //type: empty

}; // Native::Vlan::VlanList::PrivateVlan


class Native::Vlan::VlanList::Lldp : public ydk::Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf run; //type: empty

}; // Native::Vlan::VlanList::Lldp


class Native::Mvrp : public ydk::Entity
{
    public:
        Mvrp();
        ~Mvrp();

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

        ydk::YLeaf global; //type: empty
        class MacLearning; //type: Native::Mvrp::MacLearning
        class Vlan; //type: Native::Mvrp::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mvrp::MacLearning> mac_learning;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mvrp::Vlan> vlan;
        
}; // Native::Mvrp


class Native::Mvrp::MacLearning : public ydk::Entity
{
    public:
        MacLearning();
        ~MacLearning();

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

        ydk::YLeaf auto_; //type: empty

}; // Native::Mvrp::MacLearning


class Native::Mvrp::Vlan : public ydk::Entity
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

        ydk::YLeaf create; //type: empty

}; // Native::Mvrp::Vlan


class Native::Avb : public ydk::Entity
{
    public:
        Avb();
        ~Avb();

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

        ydk::YLeaf strict; //type: empty

}; // Native::Avb


class Native::Ptp : public ydk::Entity
{
    public:
        Ptp();
        ~Ptp();

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

        ydk::YLeaf domain; //type: uint8
        ydk::YLeaf neighbor_propagation_delay_threshold; //type: uint32
        ydk::YLeaf priority1; //type: uint8
        ydk::YLeaf priority2; //type: uint8
        class Profile; //type: Native::Ptp::Profile
        class Mode; //type: Native::Ptp::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ptp::Profile> profile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ptp::Mode> mode;
        
}; // Native::Ptp


class Native::Ptp::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf dot1as; //type: empty

}; // Native::Ptp::Profile


class Native::Ptp::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

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

        ydk::YLeaf e2etransparent; //type: empty
        ydk::YLeaf p2ptransparent; //type: empty
        class Boundary; //type: Native::Ptp::Mode::Boundary

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ptp::Mode::Boundary> boundary;
        
}; // Native::Ptp::Mode


class Native::Ptp::Mode::Boundary : public ydk::Entity
{
    public:
        Boundary();
        ~Boundary();

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

        ydk::YLeaf delay_req; //type: empty
        ydk::YLeaf pdelay_req; //type: empty

}; // Native::Ptp::Mode::Boundary


class Native::Cdp : public ydk::Entity
{
    public:
        Cdp();
        ~Cdp();

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

        ydk::YLeaf holdtime; //type: uint8
        ydk::YLeaf timer; //type: uint8
        ydk::YLeaf run; //type: empty

}; // Native::Cdp


class Native::Avc : public ydk::Entity
{
    public:
        Avc();
        ~Avc();

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

        class DnsAs; //type: Native::Avc::DnsAs
        class SdService; //type: Native::Avc::SdService

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::DnsAs> dns_as;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService> sd_service; // presence node
        
}; // Native::Avc


class Native::Avc::DnsAs : public ydk::Entity
{
    public:
        DnsAs();
        ~DnsAs();

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

        class Client; //type: Native::Avc::DnsAs::Client

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::DnsAs::Client> client;
        
}; // Native::Avc::DnsAs


class Native::Avc::DnsAs::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        ydk::YLeaf enable; //type: empty
        class TrustedDomains; //type: Native::Avc::DnsAs::Client::TrustedDomains

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::DnsAs::Client::TrustedDomains> trusted_domains; // presence node
        
}; // Native::Avc::DnsAs::Client


class Native::Avc::DnsAs::Client::TrustedDomains : public ydk::Entity
{
    public:
        TrustedDomains();
        ~TrustedDomains();

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

        ydk::YLeaf domain; //type: string

}; // Native::Avc::DnsAs::Client::TrustedDomains


class Native::Avc::SdService : public ydk::Entity
{
    public:
        SdService();
        ~SdService();

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

        ydk::YLeaf segment; //type: string
        class Controller; //type: Native::Avc::SdService::Controller

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService::Controller> controller; // presence node
        
}; // Native::Avc::SdService


class Native::Avc::SdService::Controller : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf vrf; //type: string
        class Address; //type: Native::Avc::SdService::Controller::Address
        class DestinationPorts; //type: Native::Avc::SdService::Controller::DestinationPorts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService::Controller::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService::Controller::DestinationPorts> destination_ports;
        
}; // Native::Avc::SdService::Controller


class Native::Avc::SdService::Controller::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

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

        class Ipv4OrHostname; //type: Native::Avc::SdService::Controller::Address::Ipv4OrHostname

        ydk::YList ipv4_or_hostname;
        
}; // Native::Avc::SdService::Controller::Address


class Native::Avc::SdService::Controller::Address::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

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

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf ipv4_or_hostname0; //type: one of union, string

}; // Native::Avc::SdService::Controller::Address::Ipv4OrHostname


class Native::Avc::SdService::Controller::DestinationPorts : public ydk::Entity
{
    public:
        DestinationPorts();
        ~DestinationPorts();

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

        ydk::YLeaf sensor_exporter; //type: uint16

}; // Native::Avc::SdService::Controller::DestinationPorts


class Native::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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

        class ClassMap; //type: Native::Policy::ClassMap
        class PolicyMap; //type: Native::Policy::PolicyMap

        ydk::YList class_map;
        ydk::YList policy_map;
        
}; // Native::Policy


class Native::Policy::ClassMap : public ydk::Entity
{
    public:
        ClassMap();
        ~ClassMap();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf subscriber; //type: empty
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf prematch; //type: Prematch
        ydk::YLeaf description; //type: string
        class Match; //type: Native::Policy::ClassMap::Match
        class NoMatch; //type: Native::Policy::ClassMap::NoMatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch> no_match;
                class Type;
        class Protocol;
        class Prematch;

}; // Native::Policy::ClassMap


class Native::Policy::ClassMap::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf fr_de; //type: empty
        ydk::YLeaf non_client_nrt; //type: empty
        ydk::YLeaf peer; //type: string
        ydk::YLeaf client_type; //type: ClientType
        ydk::YLeaf device_type; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf oui; //type: string
        ydk::YLeaf port_type; //type: PortType
        ydk::YLeaf service_template; //type: string
        ydk::YLeaf session_type; //type: SessionType
        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf ssid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf timer; //type: string
        ydk::YLeaf user_role; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeafList class_map; //type: list of  string
        ydk::YLeafList cos; //type: list of  uint8
        ydk::YLeafList discard_class; //type: list of  uint8
        ydk::YLeafList dscp; //type: list of  one of uint8, enumeration
        ydk::YLeafList fr_dlci; //type: list of  uint16
        ydk::YLeafList input_interface; //type: list of  string
        ydk::YLeafList precedence; //type: list of  one of uint8, enumeration
        ydk::YLeafList qos_group; //type: list of  uint16
        class CurrentMethodPriority; //type: Native::Policy::ClassMap::Match::CurrentMethodPriority
        class Application; //type: Native::Policy::ClassMap::Match::Application
        class AccessGroup; //type: Native::Policy::ClassMap::Match::AccessGroup
        class DestinationAddress; //type: Native::Policy::ClassMap::Match::DestinationAddress
        class GroupObject; //type: Native::Policy::ClassMap::Match::GroupObject
        class Ip; //type: Native::Policy::ClassMap::Match::Ip
        class Mpls; //type: Native::Policy::ClassMap::Match::Mpls
        class Packet; //type: Native::Policy::ClassMap::Match::Packet
        class Protocol; //type: Native::Policy::ClassMap::Match::Protocol
        class SecurityGroup; //type: Native::Policy::ClassMap::Match::SecurityGroup
        class Service; //type: Native::Policy::ClassMap::Match::Service
        class SourceAddress; //type: Native::Policy::ClassMap::Match::SourceAddress
        class Vlan; //type: Native::Policy::ClassMap::Match::Vlan
        class ActivatedServiceTemplate; //type: Native::Policy::ClassMap::Match::ActivatedServiceTemplate
        class AuthorizationStatus; //type: Native::Policy::ClassMap::Match::AuthorizationStatus
        class AuthorizingMethodPriority; //type: Native::Policy::ClassMap::Match::AuthorizingMethodPriority
        class Method; //type: Native::Policy::ClassMap::Match::Method
        class ResultType; //type: Native::Policy::ClassMap::Match::ResultType
        class Not; //type: Native::Policy::ClassMap::Match::Not

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::CurrentMethodPriority> current_method_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::DestinationAddress> destination_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::GroupObject> group_object;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Packet> packet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SecurityGroup> security_group;
        ydk::YList service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Vlan> vlan;
        ydk::YList activated_service_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::AuthorizationStatus> authorization_status;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::AuthorizingMethodPriority> authorizing_method_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Method> method;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType> result_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not> not_;
                class ClientType;
        class PortType;
        class SessionType;

}; // Native::Policy::ClassMap::Match


class Native::Policy::ClassMap::Match::CurrentMethodPriority : public ydk::Entity
{
    public:
        CurrentMethodPriority();
        ~CurrentMethodPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8

}; // Native::Policy::ClassMap::Match::CurrentMethodPriority


class Native::Policy::ClassMap::Match::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationGroup; //type: Native::Policy::ClassMap::Match::Application::ApplicationGroup
        class Attribute; //type: Native::Policy::ClassMap::Match::Application::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Application::ApplicationGroup> application_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Application::Attribute> attribute;
        
}; // Native::Policy::ClassMap::Match::Application


class Native::Policy::ClassMap::Match::Application::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf telepresence_group; //type: empty
        ydk::YLeaf vmware_group; //type: empty
        ydk::YLeaf webex_group; //type: empty

}; // Native::Policy::ClassMap::Match::Application::ApplicationGroup


class Native::Policy::ClassMap::Match::Application::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf media_type; //type: MediaType
        class MediaType;

}; // Native::Policy::ClassMap::Match::Application::Attribute


class Native::Policy::ClassMap::Match::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeafList name; //type: list of  string

}; // Native::Policy::ClassMap::Match::AccessGroup


class Native::Policy::ClassMap::Match::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::DestinationAddress


class Native::Policy::ClassMap::Match::GroupObject : public ydk::Entity
{
    public:
        GroupObject();
        ~GroupObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Security; //type: Native::Policy::ClassMap::Match::GroupObject::Security

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::GroupObject::Security> security;
        
}; // Native::Policy::ClassMap::Match::GroupObject


class Native::Policy::ClassMap::Match::GroupObject::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList source; //type: list of  string
        ydk::YLeafList destination; //type: list of  string

}; // Native::Policy::ClassMap::Match::GroupObject::Security


class Native::Policy::ClassMap::Match::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList dscp; //type: list of  one of uint8, enumeration
        ydk::YLeafList precedence; //type: list of  one of uint8, enumeration
        class Rtp; //type: Native::Policy::ClassMap::Match::Ip::Rtp

        ydk::YList rtp;
        
}; // Native::Policy::ClassMap::Match::Ip


class Native::Policy::ClassMap::Match::Ip::Rtp : public ydk::Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port1; //type: uint16
        ydk::YLeaf port2; //type: uint16

}; // Native::Policy::ClassMap::Match::Ip::Rtp


class Native::Policy::ClassMap::Match::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Experimental; //type: Native::Policy::ClassMap::Match::Mpls::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Mpls::Experimental> experimental;
        
}; // Native::Policy::ClassMap::Match::Mpls


class Native::Policy::ClassMap::Match::Mpls::Experimental : public ydk::Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList topmost; //type: list of  uint8

}; // Native::Policy::ClassMap::Match::Mpls::Experimental


class Native::Policy::ClassMap::Match::Packet : public ydk::Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Length; //type: Native::Policy::ClassMap::Match::Packet::Length

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Packet::Length> length;
        
}; // Native::Policy::ClassMap::Match::Packet


class Native::Policy::ClassMap::Match::Packet::Length : public ydk::Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16
        ydk::YLeaf min; //type: uint16

}; // Native::Policy::ClassMap::Match::Packet::Length


class Native::Policy::ClassMap::Match::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolsList; //type: Native::Policy::ClassMap::Match::Protocol::ProtocolsList
        class Attribute; //type: Native::Policy::ClassMap::Match::Protocol::Attribute

        ydk::YList protocols_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Attribute> attribute;
        
}; // Native::Policy::ClassMap::Match::Protocol


class Native::Policy::ClassMap::Match::Protocol::ProtocolsList : public ydk::Entity
{
    public:
        ProtocolsList();
        ~ProtocolsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocols; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::ProtocolsList


class Native::Policy::ClassMap::Match::Protocol::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationGroup; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet
        class BusinessRelevance; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance
        class Category; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::Category
        class Encrypted; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted
        class SubCategory; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory
        class TrafficClass; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass
        class Tunnel; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel

        ydk::YList application_group;
        ydk::YList application_set;
        ydk::YList business_relevance;
        ydk::YList category;
        ydk::YList encrypted;
        ydk::YList sub_category;
        ydk::YList traffic_class;
        ydk::YList tunnel;
        
}; // Native::Policy::ClassMap::Match::Protocol::Attribute


class Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup


class Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet


class Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance : public ydk::Entity
{
    public:
        BusinessRelevance();
        ~BusinessRelevance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance


class Native::Policy::ClassMap::Match::Protocol::Attribute::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::Category


class Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted : public ydk::Entity
{
    public:
        Encrypted();
        ~Encrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted


class Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory


class Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass


class Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel


class Native::Policy::ClassMap::Match::SecurityGroup : public ydk::Entity
{
    public:
        SecurityGroup();
        ~SecurityGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: Native::Policy::ClassMap::Match::SecurityGroup::Destination
        class Source; //type: Native::Policy::ClassMap::Match::SecurityGroup::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SecurityGroup::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SecurityGroup::Source> source;
        
}; // Native::Policy::ClassMap::Match::SecurityGroup


class Native::Policy::ClassMap::Match::SecurityGroup::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::SecurityGroup::Destination


class Native::Policy::ClassMap::Match::SecurityGroup::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::SecurityGroup::Source


class Native::Policy::ClassMap::Match::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf efp; //type: uint16
        ydk::YLeaf instance; //type: empty
        ydk::YLeaf ethernet; //type: empty

}; // Native::Policy::ClassMap::Match::Service


class Native::Policy::ClassMap::Match::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::SourceAddress


class Native::Policy::ClassMap::Match::Vlan : public ydk::Entity
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

        ydk::YLeafList inner; //type: list of  one of uint16, string
        ydk::YLeafList value_; //type: list of  one of uint16, string

}; // Native::Policy::ClassMap::Match::Vlan


class Native::Policy::ClassMap::Match::ActivatedServiceTemplate : public ydk::Entity
{
    public:
        ActivatedServiceTemplate();
        ~ActivatedServiceTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_name; //type: string

}; // Native::Policy::ClassMap::Match::ActivatedServiceTemplate


class Native::Policy::ClassMap::Match::AuthorizationStatus : public ydk::Entity
{
    public:
        AuthorizationStatus();
        ~AuthorizationStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authorized; //type: empty
        ydk::YLeaf unauthorized; //type: empty

}; // Native::Policy::ClassMap::Match::AuthorizationStatus


class Native::Policy::ClassMap::Match::AuthorizingMethodPriority : public ydk::Entity
{
    public:
        AuthorizingMethodPriority();
        ~AuthorizingMethodPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8

}; // Native::Policy::ClassMap::Match::AuthorizingMethodPriority


class Native::Policy::ClassMap::Match::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf mab; //type: empty
        ydk::YLeaf webauth; //type: empty

}; // Native::Policy::ClassMap::Match::Method


class Native::Policy::ClassMap::Match::ResultType : public ydk::Entity
{
    public:
        ResultType();
        ~ResultType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty
        class Method; //type: Native::Policy::ClassMap::Match::ResultType::Method

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method> method;
        
}; // Native::Policy::ClassMap::Match::ResultType


class Native::Policy::ClassMap::Match::ResultType::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1x; //type: Native::Policy::ClassMap::Match::ResultType::Method::Dot1x
        class Mab; //type: Native::Policy::ClassMap::Match::ResultType::Method::Mab
        class Webauth; //type: Native::Policy::ClassMap::Match::ResultType::Method::Webauth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Dot1x> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Mab> mab;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Webauth> webauth;
        
}; // Native::Policy::ClassMap::Match::ResultType::Method


class Native::Policy::ClassMap::Match::ResultType::Method::Dot1x : public ydk::Entity
{
    public:
        Dot1x();
        ~Dot1x();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::Match::ResultType::Method::Dot1x


class Native::Policy::ClassMap::Match::ResultType::Method::Mab : public ydk::Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::Match::ResultType::Method::Mab


class Native::Policy::ClassMap::Match::ResultType::Method::Webauth : public ydk::Entity
{
    public:
        Webauth();
        ~Webauth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::Match::ResultType::Method::Webauth


class Native::Policy::ClassMap::Match::Not : public ydk::Entity
{
    public:
        Not();
        ~Not();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf fr_de; //type: empty
        ydk::YLeaf non_client_nrt; //type: empty
        ydk::YLeaf peer; //type: string
        ydk::YLeafList class_map; //type: list of  string
        ydk::YLeafList cos; //type: list of  uint8
        ydk::YLeafList discard_class; //type: list of  uint8
        ydk::YLeafList dscp; //type: list of  one of uint8, enumeration
        ydk::YLeafList fr_dlci; //type: list of  uint16
        ydk::YLeafList input_interface; //type: list of  string
        ydk::YLeafList precedence; //type: list of  one of uint8, enumeration
        ydk::YLeafList qos_group; //type: list of  uint16
        class CurrentMethodPriority; //type: Native::Policy::ClassMap::Match::Not::CurrentMethodPriority
        class Application; //type: Native::Policy::ClassMap::Match::Not::Application
        class AccessGroup; //type: Native::Policy::ClassMap::Match::Not::AccessGroup
        class DestinationAddress; //type: Native::Policy::ClassMap::Match::Not::DestinationAddress
        class GroupObject; //type: Native::Policy::ClassMap::Match::Not::GroupObject
        class Ip; //type: Native::Policy::ClassMap::Match::Not::Ip
        class Mpls; //type: Native::Policy::ClassMap::Match::Not::Mpls
        class Packet; //type: Native::Policy::ClassMap::Match::Not::Packet
        class Protocol; //type: Native::Policy::ClassMap::Match::Not::Protocol
        class SecurityGroup; //type: Native::Policy::ClassMap::Match::Not::SecurityGroup
        class Service; //type: Native::Policy::ClassMap::Match::Not::Service
        class SourceAddress; //type: Native::Policy::ClassMap::Match::Not::SourceAddress
        class Vlan; //type: Native::Policy::ClassMap::Match::Not::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::CurrentMethodPriority> current_method_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::DestinationAddress> destination_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::GroupObject> group_object;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Packet> packet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SecurityGroup> security_group;
        ydk::YList service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Vlan> vlan;
        
}; // Native::Policy::ClassMap::Match::Not


class Native::Policy::ClassMap::Match::Not::CurrentMethodPriority : public ydk::Entity
{
    public:
        CurrentMethodPriority();
        ~CurrentMethodPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8

}; // Native::Policy::ClassMap::Match::Not::CurrentMethodPriority


class Native::Policy::ClassMap::Match::Not::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationGroup; //type: Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup
        class Attribute; //type: Native::Policy::ClassMap::Match::Not::Application::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup> application_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Application::Attribute> attribute;
        
}; // Native::Policy::ClassMap::Match::Not::Application


class Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf telepresence_group; //type: empty
        ydk::YLeaf vmware_group; //type: empty
        ydk::YLeaf webex_group; //type: empty

}; // Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup


class Native::Policy::ClassMap::Match::Not::Application::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf media_type; //type: MediaType
        class MediaType;

}; // Native::Policy::ClassMap::Match::Not::Application::Attribute


class Native::Policy::ClassMap::Match::Not::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeafList name; //type: list of  string

}; // Native::Policy::ClassMap::Match::Not::AccessGroup


class Native::Policy::ClassMap::Match::Not::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::Not::DestinationAddress


class Native::Policy::ClassMap::Match::Not::GroupObject : public ydk::Entity
{
    public:
        GroupObject();
        ~GroupObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Security; //type: Native::Policy::ClassMap::Match::Not::GroupObject::Security

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::GroupObject::Security> security;
        
}; // Native::Policy::ClassMap::Match::Not::GroupObject


class Native::Policy::ClassMap::Match::Not::GroupObject::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList source; //type: list of  string
        ydk::YLeafList destination; //type: list of  string

}; // Native::Policy::ClassMap::Match::Not::GroupObject::Security


class Native::Policy::ClassMap::Match::Not::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList dscp; //type: list of  one of uint8, enumeration
        ydk::YLeafList precedence; //type: list of  one of uint8, enumeration
        class Rtp; //type: Native::Policy::ClassMap::Match::Not::Ip::Rtp

        ydk::YList rtp;
        
}; // Native::Policy::ClassMap::Match::Not::Ip


class Native::Policy::ClassMap::Match::Not::Ip::Rtp : public ydk::Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port1; //type: uint16
        ydk::YLeaf port2; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::Ip::Rtp


class Native::Policy::ClassMap::Match::Not::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Experimental; //type: Native::Policy::ClassMap::Match::Not::Mpls::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Mpls::Experimental> experimental;
        
}; // Native::Policy::ClassMap::Match::Not::Mpls


class Native::Policy::ClassMap::Match::Not::Mpls::Experimental : public ydk::Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList topmost; //type: list of  uint8

}; // Native::Policy::ClassMap::Match::Not::Mpls::Experimental


class Native::Policy::ClassMap::Match::Not::Packet : public ydk::Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Length; //type: Native::Policy::ClassMap::Match::Not::Packet::Length

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Packet::Length> length;
        
}; // Native::Policy::ClassMap::Match::Not::Packet


class Native::Policy::ClassMap::Match::Not::Packet::Length : public ydk::Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16
        ydk::YLeaf min; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::Packet::Length


class Native::Policy::ClassMap::Match::Not::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolsList; //type: Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList
        class Attribute; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute

        ydk::YList protocols_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Attribute> attribute;
        
}; // Native::Policy::ClassMap::Match::Not::Protocol


class Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList : public ydk::Entity
{
    public:
        ProtocolsList();
        ~ProtocolsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocols; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationGroup; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet
        class BusinessRelevance; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance
        class Category; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category
        class Encrypted; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted
        class SubCategory; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory
        class TrafficClass; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass
        class Tunnel; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel

        ydk::YList application_group;
        ydk::YList application_set;
        ydk::YList business_relevance;
        ydk::YList category;
        ydk::YList encrypted;
        ydk::YList sub_category;
        ydk::YList traffic_class;
        ydk::YList tunnel;
        
}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance : public ydk::Entity
{
    public:
        BusinessRelevance();
        ~BusinessRelevance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted : public ydk::Entity
{
    public:
        Encrypted();
        ~Encrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel


class Native::Policy::ClassMap::Match::Not::SecurityGroup : public ydk::Entity
{
    public:
        SecurityGroup();
        ~SecurityGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination
        class Source; //type: Native::Policy::ClassMap::Match::Not::SecurityGroup::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SecurityGroup::Source> source;
        
}; // Native::Policy::ClassMap::Match::Not::SecurityGroup


class Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination


class Native::Policy::ClassMap::Match::Not::SecurityGroup::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::SecurityGroup::Source


class Native::Policy::ClassMap::Match::Not::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf efp; //type: uint16
        ydk::YLeaf instance; //type: empty
        ydk::YLeaf ethernet; //type: empty

}; // Native::Policy::ClassMap::Match::Not::Service


class Native::Policy::ClassMap::Match::Not::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::Not::SourceAddress


class Native::Policy::ClassMap::Match::Not::Vlan : public ydk::Entity
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

        ydk::YLeafList inner; //type: list of  one of uint16, string
        ydk::YLeafList value_; //type: list of  one of uint16, string

}; // Native::Policy::ClassMap::Match::Not::Vlan


class Native::Policy::ClassMap::NoMatch : public ydk::Entity
{
    public:
        NoMatch();
        ~NoMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_type; //type: ClientType
        ydk::YLeaf device_type; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf oui; //type: string
        ydk::YLeaf port_type; //type: PortType
        ydk::YLeaf service_template; //type: string
        ydk::YLeaf session_type; //type: SessionType
        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf ssid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf timer; //type: string
        ydk::YLeaf user_role; //type: string
        ydk::YLeaf username; //type: string
        class ActivatedServiceTemplate; //type: Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate
        class AuthorizationStatus; //type: Native::Policy::ClassMap::NoMatch::AuthorizationStatus
        class AuthorizingMethodPriority; //type: Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority
        class Method; //type: Native::Policy::ClassMap::NoMatch::Method
        class ResultType; //type: Native::Policy::ClassMap::NoMatch::ResultType

        ydk::YList activated_service_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::AuthorizationStatus> authorization_status;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority> authorizing_method_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::Method> method;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType> result_type;
                class ClientType;
        class PortType;
        class SessionType;

}; // Native::Policy::ClassMap::NoMatch


class Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate : public ydk::Entity
{
    public:
        ActivatedServiceTemplate();
        ~ActivatedServiceTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_name; //type: string

}; // Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate


class Native::Policy::ClassMap::NoMatch::AuthorizationStatus : public ydk::Entity
{
    public:
        AuthorizationStatus();
        ~AuthorizationStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authorized; //type: empty
        ydk::YLeaf unauthorized; //type: empty

}; // Native::Policy::ClassMap::NoMatch::AuthorizationStatus


class Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority : public ydk::Entity
{
    public:
        AuthorizingMethodPriority();
        ~AuthorizingMethodPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8

}; // Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority


class Native::Policy::ClassMap::NoMatch::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf mab; //type: empty
        ydk::YLeaf webauth; //type: empty

}; // Native::Policy::ClassMap::NoMatch::Method


class Native::Policy::ClassMap::NoMatch::ResultType : public ydk::Entity
{
    public:
        ResultType();
        ~ResultType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty
        class Method; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method> method;
        
}; // Native::Policy::ClassMap::NoMatch::ResultType


class Native::Policy::ClassMap::NoMatch::ResultType::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1x; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x
        class Mab; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab
        class Webauth; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab> mab;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth> webauth;
        
}; // Native::Policy::ClassMap::NoMatch::ResultType::Method


class Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x : public ydk::Entity
{
    public:
        Dot1x();
        ~Dot1x();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x


class Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab : public ydk::Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab


class Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth : public ydk::Entity
{
    public:
        Webauth();
        ~Webauth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth


class Native::Policy::PolicyMap : public ydk::Entity
{
    public:
        PolicyMap();
        ~PolicyMap();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf subscriber; //type: empty
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf description; //type: string
        ydk::YLeaf sequence_interval; //type: uint16
        class Event; //type: Native::Policy::PolicyMap::Event
        class Class; //type: Native::Policy::PolicyMap::Class

        ydk::YList event;
        ydk::YList class_;
                class Type;
        class Protocol;

}; // Native::Policy::PolicyMap


class Native::Policy::PolicyMap::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: EventType
        ydk::YLeaf match_type; //type: MatchType
        class ClassNumber; //type: Native::Policy::PolicyMap::Event::ClassNumber

        ydk::YList class_number;
                class EventType;
        class MatchType;

}; // Native::Policy::PolicyMap::Event


class Native::Policy::PolicyMap::Event::ClassNumber : public ydk::Entity
{
    public:
        ClassNumber();
        ~ClassNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf class_; //type: one of string, enumeration
        ydk::YLeaf execution_type; //type: ExecutionType
        class ActionNumber; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber

        ydk::YList action_number;
                class Class_;
        class ExecutionType;

}; // Native::Policy::PolicyMap::Event::ClassNumber


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber : public ydk::Entity
{
    public:
        ActionNumber();
        ~ActionNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf replace; //type: empty
        ydk::YLeaf clear_session; //type: empty
        ydk::YLeaf authentication_restart; //type: uint16
        ydk::YLeaf authorize; //type: empty
        class Terminate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate
        class Resume; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume
        class Pause; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause
        class Activate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate
        class Authenticate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate
        class Map; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate> terminate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume> resume;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause> pause;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate> activate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate> authenticate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map> map;
        
}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate : public ydk::Entity
{
    public:
        Terminate();
        ~Terminate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf mab; //type: empty
        ydk::YLeaf webauth; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume : public ydk::Entity
{
    public:
        Resume();
        ~Resume();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reauthentication; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause : public ydk::Entity
{
    public:
        Pause();
        ~Pause();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reauthentication; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate : public ydk::Entity
{
    public:
        Activate();
        ~Activate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_template; //type: string

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate : public ydk::Entity
{
    public:
        Authenticate();
        ~Authenticate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Using; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using> using_;
        
}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using : public ydk::Entity
{
    public:
        Using();
        ~Using();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method; //type: Method
        ydk::YLeaf both; //type: empty
        ydk::YLeaf retries; //type: uint8
        ydk::YLeaf retry_time; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf parameter_map; //type: string
        class Method;

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttributeToService; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService> attribute_to_service;
        
}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService : public ydk::Entity
{
    public:
        AttributeToService();
        ~AttributeToService();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table; //type: string

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService


class Native::Policy::PolicyMap::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of string, enumeration
        ydk::YLeaf type; //type: Type
        ydk::YLeaf insert_before; //type: string
        ydk::YLeaf random_detect; //type: empty
        class AppnavPolicy; //type: Native::Policy::PolicyMap::Class::AppnavPolicy
        class Policy_; //type: Native::Policy::PolicyMap::Class::Policy_
        class PmPolicy; //type: Native::Policy::PolicyMap::Class::PmPolicy
        class InspectPolice; //type: Native::Policy::PolicyMap::Class::InspectPolice
        class ActionList; //type: Native::Policy::PolicyMap::Class::ActionList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::AppnavPolicy> appnav_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::Policy_> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy> pm_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::InspectPolice> inspect_police;
        ydk::YList action_list;
                class Type;

}; // Native::Policy::PolicyMap::Class


class Native::Policy::PolicyMap::Class::AppnavPolicy : public ydk::Entity
{
    public:
        AppnavPolicy();
        ~AppnavPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor_load; //type: MonitorLoad
        ydk::YLeaf pass_through; //type: empty
        class Distribute; //type: Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute

        ydk::YList distribute;
                class MonitorLoad;

}; // Native::Policy::PolicyMap::Class::AppnavPolicy


class Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute : public ydk::Entity
{
    public:
        Distribute();
        ~Distribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_node_group; //type: string
        ydk::YLeaf insert_before; //type: string

}; // Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute


class Native::Policy::PolicyMap::Class::Policy_ : public ydk::Entity
{
    public:
        Policy_();
        ~Policy_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf log; //type: empty
        ydk::YLeaf parameter_map; //type: one of string, enumeration
        class Dpi; //type: Native::Policy::PolicyMap::Class::Policy_::Dpi

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::Policy_::Dpi> dpi;
                class Action;
        class ParameterMap;

}; // Native::Policy::PolicyMap::Class::Policy_


class Native::Policy::PolicyMap::Class::Policy_::Dpi : public ydk::Entity
{
    public:
        Dpi();
        ~Dpi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        ydk::YLeaf policy_map; //type: string
        class Type;

}; // Native::Policy::PolicyMap::Class::Policy_::Dpi


class Native::Policy::PolicyMap::Class::PmPolicy : public ydk::Entity
{
    public:
        PmPolicy();
        ~PmPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: Native::Policy::PolicyMap::Class::PmPolicy::Flow
        class Monitor; //type: Native::Policy::PolicyMap::Class::PmPolicy::Monitor
        class React; //type: Native::Policy::PolicyMap::Class::PmPolicy::React

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::Monitor> monitor;
        ydk::YList react;
        
}; // Native::Policy::PolicyMap::Class::PmPolicy


class Native::Policy::PolicyMap::Class::PmPolicy::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor; //type: string

}; // Native::Policy::PolicyMap::Class::PmPolicy::Flow


class Native::Policy::PolicyMap::Class::PmPolicy::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Metric; //type: Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric> metric;
        
}; // Native::Policy::PolicyMap::Class::PmPolicy::Monitor


class Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rtp; //type: Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp> rtp;
        
}; // Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric


class Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp : public ydk::Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClockRate; //type: Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate

        ydk::YList clock_rate;
        
}; // Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp


class Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate : public ydk::Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: one of uint8, enumeration
        ydk::YLeaf frequency; //type: uint32
        class Number;

}; // Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate


class Native::Policy::PolicyMap::Class::PmPolicy::React : public ydk::Entity
{
    public:
        React();
        ~React();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf description; //type: string
        class Action; //type: Native::Policy::PolicyMap::Class::PmPolicy::React::Action
        class Alarm; //type: Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm
        class Threshold; //type: Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::React::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm> alarm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold> threshold;
                class Mode;

}; // Native::Policy::PolicyMap::Class::PmPolicy::React


class Native::Policy::PolicyMap::Class::PmPolicy::React::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmp; //type: empty
        ydk::YLeaf syslog; //type: empty

}; // Native::Policy::PolicyMap::Class::PmPolicy::React::Action


class Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: Severity
        class Type; //type: Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type> type;
                class Severity;

}; // Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm


class Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf discrete; //type: empty
        class Grouped; //type: Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped> grouped;
        
}; // Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type


class Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped : public ydk::Entity
{
    public:
        Grouped();
        ~Grouped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf percent; //type: uint8

}; // Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped


class Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Value; //type: Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value> value_;
        
}; // Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold


class Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value : public ydk::Entity
{
    public:
        Value();
        ~Value();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ge; //type: string
        ydk::YLeaf gt; //type: string
        ydk::YLeaf le; //type: string
        ydk::YLeaf lt; //type: string
        class Range; //type: Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range> range;
        
}; // Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value


class Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf low; //type: string
        ydk::YLeaf high; //type: string

}; // Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range


class Native::Policy::PolicyMap::Class::InspectPolice : public ydk::Entity
{
    public:
        InspectPolice();
        ~InspectPolice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Police; //type: Native::Policy::PolicyMap::Class::InspectPolice::Police

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::InspectPolice::Police> police;
        
}; // Native::Policy::PolicyMap::Class::InspectPolice


class Native::Policy::PolicyMap::Class::InspectPolice::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf burst; //type: uint32

}; // Native::Policy::PolicyMap::Class::InspectPolice::Police


class Native::Policy::PolicyMap::Class::ActionList : public ydk::Entity
{
    public:
        ActionList();
        ~ActionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: PolicyActionType
        ydk::YLeaf netflow_sampler; //type: string
        ydk::YLeaf service_policy; //type: string
        ydk::YLeaf trust; //type: Trust
        class Bandwidth; //type: Native::Policy::PolicyMap::Class::ActionList::Bandwidth
        class Compression; //type: Native::Policy::PolicyMap::Class::ActionList::Compression
        class Estimate; //type: Native::Policy::PolicyMap::Class::ActionList::Estimate
        class Forward; //type: Native::Policy::PolicyMap::Class::ActionList::Forward
        class FairQueue; //type: Native::Policy::PolicyMap::Class::ActionList::FairQueue
        class PoliceAggregate; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate
        class PolicePolicyMap; //type: Native::Policy::PolicyMap::Class::ActionList::PolicePolicyMap
        class PoliceCirPercent; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCirPercent
        class PoliceRateUnit; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRateUnit
        class PoliceRatePercent; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent
        class PoliceRatePdp; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp
        class PoliceTargetBitrate; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate
        class PoliceFlow; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceFlow
        class PoliceCatalyst; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst
        class PoliceSwitch; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceSwitch
        class Priority; //type: Native::Policy::PolicyMap::Class::ActionList::Priority
        class QueueBuffers; //type: Native::Policy::PolicyMap::Class::ActionList::QueueBuffers
        class QueueLimit; //type: Native::Policy::PolicyMap::Class::ActionList::QueueLimit
        class QueueLimitDscp; //type: Native::Policy::PolicyMap::Class::ActionList::QueueLimitDscp
        class RandomDetect; //type: Native::Policy::PolicyMap::Class::ActionList::RandomDetect
        class Set; //type: Native::Policy::PolicyMap::Class::ActionList::Set
        class Shape; //type: Native::Policy::PolicyMap::Class::ActionList::Shape

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Compression> compression;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Estimate> estimate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Forward> forward;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::FairQueue> fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate> police_aggregate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PolicePolicyMap> police_policy_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCirPercent> police_cir_percent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRateUnit> police_rate_unit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent> police_rate_percent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp> police_rate_pdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate> police_target_bitrate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceFlow> police_flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst> police_catalyst;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceSwitch> police_switch;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::QueueBuffers> queue_buffers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::QueueLimit> queue_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::QueueLimitDscp> queue_limit_dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::RandomDetect> random_detect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Set> set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Shape> shape;
                class Trust;

}; // Native::Policy::PolicyMap::Class::ActionList


class Native::Policy::PolicyMap::Class::ActionList::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bits; //type: uint32
        ydk::YLeaf percent; //type: uint8
        class Remaining; //type: Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining> remaining;
        
}; // Native::Policy::PolicyMap::Class::ActionList::Bandwidth


class Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining : public ydk::Entity
{
    public:
        Remaining();
        ~Remaining();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rem_option; //type: RemOption
        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf ratio; //type: uint16
        class Account; //type: Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account> account;
                class RemOption;

}; // Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining


class Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account : public ydk::Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user_defined; //type: int32

}; // Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account


class Native::Policy::PolicyMap::Class::ActionList::Compression : public ydk::Entity
{
    public:
        Compression();
        ~Compression();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: Native::Policy::PolicyMap::Class::ActionList::Compression::Header

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Compression::Header> header; // presence node
        
}; // Native::Policy::PolicyMap::Class::ActionList::Compression


class Native::Policy::PolicyMap::Class::ActionList::Compression::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: Ip
        class Ip;

}; // Native::Policy::PolicyMap::Class::ActionList::Compression::Header


class Native::Policy::PolicyMap::Class::ActionList::Estimate : public ydk::Entity
{
    public:
        Estimate();
        ~Estimate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bandwidth; //type: Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth> bandwidth; // presence node
        
}; // Native::Policy::PolicyMap::Class::ActionList::Estimate


class Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_one_in; //type: uint32
        class DelayOneIn; //type: Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn> delay_one_in;
        
}; // Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth


class Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn : public ydk::Entity
{
    public:
        DelayOneIn();
        ~DelayOneIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf doi; //type: uint32
        ydk::YLeaf milliseconds; //type: uint32

}; // Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn


class Native::Policy::PolicyMap::Class::ActionList::Forward : public ydk::Entity
{
    public:
        Forward();
        ~Forward();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_path; //type: uint32
        ydk::YLeaf service_index; //type: uint8

}; // Native::Policy::PolicyMap::Class::ActionList::Forward


class Native::Policy::PolicyMap::Class::ActionList::FairQueue : public ydk::Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic_queues; //type: uint32
        ydk::YLeaf queue_limit; //type: uint16

}; // Native::Policy::PolicyMap::Class::ActionList::FairQueue


class Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate : public ydk::Entity
{
    public:
        PoliceAggregate();
        ~PoliceAggregate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Police; //type: Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::Police

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::Police> police;
        
}; // Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate

class Native::Policy::ClassMap::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf access_control;
        static const ydk::Enum::YLeaf appnav;
        static const ydk::Enum::YLeaf control;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf multicast_flows;
        static const ydk::Enum::YLeaf stack;
        static const ydk::Enum::YLeaf traffic;

};

class Native::Policy::ClassMap::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aol;
        static const ydk::Enum::YLeaf edonkey;
        static const ydk::Enum::YLeaf fasttrack;
        static const ydk::Enum::YLeaf gnutella;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf imap;
        static const ydk::Enum::YLeaf kazaa2;
        static const ydk::Enum::YLeaf msnmsgr;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;
        static const ydk::Enum::YLeaf ymsgr;

};

class Native::Policy::ClassMap::Prematch : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_any;
        static const ydk::Enum::YLeaf match_none;

};

class Native::Policy::ClassMap::Match::ClientType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf switch_;
        static const ydk::Enum::YLeaf video;
        static const ydk::Enum::YLeaf voice;

};

class Native::Policy::ClassMap::Match::PortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot11_port;
        static const ydk::Enum::YLeaf l2_port;
        static const ydk::Enum::YLeaf l3_port;

};

class Native::Policy::ClassMap::Match::SessionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wired;
        static const ydk::Enum::YLeaf wireless;

};

class Native::Policy::ClassMap::Match::Application::Attribute::MediaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf audio;
        static const ydk::Enum::YLeaf audio_video;
        static const ydk::Enum::YLeaf control;
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf video;

};

class Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf audio;
        static const ydk::Enum::YLeaf audio_video;
        static const ydk::Enum::YLeaf control;
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf video;

};

class Native::Policy::ClassMap::NoMatch::ClientType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf switch_;
        static const ydk::Enum::YLeaf video;
        static const ydk::Enum::YLeaf voice;

};

class Native::Policy::ClassMap::NoMatch::PortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot11_port;
        static const ydk::Enum::YLeaf l2_port;
        static const ydk::Enum::YLeaf l3_port;

};

class Native::Policy::ClassMap::NoMatch::SessionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wired;
        static const ydk::Enum::YLeaf wireless;

};

class Native::Policy::PolicyMap::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf access_control;
        static const ydk::Enum::YLeaf appnav;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf control;
        static const ydk::Enum::YLeaf packet_service;
        static const ydk::Enum::YLeaf performance_monitor;
        static const ydk::Enum::YLeaf service;
        static const ydk::Enum::YLeaf service_chain;

};

class Native::Policy::PolicyMap::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf im;
        static const ydk::Enum::YLeaf imap;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;

};

class Native::Policy::PolicyMap::Event::EventType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aaa_available;
        static const ydk::Enum::YLeaf absolute_timeout;
        static const ydk::Enum::YLeaf agent_found;
        static const ydk::Enum::YLeaf authentication_failure;
        static const ydk::Enum::YLeaf authentication_success;
        static const ydk::Enum::YLeaf authorization_failure;
        static const ydk::Enum::YLeaf authorization_success;
        static const ydk::Enum::YLeaf identity_update;
        static const ydk::Enum::YLeaf inactivity_timeout;
        static const ydk::Enum::YLeaf remote_authentication_failure;
        static const ydk::Enum::YLeaf remote_authentication_success;
        static const ydk::Enum::YLeaf session_disconnected;
        static const ydk::Enum::YLeaf session_started;
        static const ydk::Enum::YLeaf tag_added;
        static const ydk::Enum::YLeaf tag_removed;
        static const ydk::Enum::YLeaf template_activated;
        static const ydk::Enum::YLeaf template_activation_failed;
        static const ydk::Enum::YLeaf template_deactivated;
        static const ydk::Enum::YLeaf template_deactivation_failed;
        static const ydk::Enum::YLeaf timer_expiry;
        static const ydk::Enum::YLeaf violation;

};

class Native::Policy::PolicyMap::Event::MatchType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_first;

};

class Native::Policy::PolicyMap::Event::ClassNumber::Class_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;

};

class Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf do_all;
        static const ydk::Enum::YLeaf do_until_failure;
        static const ydk::Enum::YLeaf do_until_success;

};

class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Method : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1x;
        static const ydk::Enum::YLeaf mab;
        static const ydk::Enum::YLeaf webauth;

};

class Native::Policy::PolicyMap::Class::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inspect;

};

class Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf MS_port_mapper;
        static const ydk::Enum::YLeaf cifs;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf ica;
        static const ydk::Enum::YLeaf mapi;
        static const ydk::Enum::YLeaf nfs;
        static const ydk::Enum::YLeaf ssl;
        static const ydk::Enum::YLeaf video;

};

class Native::Policy::PolicyMap::Class::Policy_::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cxsc;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf pass;
        static const ydk::Enum::YLeaf service_policy;

};

class Native::Policy::PolicyMap::Class::Policy_::ParameterMap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;
        static const ydk::Enum::YLeaf gtp;

};

class Native::Policy::PolicyMap::Class::Policy_::Dpi::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gtpv0;
        static const ydk::Enum::YLeaf gtpv1;
        static const ydk::Enum::YLeaf imap;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;

};

class Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf celb;
        static const ydk::Enum::YLeaf cn;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf dvi4;
        static const ydk::Enum::YLeaf dvi4_2;
        static const ydk::Enum::YLeaf dvi4_3;
        static const ydk::Enum::YLeaf dvi4_4;
        static const ydk::Enum::YLeaf g722;
        static const ydk::Enum::YLeaf g723;
        static const ydk::Enum::YLeaf g728;
        static const ydk::Enum::YLeaf g729;
        static const ydk::Enum::YLeaf gsm;
        static const ydk::Enum::YLeaf h261;
        static const ydk::Enum::YLeaf h263;
        static const ydk::Enum::YLeaf jpeg;
        static const ydk::Enum::YLeaf l16;
        static const ydk::Enum::YLeaf l16_2;
        static const ydk::Enum::YLeaf lpc;
        static const ydk::Enum::YLeaf mp2t;
        static const ydk::Enum::YLeaf mpa;
        static const ydk::Enum::YLeaf mpv;
        static const ydk::Enum::YLeaf nv;
        static const ydk::Enum::YLeaf pcma;
        static const ydk::Enum::YLeaf pcmu;
        static const ydk::Enum::YLeaf qcelp;

};

class Native::Policy::PolicyMap::Class::PmPolicy::React::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf media_stop;
        static const ydk::Enum::YLeaf mrv;
        static const ydk::Enum::YLeaf rtp_jitter_average;
        static const ydk::Enum::YLeaf transport_packets_lost_rate;

};

class Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;

};

class Native::Policy::PolicyMap::Class::ActionList::Trust : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf ip_precedence;

};

class Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::RemOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf percent;
        static const ydk::Enum::YLeaf ratio;

};

class Native::Policy::PolicyMap::Class::ActionList::Compression::Header::Ip : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rtp;
        static const ydk::Enum::YLeaf tcp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_13_ */

