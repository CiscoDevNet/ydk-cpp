#ifndef _CISCO_IOS_XE_NATIVE_51_
#define _CISCO_IOS_XE_NATIVE_51_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_47.hpp"
#include "Cisco_IOS_XE_native_50.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::PortChannel::Plim::Qos::Input::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Zero; //type: Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero
        class StrictPriority; //type: Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority> strict_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero> zero;
        
}; // Native::Interface::PortChannel::Plim::Qos::Input::Queue


class Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority : public ydk::Entity
{
    public:
        StrictPriority();
        ~StrictPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pause; //type: Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause> pause;
        
}; // Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority


class Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf threshold; //type: uint8

}; // Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause


class Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero : public ydk::Entity
{
    public:
        Zero();
        ~Zero();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pause; //type: Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause> pause;
        
}; // Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero


class Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf threshold; //type: uint8

}; // Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause


class Native::Interface::PortChannel::PmPath : public ydk::Entity
{
    public:
        PmPath();
        ~PmPath();

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
        ydk::YLeaf interface_id; //type: uint8

}; // Native::Interface::PortChannel::PmPath


class Native::Interface::PortChannel::PortChannel_ : public ydk::Entity
{
    public:
        PortChannel_();
        ~PortChannel_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_links; //type: uint8
        ydk::YLeaf standalone_disable; //type: empty

}; // Native::Interface::PortChannel::PortChannel_


class Native::Interface::PortChannel::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_sessions; //type: uint16
        class Enable; //type: Native::Interface::PortChannel::Pppoe::Enable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Pppoe::Enable> enable; // presence node
        
}; // Native::Interface::PortChannel::Pppoe


class Native::Interface::PortChannel::Pppoe::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Interface::PortChannel::Pppoe::Enable


class Native::Interface::PortChannel::PriorityQueue : public ydk::Entity
{
    public:
        PriorityQueue();
        ~PriorityQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::PortChannel::PriorityQueue::CosMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::PortChannel::PriorityQueue


class Native::Interface::PortChannel::PriorityQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::PortChannel::PriorityQueue::CosMap


class Native::Interface::PortChannel::RcvQueue : public ydk::Entity
{
    public:
        RcvQueue();
        ~RcvQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CosMap; //type: Native::Interface::PortChannel::RcvQueue::CosMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::PortChannel::RcvQueue


class Native::Interface::PortChannel::RcvQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint8
        ydk::YLeaf threshold_id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::PortChannel::RcvQueue::CosMap


class Native::Interface::PortChannel::Service : public ydk::Entity
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

        class Instance; //type: Native::Interface::PortChannel::Service::Instance

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance> > instance;
        
}; // Native::Interface::PortChannel::Service


class Native::Interface::PortChannel::Service::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf gigabitethernet; //type: empty
        ydk::YLeaf ethernet; //type: empty
        ydk::YLeaf ethernet_evc_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf evc_name; //type: string
        ydk::YLeaf group; //type: uint32
        ydk::YLeaf shutdown; //type: empty
        class Encapsulation; //type: Native::Interface::PortChannel::Service::Instance::Encapsulation
        class Ip; //type: Native::Interface::PortChannel::Service::Instance::Ip
        class Ipv6; //type: Native::Interface::PortChannel::Service::Instance::Ipv6
        class Rewrite; //type: Native::Interface::PortChannel::Service::Instance::Rewrite
        class Errdisable; //type: Native::Interface::PortChannel::Service::Instance::Errdisable
        class EthernetContainer; //type: Native::Interface::PortChannel::Service::Instance::EthernetContainer
        class Snmp; //type: Native::Interface::PortChannel::Service::Instance::Snmp
        class BridgeDomain; //type: Native::Interface::PortChannel::Service::Instance::BridgeDomain
        class Mac; //type: Native::Interface::PortChannel::Service::Instance::Mac
        class ServicePolicy; //type: Native::Interface::PortChannel::Service::Instance::ServicePolicy
        class Cfm; //type: Native::Interface::PortChannel::Service::Instance::Cfm
        class L2Protocol; //type: Native::Interface::PortChannel::Service::Instance::L2Protocol
        class Xconnect; //type: Native::Interface::PortChannel::Service::Instance::Xconnect
        class XconnectPwClass; //type: Native::Interface::PortChannel::Service::Instance::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::BridgeDomain> bridge_domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Cfm> cfm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Errdisable> errdisable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::EthernetContainer> ethernet_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::L2Protocol> l2protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Rewrite> rewrite;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::PortChannel::Service::Instance


class Native::Interface::PortChannel::Service::Instance::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_id; //type: uint16
        ydk::YLeaf from_encapsulation; //type: empty
        class SplitHorizon; //type: Native::Interface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon> split_horizon;
        
}; // Native::Interface::PortChannel::Service::Instance::BridgeDomain


class Native::Interface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon : public ydk::Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: uint8

}; // Native::Interface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon


class Native::Interface::PortChannel::Service::Instance::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Encapsulation; //type: Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation
        class Mep; //type: Native::Interface::PortChannel::Service::Instance::Cfm::Mep
        class Mip; //type: Native::Interface::PortChannel::Service::Instance::Cfm::Mip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Cfm::Mep> mep;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Cfm::Mip> mip;
        
}; // Native::Interface::PortChannel::Service::Instance::Cfm


class Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Ad; //type: Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad
        class Dot1Q; //type: Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad> dot1ad;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q> dot1q;
        
}; // Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation


class Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad : public ydk::Entity
{
    public:
        Dot1Ad();
        ~Dot1Ad();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf dot1q; //type: uint16

}; // Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad


class Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q : public ydk::Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf second_dot1q; //type: uint16

}; // Native::Interface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q


class Native::Interface::PortChannel::Service::Instance::Cfm::Mep : public ydk::Entity
{
    public:
        Mep();
        ~Mep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf mpid; //type: uint16

}; // Native::Interface::PortChannel::Service::Instance::Cfm::Mep


class Native::Interface::PortChannel::Service::Instance::Cfm::Mip : public ydk::Entity
{
    public:
        Mip();
        ~Mip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: uint8

}; // Native::Interface::PortChannel::Service::Instance::Cfm::Mip


class Native::Interface::PortChannel::Service::Instance::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: empty
        class Dot1Ad; //type: Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad
        class Dot1Q; //type: Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q
        class PriorityTagged; //type: Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged
        class Untagged; //type: Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad> dot1ad;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged> priority_tagged;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged> untagged; // presence node
        
}; // Native::Interface::PortChannel::Service::Instance::Encapsulation


class Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad : public ydk::Entity
{
    public:
        Dot1Ad();
        ~Dot1Ad();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exact; //type: empty
        ydk::YLeafList id; //type: list of  one of string, uint16, enumeration
        ydk::YLeafList cos; //type: list of  uint8
        ydk::YLeafList dot1q; //type: list of  one of string, uint16, enumeration
        ydk::YLeafList etype; //type: list of  Etype
        class Cos2; //type: Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2> cos2;
                class Id;
        class Dot1Q;
        class Etype;

}; // Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad


class Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2 : public ydk::Entity
{
    public:
        Cos2();
        ~Cos2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList cos; //type: list of  uint8

}; // Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2


class Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q : public ydk::Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exact; //type: empty
        ydk::YLeaf vlan_type; //type: VlanType
        ydk::YLeafList id; //type: list of  one of string, uint16, enumeration
        ydk::YLeafList cos; //type: list of  uint8
        ydk::YLeafList second_dot1q; //type: list of  one of string, uint16, enumeration
        ydk::YLeafList etype; //type: list of  Etype
        class Cos2; //type: Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2> cos2;
                class Id;
        class SecondDot1Q;
        class Etype;
        class VlanType;

}; // Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q


class Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2 : public ydk::Entity
{
    public:
        Cos2();
        ~Cos2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList cos; //type: list of  uint8

}; // Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2


class Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged : public ydk::Entity
{
    public:
        PriorityTagged();
        ~PriorityTagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList etype; //type: list of  Etype
        class CosContainer; //type: Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer> cos_container;
                class Etype;

}; // Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged


class Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer : public ydk::Entity
{
    public:
        CosContainer();
        ~CosContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList cos; //type: list of  uint8

}; // Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer


class Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged : public ydk::Entity
{
    public:
        Untagged();
        ~Untagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged


class Native::Interface::PortChannel::Service::Instance::Errdisable : public ydk::Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Recovery; //type: Native::Interface::PortChannel::Service::Instance::Errdisable::Recovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Errdisable::Recovery> recovery;
        
}; // Native::Interface::PortChannel::Service::Instance::Errdisable


class Native::Interface::PortChannel::Service::Instance::Errdisable::Recovery : public ydk::Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cause; //type: Native::Interface::PortChannel::Service::Instance::Errdisable::Recovery::Cause

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Errdisable::Recovery::Cause> cause;
        
}; // Native::Interface::PortChannel::Service::Instance::Errdisable::Recovery


class Native::Interface::PortChannel::Service::Instance::Errdisable::Recovery::Cause : public ydk::Entity
{
    public:
        Cause();
        ~Cause();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_security; //type: uint32

}; // Native::Interface::PortChannel::Service::Instance::Errdisable::Recovery::Cause


class Native::Interface::PortChannel::Service::Instance::EthernetContainer : public ydk::Entity
{
    public:
        EthernetContainer();
        ~EthernetContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ethernet; //type: Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet> ethernet;
        
}; // Native::Interface::PortChannel::Service::Instance::EthernetContainer


class Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lmi; //type: Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi
        class Loopback; //type: Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi> lmi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback> loopback;
        
}; // Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet


class Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi : public ydk::Entity
{
    public:
        Lmi();
        ~Lmi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CeVlan; //type: Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan> ce_vlan;
        
}; // Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi


class Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan : public ydk::Entity
{
    public:
        CeVlan();
        ~CeVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Map; //type: Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map> map;
        
}; // Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan


class Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map : public ydk::Entity
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

        ydk::YLeaf any; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf untagged; //type: empty
        class VlanRange; //type: Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange> vlan_range;
        
}; // Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map


class Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf comma; //type: uint16
        ydk::YLeaf hyphen; //type: uint16

}; // Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange


class Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback : public ydk::Entity
{
    public:
        Loopback();
        ~Loopback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Permit; //type: Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit> permit;
        
}; // Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback


class Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external; //type: empty
        ydk::YLeaf internal; //type: empty

}; // Native::Interface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit


class Native::Interface::PortChannel::Service::Instance::Ip : public ydk::Entity
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

        class Acl; //type: Native::Interface::PortChannel::Service::Instance::Ip::Acl
        class Dhcp; //type: Native::Interface::PortChannel::Service::Instance::Ip::Dhcp
        class Verify; //type: Native::Interface::PortChannel::Service::Instance::Ip::Verify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Ip::Acl> acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Ip::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Ip::Verify> verify;
        
}; // Native::Interface::PortChannel::Service::Instance::Ip


class Native::Interface::PortChannel::Service::Instance::Ip::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_group; //type: one of string, uint16
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::PortChannel::Service::Instance::Ip::Acl


class Native::Interface::PortChannel::Service::Instance::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Relay; //type: Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay> relay;
        
}; // Native::Interface::PortChannel::Service::Instance::Ip::Dhcp


class Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Information; //type: Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay


class Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Option; //type: Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option> option;
        
}; // Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information


class Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_id; //type: string

}; // Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option


class Native::Interface::PortChannel::Service::Instance::Ip::Verify : public ydk::Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: empty
        ydk::YLeaf vlan; //type: empty
        ydk::YLeaf dhcp_snooping; //type: empty
        ydk::YLeaf port_security; //type: empty

}; // Native::Interface::PortChannel::Service::Instance::Ip::Verify


class Native::Interface::PortChannel::Service::Instance::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_filter; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::PortChannel::Service::Instance::Ipv6


class Native::Interface::PortChannel::Service::Instance::L2Protocol : public ydk::Entity
{
    public:
        L2Protocol();
        ~L2Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: Native::Interface::PortChannel::Service::Instance::L2Protocol::Peer
        class Forward; //type: Native::Interface::PortChannel::Service::Instance::L2Protocol::Forward
        class Tunnel; //type: Native::Interface::PortChannel::Service::Instance::L2Protocol::Tunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::L2Protocol::Forward> forward; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::L2Protocol::Peer> peer; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::L2Protocol::Tunnel> tunnel; // presence node
        
}; // Native::Interface::PortChannel::Service::Instance::L2Protocol


class Native::Interface::PortChannel::Service::Instance::L2Protocol::Forward : public ydk::Entity
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

        ydk::YLeafList protocol; //type: list of  Protocol
        class Protocol;

}; // Native::Interface::PortChannel::Service::Instance::L2Protocol::Forward


class Native::Interface::PortChannel::Service::Instance::L2Protocol::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList protocol; //type: list of  Protocol
        class Protocol;

}; // Native::Interface::PortChannel::Service::Instance::L2Protocol::Peer


class Native::Interface::PortChannel::Service::Instance::L2Protocol::Tunnel : public ydk::Entity
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

        ydk::YLeafList protocol; //type: list of  Protocol
        class Protocol;

}; // Native::Interface::PortChannel::Service::Instance::L2Protocol::Tunnel


class Native::Interface::PortChannel::Service::Instance::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Security; //type: Native::Interface::PortChannel::Service::Instance::Mac::Security

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Mac::Security> security; // presence node
        
}; // Native::Interface::PortChannel::Service::Instance::Mac


class Native::Interface::PortChannel::Service::Instance::Mac::Security : public ydk::Entity
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

        ydk::YLeaf violation; //type: Violation
        class Maximum; //type: Native::Interface::PortChannel::Service::Instance::Mac::Security::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Mac::Security::Maximum> maximum;
                class Violation;

}; // Native::Interface::PortChannel::Service::Instance::Mac::Security


class Native::Interface::PortChannel::Service::Instance::Mac::Security::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addresses; //type: uint16

}; // Native::Interface::PortChannel::Service::Instance::Mac::Security::Maximum


class Native::Interface::PortChannel::Service::Instance::Rewrite : public ydk::Entity
{
    public:
        Rewrite();
        ~Rewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ingress; //type: Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress> ingress;
        
}; // Native::Interface::PortChannel::Service::Instance::Rewrite


class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress : public ydk::Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tag; //type: Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag> tag;
        
}; // Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress


class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pop; //type: Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop
        class Push; //type: Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push
        class Translate; //type: Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop> pop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push> push;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate> translate;
        
}; // Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag


class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop : public ydk::Entity
{
    public:
        Pop();
        ~Pop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf way; //type: Way
        ydk::YLeaf mode; //type: Mode
        class Way;
        class Mode;

}; // Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop


class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push


class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate : public ydk::Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class T1To1; //type: Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1
        class T1To2; //type: Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2
        class T2To1; //type: Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1
        class T2To2; //type: Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1> t1_to_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2> t1_to_2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1> t2_to_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2> t2_to_2;
        
}; // Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate


class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1 : public ydk::Entity
{
    public:
        T1To1();
        ~T1To1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1


class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2 : public ydk::Entity
{
    public:
        T1To2();
        ~T1To2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf second_dot1q; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2


class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1 : public ydk::Entity
{
    public:
        T2To1();
        ~T2To1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1


class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2 : public ydk::Entity
{
    public:
        T2To2();
        ~T2To2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf second_dot1q; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2


class Native::Interface::PortChannel::Service::Instance::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Interface::PortChannel::Service::Instance::ServicePolicy::Input
        class Output; //type: Native::Interface::PortChannel::Service::Instance::ServicePolicy::Output

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::ServicePolicy::Input> > input;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::ServicePolicy::Output> > output;
        
}; // Native::Interface::PortChannel::Service::Instance::ServicePolicy


class Native::Interface::PortChannel::Service::Instance::ServicePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

}; // Native::Interface::PortChannel::Service::Instance::ServicePolicy::Input


class Native::Interface::PortChannel::Service::Instance::ServicePolicy::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

}; // Native::Interface::PortChannel::Service::Instance::ServicePolicy::Output


class Native::Interface::PortChannel::Service::Instance::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trap; //type: Native::Interface::PortChannel::Service::Instance::Snmp::Trap
        class Ifindex; //type: Native::Interface::PortChannel::Service::Instance::Snmp::Ifindex

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Snmp::Ifindex> ifindex;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Snmp::Trap> trap;
        
}; // Native::Interface::PortChannel::Service::Instance::Snmp


class Native::Interface::PortChannel::Service::Instance::Snmp::Ifindex : public ydk::Entity
{
    public:
        Ifindex();
        ~Ifindex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf persist; //type: empty

}; // Native::Interface::PortChannel::Service::Instance::Snmp::Ifindex


class Native::Interface::PortChannel::Service::Instance::Snmp::Trap : public ydk::Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_status; //type: empty

}; // Native::Interface::PortChannel::Service::Instance::Snmp::Trap


class Native::Interface::PortChannel::Service::Instance::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf manual; //type: empty
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::PortChannel::Service::Instance::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::PortChannel::Service::Instance::Xconnect


class Native::Interface::PortChannel::Service::Instance::Xconnect::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: Native::Interface::PortChannel::Service::Instance::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::PortChannel::Service::Instance::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Xconnect::Backup::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::PortChannel::Service::Instance::Xconnect::Backup


class Native::Interface::PortChannel::Service::Instance::Xconnect::Backup::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::PortChannel::Service::Instance::Xconnect::Backup::Delay


class Native::Interface::PortChannel::Service::Instance::Xconnect::Backup::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::PortChannel::Service::Instance::Xconnect::Backup::Peer


class Native::Interface::PortChannel::Service::Instance::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::PortChannel::Service::Instance::XconnectPwClass


class Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect


class Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect::Udp


class Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::PortChannel::Service::Instance::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::PortChannel::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history; //type: empty
        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string
        class Type; //type: Native::Interface::PortChannel::ServicePolicy::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::ServicePolicy::Type> type;
        
}; // Native::Interface::PortChannel::ServicePolicy


class Native::Interface::PortChannel::ServicePolicy::Type : public ydk::Entity
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

        class Control; //type: Native::Interface::PortChannel::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::PortChannel::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::ServicePolicy::Type::Control> control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::PortChannel::ServicePolicy::Type


class Native::Interface::PortChannel::ServicePolicy::Type::Control : public ydk::Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber; //type: string

}; // Native::Interface::PortChannel::ServicePolicy::Type::Control


class Native::Interface::PortChannel::ServicePolicy::Type::PerformanceMonitor : public ydk::Entity
{
    public:
        PerformanceMonitor();
        ~PerformanceMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf name; //type: string
        class Direction;

}; // Native::Interface::PortChannel::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain : public ydk::Entity
{
    public:
        ServiceChain();
        ~ServiceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain


class Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

}; // Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

}; // Native::Interface::PortChannel::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::PortChannel::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ifindex; //type: Native::Interface::PortChannel::Snmp::Ifindex
        class Trap; //type: Native::Interface::PortChannel::Snmp::Trap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Snmp::Ifindex> ifindex;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Snmp::Trap> trap;
        
}; // Native::Interface::PortChannel::Snmp


class Native::Interface::PortChannel::Snmp::Ifindex : public ydk::Entity
{
    public:
        Ifindex();
        ~Ifindex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf persist; //type: empty
        ydk::YLeaf clear; //type: boolean

}; // Native::Interface::PortChannel::Snmp::Ifindex


class Native::Interface::PortChannel::Snmp::Trap : public ydk::Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_status; //type: boolean
        class LinkStatusCapas; //type: Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas> link_status_capas;
        
}; // Native::Interface::PortChannel::Snmp::Trap


class Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas : public ydk::Entity
{
    public:
        LinkStatusCapas();
        ~LinkStatusCapas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkStatus; //type: Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas::LinkStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas::LinkStatus> link_status;
        
}; // Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas


class Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas::LinkStatus : public ydk::Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Permit; //type: Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit> permit;
        
}; // Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas::LinkStatus


class Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf duplicates; //type: empty

}; // Native::Interface::PortChannel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit


class Native::Interface::PortChannel::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bpdufilter; //type: Bpdufilter
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf guard; //type: Guard
        ydk::YLeaf link_type; //type: LinkType
        ydk::YLeaf port_priority; //type: uint8
        class Bpduguard; //type: Native::Interface::PortChannel::SpanningTree::Bpduguard
        class Portfast; //type: Native::Interface::PortChannel::SpanningTree::Portfast
        class Vlan; //type: Native::Interface::PortChannel::SpanningTree::Vlan
        class Loopguard; //type: Native::Interface::PortChannel::SpanningTree::Loopguard
        class Mst; //type: Native::Interface::PortChannel::SpanningTree::Mst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::SpanningTree::Mst> mst;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::SpanningTree::Portfast> portfast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::SpanningTree::Vlan> vlan;
                class Bpdufilter;
        class Guard;
        class LinkType;

}; // Native::Interface::PortChannel::SpanningTree


class Native::Interface::PortChannel::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty

}; // Native::Interface::PortChannel::SpanningTree::Bpduguard


class Native::Interface::PortChannel::SpanningTree::Loopguard : public ydk::Entity
{
    public:
        Loopguard();
        ~Loopguard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: empty

}; // Native::Interface::PortChannel::SpanningTree::Loopguard


class Native::Interface::PortChannel::SpanningTree::Mst : public ydk::Entity
{
    public:
        Mst();
        ~Mst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeaf pre_standard; //type: empty

}; // Native::Interface::PortChannel::SpanningTree::Mst


class Native::Interface::PortChannel::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf edge; //type: empty

}; // Native::Interface::PortChannel::SpanningTree::Portfast


class Native::Interface::PortChannel::SpanningTree::Vlan : public ydk::Entity
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

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeafList vlan_ids; //type: list of  one of string, uint16

}; // Native::Interface::PortChannel::SpanningTree::Vlan


class Native::Interface::PortChannel::Speed : public ydk::Entity
{
    public:
        Speed();
        ~Speed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: empty
        ydk::YLeaf value_10; //type: empty
        ydk::YLeaf value_100; //type: empty
        ydk::YLeaf value_1000; //type: empty
        ydk::YLeaf value_10000; //type: empty
        ydk::YLeaf nonegotiate; //type: empty

}; // Native::Interface::PortChannel::Speed


class Native::Interface::PortChannel::SrrQueue : public ydk::Entity
{
    public:
        SrrQueue();
        ~SrrQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bandwidth; //type: Native::Interface::PortChannel::SrrQueue::Bandwidth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::SrrQueue::Bandwidth> bandwidth;
        
}; // Native::Interface::PortChannel::SrrQueue


class Native::Interface::PortChannel::SrrQueue::Bandwidth : public ydk::Entity
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

        class Shape; //type: Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape
        class Share; //type: Native::Interface::PortChannel::SrrQueue::Bandwidth::Share

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape> shape;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::SrrQueue::Bandwidth::Share> share;
        
}; // Native::Interface::PortChannel::SrrQueue::Bandwidth


class Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight1; //type: uint16
        ydk::YLeaf weight2; //type: uint16
        ydk::YLeaf weight3; //type: uint16
        ydk::YLeaf weight4; //type: uint16

}; // Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape


class Native::Interface::PortChannel::SrrQueue::Bandwidth::Share : public ydk::Entity
{
    public:
        Share();
        ~Share();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight1; //type: uint8
        ydk::YLeaf weight2; //type: uint8
        ydk::YLeaf weight3; //type: uint8
        ydk::YLeaf weight4; //type: uint8

}; // Native::Interface::PortChannel::SrrQueue::Bandwidth::Share


class Native::Interface::PortChannel::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: Version
        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf mac_refresh; //type: uint8
        class Delay; //type: Native::Interface::PortChannel::Standby::Delay
        class UseBia; //type: Native::Interface::PortChannel::Standby::UseBia
        class StandbyList; //type: Native::Interface::PortChannel::Standby::StandbyList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::Delay> delay;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList> > standby_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::UseBia> use_bia; // presence node
                class Version;

}; // Native::Interface::PortChannel::Standby


class Native::Interface::PortChannel::Standby::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: uint16
        ydk::YLeaf reload; //type: uint16

}; // Native::Interface::PortChannel::Standby::Delay


class Native::Interface::PortChannel::Standby::StandbyList : public ydk::Entity
{
    public:
        StandbyList();
        ~StandbyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint16
        ydk::YLeaf follow; //type: string
        ydk::YLeaf ipv6; //type: one of string, enumeration
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf priority; //type: uint8
        class Authentication; //type: Native::Interface::PortChannel::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::PortChannel::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::PortChannel::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::PortChannel::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::PortChannel::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::PortChannel::Standby::StandbyList::Track

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Track> > track;
                class Ipv6;

}; // Native::Interface::PortChannel::Standby::StandbyList


class Native::Interface::PortChannel::Standby::StandbyList::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf text; //type: string
        class Md5; //type: Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::PortChannel::Standby::StandbyList::Authentication


class Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5


class Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        ydk::YLeaf timeout; //type: uint16
        class Encrypt;

}; // Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::PortChannel::Standby::StandbyList::Ip : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::PortChannel::Standby::StandbyList::Ip


class Native::Interface::PortChannel::Standby::StandbyList::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::PortChannel::Standby::StandbyList::Preempt


class Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: uint16
        ydk::YLeaf reload; //type: uint16
        ydk::YLeaf sync; //type: uint16

}; // Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay


class Native::Interface::PortChannel::Standby::StandbyList::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown; //type: empty
        class Advertisement; //type: Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::PortChannel::Standby::StandbyList::Redirect


class Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement : public ydk::Entity
{
    public:
        Advertisement();
        ~Advertisement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Md5; //type: Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        ydk::YLeaf timeout; //type: uint16
        class Encrypt;

}; // Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertisement; //type: uint16
        ydk::YLeaf holddown; //type: uint16

}; // Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers


class Native::Interface::PortChannel::Standby::StandbyList::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloInterval; //type: Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::PortChannel::Standby::StandbyList::Timers


class Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime


class Native::Interface::PortChannel::Standby::StandbyList::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::PortChannel::Standby::StandbyList::Track


class Native::Interface::PortChannel::Standby::UseBia : public ydk::Entity
{
    public:
        UseBia();
        ~UseBia();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Scope; //type: Native::Interface::PortChannel::Standby::UseBia::Scope

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::PortChannel::Standby::UseBia


class Native::Interface::PortChannel::Standby::UseBia::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: empty

}; // Native::Interface::PortChannel::Standby::UseBia::Scope


class Native::Interface::PortChannel::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::PortChannel::StormControl::Action
        class Broadcast; //type: Native::Interface::PortChannel::StormControl::Broadcast
        class Multicast; //type: Native::Interface::PortChannel::StormControl::Multicast
        class Unicast; //type: Native::Interface::PortChannel::StormControl::Unicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Unicast> unicast;
        
}; // Native::Interface::PortChannel::StormControl


class Native::Interface::PortChannel::StormControl::Action : public ydk::Entity
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

        ydk::YLeaf level; //type: decimal64
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::Interface::PortChannel::StormControl::Action


class Native::Interface::PortChannel::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Include; //type: Native::Interface::PortChannel::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::PortChannel::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Broadcast::Include> include;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::PortChannel::StormControl::Broadcast


class Native::Interface::PortChannel::StormControl::Broadcast::Include : public ydk::Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty

}; // Native::Interface::PortChannel::StormControl::Broadcast::Include


class Native::Interface::PortChannel::StormControl::Broadcast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::PortChannel::StormControl::Broadcast::Level


class Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps


class Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps


class Native::Interface::PortChannel::StormControl::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Interface::PortChannel::StormControl::Multicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Multicast::Level> level;
        
}; // Native::Interface::PortChannel::StormControl::Multicast


class Native::Interface::PortChannel::StormControl::Multicast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::PortChannel::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::PortChannel::StormControl::Multicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::PortChannel::StormControl::Multicast::Level


class Native::Interface::PortChannel::StormControl::Multicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::PortChannel::StormControl::Multicast::Level::Bps


class Native::Interface::PortChannel::StormControl::Multicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::PortChannel::StormControl::Multicast::Level::Pps


class Native::Interface::PortChannel::StormControl::Unicast : public ydk::Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Interface::PortChannel::StormControl::Unicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Unicast::Level> level;
        
}; // Native::Interface::PortChannel::StormControl::Unicast


class Native::Interface::PortChannel::StormControl::Unicast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::PortChannel::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::PortChannel::StormControl::Unicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::PortChannel::StormControl::Unicast::Level


class Native::Interface::PortChannel::StormControl::Unicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::PortChannel::StormControl::Unicast::Level::Bps


class Native::Interface::PortChannel::StormControl::Unicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::PortChannel::StormControl::Unicast::Level::Pps


class Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: decimal64
        ydk::YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold


class Native::Interface::PortChannel::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Virtual_; //type: Native::Interface::PortChannel::Switch_::Virtual_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switch_::Virtual_> virtual_;
        
}; // Native::Interface::PortChannel::Switch_


class Native::Interface::PortChannel::Switch_::Virtual_ : public ydk::Entity
{
    public:
        Virtual_();
        ~Virtual_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link; //type: uint8

}; // Native::Interface::PortChannel::Switch_::Virtual_


class Native::Interface::PortChannel::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nonegotiate; //type: empty
        ydk::YLeaf protected_; //type: empty
        ydk::YLeaf host; //type: empty
        class Access; //type: Native::Interface::PortChannel::Switchport::Access
        class Block; //type: Native::Interface::PortChannel::Switchport::Block
        class Mode; //type: Native::Interface::PortChannel::Switchport::Mode
        class PortSecurity; //type: Native::Interface::PortChannel::Switchport::PortSecurity
        class Trunk; //type: Native::Interface::PortChannel::Switchport::Trunk
        class Voice; //type: Native::Interface::PortChannel::Switchport::Voice
        class Priority; //type: Native::Interface::PortChannel::Switchport::Priority
        class Autostate; //type: Native::Interface::PortChannel::Switchport::Autostate
        class PrivateVlan; //type: Native::Interface::PortChannel::Switchport::PrivateVlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Autostate> autostate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Trunk> trunk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Voice> voice;
        
}; // Native::Interface::PortChannel::Switchport


class Native::Interface::PortChannel::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::PortChannel::Switchport::Access::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Access::Vlan> vlan;
        
}; // Native::Interface::PortChannel::Switchport::Access


class Native::Interface::PortChannel::Switchport::Access::Vlan : public ydk::Entity
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

        ydk::YLeaf vlan; //type: one of uint16, enumeration
        ydk::YLeaf name; //type: string
        class Vlan_;

}; // Native::Interface::PortChannel::Switchport::Access::Vlan


class Native::Interface::PortChannel::Switchport::Autostate : public ydk::Entity
{
    public:
        Autostate();
        ~Autostate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exclude; //type: empty

}; // Native::Interface::PortChannel::Switchport::Autostate


class Native::Interface::PortChannel::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty

}; // Native::Interface::PortChannel::Switchport::Block


class Native::Interface::PortChannel::Switchport::Mode : public ydk::Entity
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

        ydk::YLeaf dynamic; //type: Dynamic
        class Access; //type: Native::Interface::PortChannel::Switchport::Mode::Access
        class Dot1QTunnel; //type: Native::Interface::PortChannel::Switchport::Mode::Dot1QTunnel
        class PrivateVlan; //type: Native::Interface::PortChannel::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::PortChannel::Switchport::Mode::Trunk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Mode::Dot1QTunnel> dot1q_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Mode::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::PortChannel::Switchport::Mode::Trunk> trunk; // presence node
                class Dynamic;

}; // Native::Interface::PortChannel::Switchport::Mode

class Native::Interface::PortChannel::Pppoe::Enable::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;

};

class Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

};

class Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Dot1Q : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

};

class Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Etype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pppoe_all;
        static const ydk::Enum::YLeaf pppoe_discovery;
        static const ydk::Enum::YLeaf pppoe_session;

};

class Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

};

class Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::SecondDot1Q : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

};

class Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Etype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pppoe_all;
        static const ydk::Enum::YLeaf pppoe_discovery;
        static const ydk::Enum::YLeaf pppoe_session;

};

class Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::VlanType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0x88A8;
        static const ydk::Enum::YLeaf Y_0x9100;
        static const ydk::Enum::YLeaf Y_0x9200;

};

class Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::Etype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pppoe_all;
        static const ydk::Enum::YLeaf pppoe_discovery;
        static const ydk::Enum::YLeaf pppoe_session;

};

class Native::Interface::PortChannel::Service::Instance::L2Protocol::Forward::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf R4;
        static const ydk::Enum::YLeaf R5;
        static const ydk::Enum::YLeaf R6;
        static const ydk::Enum::YLeaf R8;
        static const ydk::Enum::YLeaf R9;
        static const ydk::Enum::YLeaf RA;
        static const ydk::Enum::YLeaf RB;
        static const ydk::Enum::YLeaf RC;
        static const ydk::Enum::YLeaf RD;
        static const ydk::Enum::YLeaf RF;
        static const ydk::Enum::YLeaf cdp;
        static const ydk::Enum::YLeaf dtp;
        static const ydk::Enum::YLeaf elmi;
        static const ydk::Enum::YLeaf esmc;
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf lldp;
        static const ydk::Enum::YLeaf loam;
        static const ydk::Enum::YLeaf pagp;
        static const ydk::Enum::YLeaf ptppd;
        static const ydk::Enum::YLeaf stp;
        static const ydk::Enum::YLeaf udld;
        static const ydk::Enum::YLeaf vtp;

};

class Native::Interface::PortChannel::Service::Instance::L2Protocol::Peer::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf R4;
        static const ydk::Enum::YLeaf R5;
        static const ydk::Enum::YLeaf R6;
        static const ydk::Enum::YLeaf R8;
        static const ydk::Enum::YLeaf R9;
        static const ydk::Enum::YLeaf RA;
        static const ydk::Enum::YLeaf RB;
        static const ydk::Enum::YLeaf RC;
        static const ydk::Enum::YLeaf RD;
        static const ydk::Enum::YLeaf RF;
        static const ydk::Enum::YLeaf cdp;
        static const ydk::Enum::YLeaf dtp;
        static const ydk::Enum::YLeaf elmi;
        static const ydk::Enum::YLeaf esmc;
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf lldp;
        static const ydk::Enum::YLeaf loam;
        static const ydk::Enum::YLeaf pagp;
        static const ydk::Enum::YLeaf ptppd;
        static const ydk::Enum::YLeaf stp;
        static const ydk::Enum::YLeaf udld;
        static const ydk::Enum::YLeaf vtp;

};

class Native::Interface::PortChannel::Service::Instance::L2Protocol::Tunnel::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf R4;
        static const ydk::Enum::YLeaf R5;
        static const ydk::Enum::YLeaf R6;
        static const ydk::Enum::YLeaf R8;
        static const ydk::Enum::YLeaf R9;
        static const ydk::Enum::YLeaf RA;
        static const ydk::Enum::YLeaf RB;
        static const ydk::Enum::YLeaf RC;
        static const ydk::Enum::YLeaf RD;
        static const ydk::Enum::YLeaf RF;
        static const ydk::Enum::YLeaf cdp;
        static const ydk::Enum::YLeaf dtp;
        static const ydk::Enum::YLeaf elmi;
        static const ydk::Enum::YLeaf esmc;
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf lldp;
        static const ydk::Enum::YLeaf loam;
        static const ydk::Enum::YLeaf pagp;
        static const ydk::Enum::YLeaf ptppd;
        static const ydk::Enum::YLeaf stp;
        static const ydk::Enum::YLeaf udld;
        static const ydk::Enum::YLeaf vtp;

};

class Native::Interface::PortChannel::Service::Instance::Mac::Security::Violation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf restrict;

};

class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::Way : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::PortChannel::Service::Instance::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::PortChannel::Service::Instance::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::PortChannel::ServicePolicy::Type::PerformanceMonitor::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::PortChannel::SpanningTree::Bpdufilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class Native::Interface::PortChannel::SpanningTree::Guard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf root;

};

class Native::Interface::PortChannel::SpanningTree::LinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf shared;

};

class Native::Interface::PortChannel::Standby::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Interface::PortChannel::Standby::StandbyList::Ipv6 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf autoconfig;

};

class Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::PortChannel::Switchport::Access::Vlan::Vlan_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

};

class Native::Interface::PortChannel::Switchport::Mode::Dynamic : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf desirable;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_51_ */

