#ifndef _CISCO_IOS_XE_NATIVE_12_
#define _CISCO_IOS_XE_NATIVE_12_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_11.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


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

        class BusinessRelevance; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance
        class TrafficClass; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance> business_relevance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass> traffic_class;
        
}; // Native::Policy::ClassMap::Match::Protocol::Attribute


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

        ydk::YLeaf business_irrelevant; //type: empty
        ydk::YLeaf business_relevant; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance


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

        ydk::YLeaf broadcast_video; //type: empty
        ydk::YLeaf bulk_data; //type: empty
        ydk::YLeaf multimedia_conferencing; //type: empty
        ydk::YLeaf multimedia_streaming; //type: empty
        ydk::YLeaf network_control; //type: empty
        ydk::YLeaf ops_admin_mgmt; //type: empty
        ydk::YLeaf real_time_interactive; //type: empty
        ydk::YLeaf signaling; //type: empty
        ydk::YLeaf transactional_data; //type: empty
        ydk::YLeaf voip_telephony; //type: empty

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass


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

        class Dot1X; //type: Native::Policy::ClassMap::Match::ResultType::Method::Dot1X
        class Mab; //type: Native::Policy::ClassMap::Match::ResultType::Method::Mab
        class Webauth; //type: Native::Policy::ClassMap::Match::ResultType::Method::Webauth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Dot1X> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Mab> mab;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Webauth> webauth;
        
}; // Native::Policy::ClassMap::Match::ResultType::Method


class Native::Policy::ClassMap::Match::ResultType::Method::Dot1X : public ydk::Entity
{
    public:
        Dot1X();
        ~Dot1X();

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

}; // Native::Policy::ClassMap::Match::ResultType::Method::Dot1X


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


class Native::Policy::ClassMap::Match::Not_ : public ydk::Entity
{
    public:
        Not_();
        ~Not_();

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
        class CurrentMethodPriority; //type: Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority
        class Application; //type: Native::Policy::ClassMap::Match::Not_::Application
        class AccessGroup; //type: Native::Policy::ClassMap::Match::Not_::AccessGroup
        class DestinationAddress; //type: Native::Policy::ClassMap::Match::Not_::DestinationAddress
        class GroupObject; //type: Native::Policy::ClassMap::Match::Not_::GroupObject
        class Ip; //type: Native::Policy::ClassMap::Match::Not_::Ip
        class Mpls; //type: Native::Policy::ClassMap::Match::Not_::Mpls
        class Packet; //type: Native::Policy::ClassMap::Match::Not_::Packet
        class Protocol; //type: Native::Policy::ClassMap::Match::Not_::Protocol
        class SecurityGroup; //type: Native::Policy::ClassMap::Match::Not_::SecurityGroup
        class SourceAddress; //type: Native::Policy::ClassMap::Match::Not_::SourceAddress
        class Vlan; //type: Native::Policy::ClassMap::Match::Not_::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority> current_method_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::DestinationAddress> destination_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::GroupObject> group_object;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Packet> packet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::SecurityGroup> security_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Vlan> vlan;
        
}; // Native::Policy::ClassMap::Match::Not_


class Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority


class Native::Policy::ClassMap::Match::Not_::Application : public ydk::Entity
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

        class ApplicationGroup; //type: Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup
        class Attribute; //type: Native::Policy::ClassMap::Match::Not_::Application::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup> application_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Application::Attribute> attribute;
        
}; // Native::Policy::ClassMap::Match::Not_::Application


class Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup


class Native::Policy::ClassMap::Match::Not_::Application::Attribute : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::Application::Attribute


class Native::Policy::ClassMap::Match::Not_::AccessGroup : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::AccessGroup


class Native::Policy::ClassMap::Match::Not_::DestinationAddress : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::DestinationAddress


class Native::Policy::ClassMap::Match::Not_::GroupObject : public ydk::Entity
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

        class Security; //type: Native::Policy::ClassMap::Match::Not_::GroupObject::Security

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::GroupObject::Security> security;
        
}; // Native::Policy::ClassMap::Match::Not_::GroupObject


class Native::Policy::ClassMap::Match::Not_::GroupObject::Security : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::GroupObject::Security


class Native::Policy::ClassMap::Match::Not_::Ip : public ydk::Entity
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
        class Rtp; //type: Native::Policy::ClassMap::Match::Not_::Ip::Rtp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Ip::Rtp> > rtp;
        
}; // Native::Policy::ClassMap::Match::Not_::Ip


class Native::Policy::ClassMap::Match::Not_::Ip::Rtp : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::Ip::Rtp


class Native::Policy::ClassMap::Match::Not_::Mpls : public ydk::Entity
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

        class Experimental; //type: Native::Policy::ClassMap::Match::Not_::Mpls::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Mpls::Experimental> experimental;
        
}; // Native::Policy::ClassMap::Match::Not_::Mpls


class Native::Policy::ClassMap::Match::Not_::Mpls::Experimental : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::Mpls::Experimental


class Native::Policy::ClassMap::Match::Not_::Packet : public ydk::Entity
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

        class Length; //type: Native::Policy::ClassMap::Match::Not_::Packet::Length

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Packet::Length> length;
        
}; // Native::Policy::ClassMap::Match::Not_::Packet


class Native::Policy::ClassMap::Match::Not_::Packet::Length : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::Packet::Length


class Native::Policy::ClassMap::Match::Not_::Protocol : public ydk::Entity
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

        ydk::YLeaf protocols; //type: Protocols
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf clns_es; //type: empty
        ydk::YLeaf clns_is; //type: empty
        ydk::YLeaf cmns; //type: empty
        ydk::YLeaf compressedtcp; //type: empty
        ydk::YLeaf cuseeme; //type: empty
        ydk::YLeaf decnet; //type: empty
        ydk::YLeaf decnet_node; //type: empty
        ydk::YLeaf decnet_router_l1; //type: empty
        ydk::YLeaf decnet_router_l2; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf dlsw; //type: empty
        ydk::YLeaf dns; //type: empty
        ydk::YLeaf edonkey; //type: empty
        ydk::YLeaf egp; //type: empty
        ydk::YLeaf eigrp; //type: empty
        ydk::YLeaf exchange; //type: empty
        ydk::YLeaf finger; //type: empty
        ydk::YLeaf ftp; //type: empty
        ydk::YLeaf gopher; //type: empty
        ydk::YLeaf gre; //type: empty
        ydk::YLeaf h323; //type: empty
        ydk::YLeaf icmp; //type: empty
        ydk::YLeaf imap; //type: empty
        ydk::YLeaf ip; //type: empty
        ydk::YLeaf ipinip; //type: empty
        ydk::YLeaf ipsec; //type: empty
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf ipx; //type: empty
        ydk::YLeaf irc; //type: empty
        ydk::YLeaf kerberos; //type: empty
        ydk::YLeaf l2tp; //type: empty
        ydk::YLeaf ldap; //type: empty
        ydk::YLeaf llc2; //type: empty
        ydk::YLeaf mgcp; //type: empty
        ydk::YLeaf netbios; //type: empty
        ydk::YLeaf netshow; //type: empty
        ydk::YLeaf nfs; //type: empty
        ydk::YLeaf nntp; //type: empty
        ydk::YLeaf notes; //type: empty
        ydk::YLeaf novadigm; //type: empty
        ydk::YLeaf ntp; //type: empty
        ydk::YLeaf ospf; //type: empty
        ydk::YLeaf pad; //type: empty
        ydk::YLeaf pcanywhere; //type: empty
        ydk::YLeaf pop3; //type: empty
        ydk::YLeaf pppoe; //type: empty
        ydk::YLeaf pptp; //type: empty
        ydk::YLeaf printer; //type: empty
        ydk::YLeaf qllc; //type: empty
        ydk::YLeaf rcmd; //type: empty
        ydk::YLeaf rip; //type: empty
        ydk::YLeaf rsrb; //type: empty
        ydk::YLeaf rsvp; //type: empty
        ydk::YLeaf rtcp; //type: empty
        ydk::YLeaf rtsp; //type: empty
        ydk::YLeaf secure_ftp; //type: empty
        ydk::YLeaf secure_http; //type: empty
        ydk::YLeaf secure_imap; //type: empty
        ydk::YLeaf secure_irc; //type: empty
        ydk::YLeaf secure_ldap; //type: empty
        ydk::YLeaf secure_nntp; //type: empty
        ydk::YLeaf secure_pop3; //type: empty
        ydk::YLeaf secure_telnet; //type: empty
        ydk::YLeaf sip; //type: empty
        ydk::YLeaf skinny; //type: empty
        ydk::YLeaf snapshot; //type: empty
        ydk::YLeaf snmp; //type: empty
        ydk::YLeaf socks; //type: empty
        ydk::YLeaf sqlnet; //type: empty
        ydk::YLeaf sqlserver; //type: empty
        ydk::YLeaf ssh; //type: empty
        ydk::YLeaf streamwork; //type: empty
        ydk::YLeaf stun; //type: empty
        ydk::YLeaf sunrpc; //type: empty
        ydk::YLeaf syslog; //type: empty
        ydk::YLeaf telnet; //type: empty
        ydk::YLeaf tftp; //type: empty
        ydk::YLeaf vdolive; //type: empty
        ydk::YLeaf vofr; //type: empty
        ydk::YLeaf winmx; //type: empty
        ydk::YLeaf xwindows; //type: empty
        class Citrix; //type: Native::Policy::ClassMap::Match::Not_::Protocol::Citrix
        class Fasttrack; //type: Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack
        class Gnutella; //type: Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella
        class Http; //type: Native::Policy::ClassMap::Match::Not_::Protocol::Http
        class Kazaa2; //type: Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2
        class Napster; //type: Native::Policy::ClassMap::Match::Not_::Protocol::Napster
        class Rtp; //type: Native::Policy::ClassMap::Match::Not_::Protocol::Rtp
        class Smtp; //type: Native::Policy::ClassMap::Match::Not_::Protocol::Smtp
        class Attribute; //type: Native::Policy::ClassMap::Match::Not_::Protocol::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol::Citrix> citrix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack> fasttrack; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella> gnutella; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol::Http> http; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2> kazaa2; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol::Napster> napster; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol::Rtp> rtp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol::Smtp> smtp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol::Attribute> attribute;
                class Protocols;

}; // Native::Policy::ClassMap::Match::Not_::Protocol


class Native::Policy::ClassMap::Match::Not_::Protocol::Citrix : public ydk::Entity
{
    public:
        Citrix();
        ~Citrix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ica_tag; //type: string

}; // Native::Policy::ClassMap::Match::Not_::Protocol::Citrix


class Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack : public ydk::Entity
{
    public:
        Fasttrack();
        ~Fasttrack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack


class Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella : public ydk::Entity
{
    public:
        Gnutella();
        ~Gnutella();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella


class Native::Policy::ClassMap::Match::Not_::Protocol::Http : public ydk::Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf c_header_field; //type: string
        ydk::YLeaf host; //type: string
        ydk::YLeaf mime; //type: string
        ydk::YLeaf s_header_field; //type: string
        ydk::YLeaf url; //type: string

}; // Native::Policy::ClassMap::Match::Not_::Protocol::Http


class Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2 : public ydk::Entity
{
    public:
        Kazaa2();
        ~Kazaa2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2


class Native::Policy::ClassMap::Match::Not_::Protocol::Napster : public ydk::Entity
{
    public:
        Napster();
        ~Napster();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_std; //type: empty

}; // Native::Policy::ClassMap::Match::Not_::Protocol::Napster


class Native::Policy::ClassMap::Match::Not_::Protocol::Rtp : public ydk::Entity
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

        ydk::YLeaf audio; //type: empty
        ydk::YLeaf payload_type; //type: string
        ydk::YLeaf video; //type: empty

}; // Native::Policy::ClassMap::Match::Not_::Protocol::Rtp


class Native::Policy::ClassMap::Match::Not_::Protocol::Smtp : public ydk::Entity
{
    public:
        Smtp();
        ~Smtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended; //type: empty

}; // Native::Policy::ClassMap::Match::Not_::Protocol::Smtp


class Native::Policy::ClassMap::Match::Not_::Protocol::Attribute : public ydk::Entity
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

        class BusinessRelevance; //type: Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance
        class TrafficClass; //type: Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance> business_relevance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass> traffic_class;
        
}; // Native::Policy::ClassMap::Match::Not_::Protocol::Attribute


class Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance : public ydk::Entity
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

        ydk::YLeaf business_irrelevant; //type: empty
        ydk::YLeaf business_relevant; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance


class Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass : public ydk::Entity
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

        ydk::YLeaf broadcast_video; //type: empty
        ydk::YLeaf bulk_data; //type: empty
        ydk::YLeaf multimedia_conferencing; //type: empty
        ydk::YLeaf multimedia_streaming; //type: empty
        ydk::YLeaf network_control; //type: empty
        ydk::YLeaf ops_admin_mgmt; //type: empty
        ydk::YLeaf real_time_interactive; //type: empty
        ydk::YLeaf signaling; //type: empty
        ydk::YLeaf transactional_data; //type: empty
        ydk::YLeaf voip_telephony; //type: empty

}; // Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass


class Native::Policy::ClassMap::Match::Not_::SecurityGroup : public ydk::Entity
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

        class Destination; //type: Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination
        class Source; //type: Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source> source;
        
}; // Native::Policy::ClassMap::Match::Not_::SecurityGroup


class Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination


class Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source


class Native::Policy::ClassMap::Match::Not_::SourceAddress : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::SourceAddress


class Native::Policy::ClassMap::Match::Not_::Vlan : public ydk::Entity
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

}; // Native::Policy::ClassMap::Match::Not_::Vlan


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

        class ActivatedServiceTemplate; //type: Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate
        class AuthorizationStatus; //type: Native::Policy::ClassMap::NoMatch::AuthorizationStatus
        class AuthorizingMethodPriority; //type: Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority
        class Method; //type: Native::Policy::ClassMap::NoMatch::Method
        class ResultType; //type: Native::Policy::ClassMap::NoMatch::ResultType

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate> > activated_service_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::AuthorizationStatus> authorization_status;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority> authorizing_method_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::Method> method;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType> result_type;
        
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

        class Dot1X; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X
        class Mab; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab
        class Webauth; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab> mab;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth> webauth;
        
}; // Native::Policy::ClassMap::NoMatch::ResultType::Method


class Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X : public ydk::Entity
{
    public:
        Dot1X();
        ~Dot1X();

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

}; // Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X


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
        class Class_; //type: Native::Policy::PolicyMap::Class_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event> > event;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_> > class_;
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber> > class_number;
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber> > action_number;
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
        ydk::YLeaf clear_session; //type: empty
        ydk::YLeaf authentication_restart; //type: uint16
        ydk::YLeaf authorize; //type: empty
        class Terminate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate
        class Resume; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume
        class Pause; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause
        class Activate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate
        class Authenticate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate> terminate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume> resume;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause> pause;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate> activate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate> authenticate;
        
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

        class Using_; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_> using_;
        
}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_ : public ydk::Entity
{
    public:
        Using_();
        ~Using_();

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
        class Method;

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_


class Native::Policy::PolicyMap::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

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
        class AppnavPolicy; //type: Native::Policy::PolicyMap::Class_::AppnavPolicy
        class Policy_; //type: Native::Policy::PolicyMap::Class_::Policy_
        class PmPolicy; //type: Native::Policy::PolicyMap::Class_::PmPolicy
        class InspectPolice; //type: Native::Policy::PolicyMap::Class_::InspectPolice
        class ActionList; //type: Native::Policy::PolicyMap::Class_::ActionList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::AppnavPolicy> appnav_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::Policy_> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy> pm_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::InspectPolice> inspect_police;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList> > action_list;
                class Type;

}; // Native::Policy::PolicyMap::Class_


class Native::Policy::PolicyMap::Class_::AppnavPolicy : public ydk::Entity
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
        class Distribute; //type: Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute> > distribute;
                class MonitorLoad;

}; // Native::Policy::PolicyMap::Class_::AppnavPolicy


class Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute


class Native::Policy::PolicyMap::Class_::Policy_ : public ydk::Entity
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
        class Dpi; //type: Native::Policy::PolicyMap::Class_::Policy_::Dpi

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::Policy_::Dpi> dpi;
                class Action;
        class ParameterMap;

}; // Native::Policy::PolicyMap::Class_::Policy_


class Native::Policy::PolicyMap::Class_::Policy_::Dpi : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::Policy_::Dpi


class Native::Policy::PolicyMap::Class_::PmPolicy : public ydk::Entity
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

        class Flow; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Flow
        class Monitor; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor
        class React; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor> monitor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React> > react;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy


class Native::Policy::PolicyMap::Class_::PmPolicy::Flow : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::PmPolicy::Flow


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor : public ydk::Entity
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

        class Metric; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric> metric;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric : public ydk::Entity
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

        class Rtp; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp> rtp;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp : public ydk::Entity
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

        class ClockRate; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate> > clock_rate;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate


class Native::Policy::PolicyMap::Class_::PmPolicy::React : public ydk::Entity
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
        class Action; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Action
        class Alarm; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm
        class Threshold; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm> alarm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold> threshold;
                class Mode;

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Action : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Action


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm : public ydk::Entity
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
        class Type; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type> type;
                class Severity;

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type : public ydk::Entity
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
        class Grouped; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped> grouped;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold : public ydk::Entity
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

        class Value_; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_> value_;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

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
        class Range; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range> range;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range


class Native::Policy::PolicyMap::Class_::InspectPolice : public ydk::Entity
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

        class Police; //type: Native::Policy::PolicyMap::Class_::InspectPolice::Police

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::InspectPolice::Police> police;
        
}; // Native::Policy::PolicyMap::Class_::InspectPolice


class Native::Policy::PolicyMap::Class_::InspectPolice::Police : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::InspectPolice::Police


class Native::Policy::PolicyMap::Class_::ActionList : public ydk::Entity
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
        class Bandwidth; //type: Native::Policy::PolicyMap::Class_::ActionList::Bandwidth
        class Compression; //type: Native::Policy::PolicyMap::Class_::ActionList::Compression
        class Estimate; //type: Native::Policy::PolicyMap::Class_::ActionList::Estimate
        class Forward; //type: Native::Policy::PolicyMap::Class_::ActionList::Forward
        class FairQueue; //type: Native::Policy::PolicyMap::Class_::ActionList::FairQueue
        class PoliceAggregate; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate
        class PolicePolicyMap; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap
        class PoliceCirPercent; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCirPercent
        class PoliceRateUnit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit
        class PoliceRatePercent; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent
        class PoliceRatePdp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp
        class PoliceTargetBitrate; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate
        class PoliceFlow; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow
        class PoliceCatalyst; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst
        class PoliceSwitch; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch
        class Priority; //type: Native::Policy::PolicyMap::Class_::ActionList::Priority
        class QueueBuffers; //type: Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers
        class QueueLimit; //type: Native::Policy::PolicyMap::Class_::ActionList::QueueLimit
        class QueueLimitDscp; //type: Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp
        class RandomDetect; //type: Native::Policy::PolicyMap::Class_::ActionList::RandomDetect
        class Set; //type: Native::Policy::PolicyMap::Class_::ActionList::Set
        class Shape; //type: Native::Policy::PolicyMap::Class_::ActionList::Shape

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Compression> compression;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Estimate> estimate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Forward> forward;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::FairQueue> fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate> police_aggregate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap> police_policy_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCirPercent> police_cir_percent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit> police_rate_unit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent> police_rate_percent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp> police_rate_pdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate> police_target_bitrate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow> police_flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst> police_catalyst;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch> police_switch;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers> queue_buffers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::QueueLimit> queue_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp> queue_limit_dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::RandomDetect> random_detect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set> set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Shape> shape;
                class Trust;

}; // Native::Policy::PolicyMap::Class_::ActionList


class Native::Policy::PolicyMap::Class_::ActionList::Bandwidth : public ydk::Entity
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
        class Remaining; //type: Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining> remaining;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Bandwidth


class Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining : public ydk::Entity
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
        class Account; //type: Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account> account;
                class RemOption;

}; // Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining


class Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account


class Native::Policy::PolicyMap::Class_::ActionList::Compression : public ydk::Entity
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

        class Header; //type: Native::Policy::PolicyMap::Class_::ActionList::Compression::Header

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Compression::Header> header; // presence node
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Compression


class Native::Policy::PolicyMap::Class_::ActionList::Compression::Header : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Compression::Header


class Native::Policy::PolicyMap::Class_::ActionList::Estimate : public ydk::Entity
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

        class Bandwidth; //type: Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth> bandwidth; // presence node
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Estimate


class Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth : public ydk::Entity
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
        class DelayOneIn; //type: Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn> delay_one_in;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth


class Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn


class Native::Policy::PolicyMap::Class_::ActionList::Forward : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::Forward


class Native::Policy::PolicyMap::Class_::ActionList::FairQueue : public ydk::Entity
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

}; // Native::Policy::PolicyMap::Class_::ActionList::FairQueue


class Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate : public ydk::Entity
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

        class Police; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police> police;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate


class Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police : public ydk::Entity
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

        ydk::YLeaf aggregate; //type: string

}; // Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap : public ydk::Entity
{
    public:
        PolicePolicyMap();
        ~PolicePolicyMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Police; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police> police;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police : public ydk::Entity
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

        ydk::YLeaf cir; //type: uint64
        ydk::YLeaf bc; //type: uint32
        ydk::YLeaf be; //type: uint32
        ydk::YLeaf pir; //type: uint64
        class PirBe; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe
        class Actions; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe> pir_be;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions> actions;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe : public ydk::Entity
{
    public:
        PirBe();
        ~PirBe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf be; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions : public ydk::Entity
{
    public:
        Actions();
        ~Actions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit
        class ConformSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit
        class ConformSetCosTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable
        class ConformSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit
        class ConformSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit
        class ConformSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable
        class ConformSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit
        class ConformSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit
        class ConformSetMplsExpImpositionTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable
        class ConformSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit
        class ConformSetMplsExpTopmostTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable
        class ConformSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit
        class ConformSetPrecTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable
        class ConformSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit
        class ConformSetQosTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable
        class ConformTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit
        class ConformDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop
        class ExceedDscp; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp
        class ExceedSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit
        class ExceedSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit
        class ExceedSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit
        class ExceedSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit
        class ExceedSetDscpTransmitTable; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmitTable
        class ExceedSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetFrdeTransmit
        class ExceedSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetMplsExpImpositionTransmit
        class ExceedSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetMplsExpTopmostTransmit
        class ExceedSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetPrecTransmit
        class ExceedSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetQosTransmit
        class ExceedTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedTransmit
        class ExceedDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDrop
        class ViolateSetClpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetClpTransmit
        class ViolateSetCosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetCosTransmit
        class ViolateSetDiscardClassTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetDiscardClassTransmit
        class ViolateSetDscpTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetDscpTransmit
        class ViolateSetFrdeTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetFrdeTransmit
        class ViolateSetMplsExpImpositionTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetMplsExpImpositionTransmit
        class ViolateSetMplsExpTopmostTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetMplsExpTopmostTransmit
        class ViolateSetPrecTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetPrecTransmit
        class ViolateSetQosTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetQosTransmit
        class ViolateTransmit; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateTransmit
        class ViolateDrop; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateDrop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit> conform_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit> conform_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable> conform_set_cos_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit> conform_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit> conform_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable> conform_set_dscp_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit> conform_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit> conform_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable> conform_set_mpls_exp_imposition_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit> conform_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable> conform_set_mpls_exp_topmost_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit> conform_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable> conform_set_prec_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit> conform_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable> conform_set_qos_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit> conform_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop> conform_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp> exceed_dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit> exceed_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit> exceed_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit> exceed_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit> exceed_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmitTable> exceed_set_dscp_transmit_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetFrdeTransmit> exceed_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetMplsExpImpositionTransmit> exceed_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetMplsExpTopmostTransmit> exceed_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetPrecTransmit> exceed_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetQosTransmit> exceed_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedTransmit> exceed_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDrop> exceed_drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetClpTransmit> violate_set_clp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetCosTransmit> violate_set_cos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetDiscardClassTransmit> violate_set_discard_class_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetDscpTransmit> violate_set_dscp_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetFrdeTransmit> violate_set_frde_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetMplsExpImpositionTransmit> violate_set_mpls_exp_imposition_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetMplsExpTopmostTransmit> violate_set_mpls_exp_topmost_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetPrecTransmit> violate_set_prec_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetQosTransmit> violate_set_qos_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateTransmit> violate_transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateDrop> violate_drop;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit : public ydk::Entity
{
    public:
        ConformSetClpTransmit();
        ~ConformSetClpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_clp_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit : public ydk::Entity
{
    public:
        ConformSetCosTransmit();
        ~ConformSetCosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_cos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable : public ydk::Entity
{
    public:
        ConformSetCosTransmitTable();
        ~ConformSetCosTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_cos_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit : public ydk::Entity
{
    public:
        ConformSetDiscardClassTransmit();
        ~ConformSetDiscardClassTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_discard_class_transmit; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit : public ydk::Entity
{
    public:
        ConformSetDscpTransmit();
        ~ConformSetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_dscp_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable : public ydk::Entity
{
    public:
        ConformSetDscpTransmitTable();
        ~ConformSetDscpTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_dscp_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit : public ydk::Entity
{
    public:
        ConformSetFrdeTransmit();
        ~ConformSetFrdeTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_frde_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit : public ydk::Entity
{
    public:
        ConformSetMplsExpImpositionTransmit();
        ~ConformSetMplsExpImpositionTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable : public ydk::Entity
{
    public:
        ConformSetMplsExpImpositionTransmitTable();
        ~ConformSetMplsExpImpositionTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_imposition_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit : public ydk::Entity
{
    public:
        ConformSetMplsExpTopmostTransmit();
        ~ConformSetMplsExpTopmostTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable : public ydk::Entity
{
    public:
        ConformSetMplsExpTopmostTransmitTable();
        ~ConformSetMplsExpTopmostTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_mpls_exp_topmost_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit : public ydk::Entity
{
    public:
        ConformSetPrecTransmit();
        ~ConformSetPrecTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_prec_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable : public ydk::Entity
{
    public:
        ConformSetPrecTransmitTable();
        ~ConformSetPrecTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_prec_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit : public ydk::Entity
{
    public:
        ConformSetQosTransmit();
        ~ConformSetQosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_qos_transmit; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable : public ydk::Entity
{
    public:
        ConformSetQosTransmitTable();
        ~ConformSetQosTransmitTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_qos_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit : public ydk::Entity
{
    public:
        ConformTransmit();
        ~ConformTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop : public ydk::Entity
{
    public:
        ConformDrop();
        ~ConformDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConformAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction> conform_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp : public ydk::Entity
{
    public:
        ExceedDscp();
        ~ExceedDscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: one of uint8, enumeration

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit : public ydk::Entity
{
    public:
        ExceedSetClpTransmit();
        ~ExceedSetClpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_clp_transmit; //type: empty

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit : public ydk::Entity
{
    public:
        ExceedSetCosTransmit();
        ~ExceedSetCosTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_cos_transmit; //type: one of uint8, enumeration
        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::TableMap::name)
        ydk::YLeaf table;

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit : public ydk::Entity
{
    public:
        ExceedSetDiscardClassTransmit();
        ~ExceedSetDiscardClassTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_discard_class_transmit; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction


class Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit : public ydk::Entity
{
    public:
        ExceedSetDscpTransmit();
        ~ExceedSetDscpTransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExceedAction; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::ExceedAction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::ExceedAction> exceed_action;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit

class Native::Policy::ClassMap::Match::Not_::Application::Attribute::MediaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf audio;
        static const ydk::Enum::YLeaf audio_video;
        static const ydk::Enum::YLeaf control;
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf video;

};

class Native::Policy::ClassMap::Match::Not_::Protocol::Protocols : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf x802_11_iapp;
        static const ydk::Enum::YLeaf ace_svr;
        static const ydk::Enum::YLeaf aol;
        static const ydk::Enum::YLeaf appleqtc;
        static const ydk::Enum::YLeaf biff;
        static const ydk::Enum::YLeaf bittorrent;
        static const ydk::Enum::YLeaf bootpc;
        static const ydk::Enum::YLeaf bootps;
        static const ydk::Enum::YLeaf cddbp;
        static const ydk::Enum::YLeaf cifs;
        static const ydk::Enum::YLeaf cisco_fna;
        static const ydk::Enum::YLeaf cisco_net_mgmt;
        static const ydk::Enum::YLeaf cisco_svcs;
        static const ydk::Enum::YLeaf cisco_sys;
        static const ydk::Enum::YLeaf cisco_tdp;
        static const ydk::Enum::YLeaf cisco_tna;
        static const ydk::Enum::YLeaf citriximaclient;
        static const ydk::Enum::YLeaf clp;
        static const ydk::Enum::YLeaf creativepartnr;
        static const ydk::Enum::YLeaf creativeserver;
        static const ydk::Enum::YLeaf daytime;
        static const ydk::Enum::YLeaf dbase;
        static const ydk::Enum::YLeaf dbcontrol_agent;
        static const ydk::Enum::YLeaf ddns_v3;
        static const ydk::Enum::YLeaf dhcp_failover;
        static const ydk::Enum::YLeaf directconnect;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf dnsix;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf entrust_svc_hdlr;
        static const ydk::Enum::YLeaf entrust_svcs;
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf fcip_port;
        static const ydk::Enum::YLeaf ftps;
        static const ydk::Enum::YLeaf gdoi;
        static const ydk::Enum::YLeaf giop;
        static const ydk::Enum::YLeaf gtpv0;
        static const ydk::Enum::YLeaf gtpv1;
        static const ydk::Enum::YLeaf h225ras;
        static const ydk::Enum::YLeaf h323callsigalt;
        static const ydk::Enum::YLeaf hp_alarm_mgr;
        static const ydk::Enum::YLeaf hp_collector;
        static const ydk::Enum::YLeaf hp_managed_node;
        static const ydk::Enum::YLeaf hsrp;
        static const ydk::Enum::YLeaf https;
        static const ydk::Enum::YLeaf ica;
        static const ydk::Enum::YLeaf icabrowser;
        static const ydk::Enum::YLeaf ident;
        static const ydk::Enum::YLeaf igmpv3lite;
        static const ydk::Enum::YLeaf imap3;
        static const ydk::Enum::YLeaf imaps;
        static const ydk::Enum::YLeaf ipass;
        static const ydk::Enum::YLeaf ipsec_msft;
        static const ydk::Enum::YLeaf irc_serv;
        static const ydk::Enum::YLeaf ircs;
        static const ydk::Enum::YLeaf ircu;
        static const ydk::Enum::YLeaf isakmp;
        static const ydk::Enum::YLeaf iscsi;
        static const ydk::Enum::YLeaf iscsi_target;
        static const ydk::Enum::YLeaf kermit;
        static const ydk::Enum::YLeaf ldap_admin;
        static const ydk::Enum::YLeaf ldaps;
        static const ydk::Enum::YLeaf login;
        static const ydk::Enum::YLeaf lotusmtap;
        static const ydk::Enum::YLeaf lotusnote;
        static const ydk::Enum::YLeaf mapi;
        static const ydk::Enum::YLeaf ms_ad_rep;
        static const ydk::Enum::YLeaf ms_exch_nspi;
        static const ydk::Enum::YLeaf ms_frs;
        static const ydk::Enum::YLeaf ms_frsapi;
        static const ydk::Enum::YLeaf ms_rfr;
        static const ydk::Enum::YLeaf msn_messenger;
        static const ydk::Enum::YLeaf netlogon;
        static const ydk::Enum::YLeaf microsoft_ds;
        static const ydk::Enum::YLeaf ms_cluster_net;
        static const ydk::Enum::YLeaf ms_dotnetster;
        static const ydk::Enum::YLeaf ms_sna;
        static const ydk::Enum::YLeaf ms_sql;
        static const ydk::Enum::YLeaf ms_sql_m;
        static const ydk::Enum::YLeaf msexch_routing;
        static const ydk::Enum::YLeaf msnmsgr;
        static const ydk::Enum::YLeaf msrpc;
        static const ydk::Enum::YLeaf mysql;
        static const ydk::Enum::YLeaf n2h2server;
        static const ydk::Enum::YLeaf ncp;
        static const ydk::Enum::YLeaf net8_cman;
        static const ydk::Enum::YLeaf netbios_dgm;
        static const ydk::Enum::YLeaf netbios_ns;
        static const ydk::Enum::YLeaf netbios_ssn;
        static const ydk::Enum::YLeaf netstat;
        static const ydk::Enum::YLeaf oem_agent;
        static const ydk::Enum::YLeaf oracle;
        static const ydk::Enum::YLeaf oracle_em_vp;
        static const ydk::Enum::YLeaf oraclenames;
        static const ydk::Enum::YLeaf orasrv;
        static const ydk::Enum::YLeaf pcanywheredata;
        static const ydk::Enum::YLeaf pcanywherestat;
        static const ydk::Enum::YLeaf pop3s;
        static const ydk::Enum::YLeaf pwdgen;
        static const ydk::Enum::YLeaf qmtp;
        static const ydk::Enum::YLeaf r_winsock;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf rdb_dbs_disp;
        static const ydk::Enum::YLeaf realmedia;
        static const ydk::Enum::YLeaf realsecure;
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf rsvp_encap;
        static const ydk::Enum::YLeaf rsvp_tunnel;
        static const ydk::Enum::YLeaf rtc_pm_port;
        static const ydk::Enum::YLeaf rtelnet;
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf shell;
        static const ydk::Enum::YLeaf sip_tls;
        static const ydk::Enum::YLeaf sms;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf snmptrap;
        static const ydk::Enum::YLeaf sql_net;
        static const ydk::Enum::YLeaf sqlserv;
        static const ydk::Enum::YLeaf sqlsrv;
        static const ydk::Enum::YLeaf sshell;
        static const ydk::Enum::YLeaf ssp;
        static const ydk::Enum::YLeaf syslog_conn;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf tacacs_ds;
        static const ydk::Enum::YLeaf tarantella;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf telnets;
        static const ydk::Enum::YLeaf time;
        static const ydk::Enum::YLeaf timed;
        static const ydk::Enum::YLeaf tr_rsrb;
        static const ydk::Enum::YLeaf ttc;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf uucp;
        static const ydk::Enum::YLeaf vqp;
        static const ydk::Enum::YLeaf webster;
        static const ydk::Enum::YLeaf who;
        static const ydk::Enum::YLeaf wins;
        static const ydk::Enum::YLeaf x11;
        static const ydk::Enum::YLeaf xdmcp;
        static const ydk::Enum::YLeaf ymsgr;
        static const ydk::Enum::YLeaf aarp;
        static const ydk::Enum::YLeaf appletalk;
        static const ydk::Enum::YLeaf arp;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf bridge;
        static const ydk::Enum::YLeaf bstun;
        static const ydk::Enum::YLeaf cdp;

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

class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::Method : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1x;
        static const ydk::Enum::YLeaf mab;
        static const ydk::Enum::YLeaf webauth;

};

class Native::Policy::PolicyMap::Class_::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inspect;

};

class Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad : public ydk::Enum
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

class Native::Policy::PolicyMap::Class_::Policy_::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cxsc;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf pass;
        static const ydk::Enum::YLeaf service_policy;

};

class Native::Policy::PolicyMap::Class_::Policy_::ParameterMap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;
        static const ydk::Enum::YLeaf gtp;

};

class Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gtpv0;
        static const ydk::Enum::YLeaf gtpv1;
        static const ydk::Enum::YLeaf imap;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;

};

class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number : public ydk::Enum
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

class Native::Policy::PolicyMap::Class_::PmPolicy::React::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf media_stop;
        static const ydk::Enum::YLeaf mrv;
        static const ydk::Enum::YLeaf rtp_jitter_average;
        static const ydk::Enum::YLeaf transport_packets_lost_rate;

};

class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;

};

class Native::Policy::PolicyMap::Class_::ActionList::Trust : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf ip_precedence;

};

class Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::RemOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf percent;
        static const ydk::Enum::YLeaf ratio;

};

class Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::Ip : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rtp;
        static const ydk::Enum::YLeaf tcp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_12_ */

