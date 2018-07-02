#ifndef _CISCO_IOS_XE_NATIVE_204_
#define _CISCO_IOS_XE_NATIVE_204_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_122.hpp"
#include "Cisco_IOS_XE_native_202.hpp"
#include "Cisco_IOS_XE_native_203.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Rip::Default::Timers : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf basic; //type: empty

}; // Native::Router::Rip::Default::Timers


class Native::Router::Rip::Default::TrafficShare : public ydk::Entity
{
    public:
        TrafficShare();
        ~TrafficShare();

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

        class Min; //type: Native::Router::Rip::Default::TrafficShare::Min

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default::TrafficShare::Min> min;
        
}; // Native::Router::Rip::Default::TrafficShare


class Native::Router::Rip::Default::TrafficShare::Min : public ydk::Entity
{
    public:
        Min();
        ~Min();

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

        ydk::YLeaf across_interfaces; //type: empty

}; // Native::Router::Rip::Default::TrafficShare::Min


class Native::ServiceChain : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ServiceFunction; //type: Native::ServiceChain::ServiceFunction
        class ServiceFunctionForwarder; //type: Native::ServiceChain::ServiceFunctionForwarder
        class ServicePath; //type: Native::ServiceChain::ServicePath

        ydk::YList service_function;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder> service_function_forwarder;
        ydk::YList service_path;
        
}; // Native::ServiceChain


class Native::ServiceChain::ServiceFunction : public ydk::Entity
{
    public:
        ServiceFunction();
        ~ServiceFunction();

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
        class ConfigServiceChainSfMode; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode> config_service_chain_sf_mode;
        
}; // Native::ServiceChain::ServiceFunction


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode : public ydk::Entity
{
    public:
        ConfigServiceChainSfMode();
        ~ConfigServiceChainSfMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        class Encapsulation; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation
        class Ip; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip> ip;
        
}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation : public ydk::Entity
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

        ydk::YLeaf none; //type: empty
        class Gre; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre> gre; // presence node
        
}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre : public ydk::Entity
{
    public:
        Gre();
        ~Gre();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enhanced; //type: Enhanced
        class Enhanced;

}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip : public ydk::Entity
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

}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip


class Native::ServiceChain::ServiceFunctionForwarder : public ydk::Entity
{
    public:
        ServiceFunctionForwarder();
        ~ServiceFunctionForwarder();

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

        class ServiceFfName; //type: Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName
        class Local; //type: Native::ServiceChain::ServiceFunctionForwarder::Local

        ydk::YList service_ff_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder::Local> local; // presence node
        
}; // Native::ServiceChain::ServiceFunctionForwarder


class Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName : public ydk::Entity
{
    public:
        ServiceFfName();
        ~ServiceFfName();

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
        ydk::YLeaf description; //type: string
        class Ip; //type: Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip> ip;
        
}; // Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName


class Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip : public ydk::Entity
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

}; // Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip


class Native::ServiceChain::ServiceFunctionForwarder::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

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

        ydk::YLeaf description; //type: string
        class Ip; //type: Native::ServiceChain::ServiceFunctionForwarder::Local::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder::Local::Ip> ip;
        
}; // Native::ServiceChain::ServiceFunctionForwarder::Local


class Native::ServiceChain::ServiceFunctionForwarder::Local::Ip : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string

}; // Native::ServiceChain::ServiceFunctionForwarder::Local::Ip


class Native::ServiceChain::ServicePath : public ydk::Entity
{
    public:
        ServicePath();
        ~ServicePath();

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

        ydk::YLeaf service_path_id; //type: uint32
        class ConfigServiceChainPathMode; //type: Native::ServiceChain::ServicePath::ConfigServiceChainPathMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServicePath::ConfigServiceChainPathMode> config_service_chain_path_mode;
        
}; // Native::ServiceChain::ServicePath


class Native::ServiceChain::ServicePath::ConfigServiceChainPathMode : public ydk::Entity
{
    public:
        ConfigServiceChainPathMode();
        ~ConfigServiceChainPathMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        class ServiceIndex; //type: Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex> service_index;
        
}; // Native::ServiceChain::ServicePath::ConfigServiceChainPathMode


class Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex : public ydk::Entity
{
    public:
        ServiceIndex();
        ~ServiceIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Services; //type: Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services

        ydk::YList services;
        
}; // Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex


class Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services : public ydk::Entity
{
    public:
        Services();
        ~Services();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_index_id; //type: uint8
        ydk::YLeaf service_function; //type: string
        ydk::YLeaf service_function_forwarder; //type: string
        ydk::YLeaf terminate; //type: empty

}; // Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services


class Native::Performance : public ydk::Entity
{
    public:
        Performance();
        ~Performance();

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

        class Monitor; //type: Native::Performance::Monitor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor> monitor;
        
}; // Native::Performance


class Native::Performance::Monitor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Context; //type: Native::Performance::Monitor::Context
        class ObservationPoint; //type: Native::Performance::Monitor::ObservationPoint

        ydk::YList context;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::ObservationPoint> observation_point;
        
}; // Native::Performance::Monitor


class Native::Performance::Monitor::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

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
        ydk::YLeaf profile; //type: Profile
        ydk::YLeaf description; //type: string
        class Default; //type: Native::Performance::Monitor::Context::Default
        class Exporter; //type: Native::Performance::Monitor::Context::Exporter
        class TrafficMonitor; //type: Native::Performance::Monitor::Context::TrafficMonitor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Exporter> exporter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor> traffic_monitor;
                class Profile;

}; // Native::Performance::Monitor::Context


class Native::Performance::Monitor::Context::Default : public ydk::Entity
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

        ydk::YLeaf description; //type: empty
        class Exporter; //type: Native::Performance::Monitor::Context::Default::Exporter
        class TrafficMonitor; //type: Native::Performance::Monitor::Context::Default::TrafficMonitor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default::Exporter> exporter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default::TrafficMonitor> traffic_monitor;
        
}; // Native::Performance::Monitor::Context::Default


class Native::Performance::Monitor::Context::Default::Exporter : public ydk::Entity
{
    public:
        Exporter();
        ~Exporter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf transport; //type: Transport
        ydk::YLeaf vrf; //type: string
        class Transport;

}; // Native::Performance::Monitor::Context::Default::Exporter


class Native::Performance::Monitor::Context::Default::TrafficMonitor : public ydk::Entity
{
    public:
        TrafficMonitor();
        ~TrafficMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Performance::Monitor::Context::Default::TrafficMonitor::All
        class ApplicationResponseTime; //type: Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime
        class ApplicationTrafficStats; //type: Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats
        class ConversationTrafficStats; //type: Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats
        class Media; //type: Native::Performance::Monitor::Context::Default::TrafficMonitor::Media
        class Url; //type: Native::Performance::Monitor::Context::Default::TrafficMonitor::Url
        class ApplicationClientServerStats; //type: Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats
        class ApplicationStats; //type: Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default::TrafficMonitor::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime> application_response_time; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats> application_traffic_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats> conversation_traffic_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default::TrafficMonitor::Media> media; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default::TrafficMonitor::Url> url; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats> application_client_server_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats> application_stats; // presence node
        
}; // Native::Performance::Monitor::Context::Default::TrafficMonitor


class Native::Performance::Monitor::Context::Default::TrafficMonitor::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::Default::TrafficMonitor::All


class Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime : public ydk::Entity
{
    public:
        ApplicationResponseTime();
        ~ApplicationResponseTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime


class Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats : public ydk::Entity
{
    public:
        ApplicationTrafficStats();
        ~ApplicationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationTrafficStats


class Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats : public ydk::Entity
{
    public:
        ConversationTrafficStats();
        ~ConversationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats


class Native::Performance::Monitor::Context::Default::TrafficMonitor::Media : public ydk::Entity
{
    public:
        Media();
        ~Media();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf egress; //type: empty
        ydk::YLeaf ingress; //type: empty
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::Default::TrafficMonitor::Media


class Native::Performance::Monitor::Context::Default::TrafficMonitor::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf sampling_rate; //type: uint32

}; // Native::Performance::Monitor::Context::Default::TrafficMonitor::Url


class Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats : public ydk::Entity
{
    public:
        ApplicationClientServerStats();
        ~ApplicationClientServerStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats


class Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats : public ydk::Entity
{
    public:
        ApplicationStats();
        ~ApplicationStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationStats


class Native::Performance::Monitor::Context::Exporter : public ydk::Entity
{
    public:
        Exporter();
        ~Exporter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf transport; //type: Transport
        ydk::YLeaf vrf; //type: string
        class Transport;

}; // Native::Performance::Monitor::Context::Exporter


class Native::Performance::Monitor::Context::TrafficMonitor : public ydk::Entity
{
    public:
        TrafficMonitor();
        ~TrafficMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Performance::Monitor::Context::TrafficMonitor::All
        class ApplicationResponseTime; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime
        class ApplicationTrafficStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats
        class ConversationTrafficStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats
        class Media; //type: Native::Performance::Monitor::Context::TrafficMonitor::Media
        class Url; //type: Native::Performance::Monitor::Context::TrafficMonitor::Url
        class ApplicationClientServerStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats
        class ApplicationStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime> application_response_time; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats> application_traffic_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats> conversation_traffic_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::Media> media; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::Url> url; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats> application_client_server_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats> application_stats; // presence node
        
}; // Native::Performance::Monitor::Context::TrafficMonitor


class Native::Performance::Monitor::Context::TrafficMonitor::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::TrafficMonitor::All


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime : public ydk::Entity
{
    public:
        ApplicationResponseTime();
        ~ApplicationResponseTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats : public ydk::Entity
{
    public:
        ApplicationTrafficStats();
        ~ApplicationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats


class Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats : public ydk::Entity
{
    public:
        ConversationTrafficStats();
        ~ConversationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats


class Native::Performance::Monitor::Context::TrafficMonitor::Media : public ydk::Entity
{
    public:
        Media();
        ~Media();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf egress; //type: empty
        ydk::YLeaf ingress; //type: empty
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::TrafficMonitor::Media


class Native::Performance::Monitor::Context::TrafficMonitor::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_and; //type: string
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf sampling_rate; //type: uint32

}; // Native::Performance::Monitor::Context::TrafficMonitor::Url


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats : public ydk::Entity
{
    public:
        ApplicationClientServerStats();
        ~ApplicationClientServerStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32
        ydk::YLeaf cache_type; //type: CacheType
        ydk::YLeaf ipv4; //type: empty
        ydk::YLeaf ipv6; //type: empty
        class CacheType;

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats : public ydk::Entity
{
    public:
        ApplicationStats();
        ~ApplicationStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_size; //type: uint32
        ydk::YLeaf class_replace; //type: string
        ydk::YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats


class Native::Performance::Monitor::ObservationPoint : public ydk::Entity
{
    public:
        ObservationPoint();
        ~ObservationPoint();

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

        ydk::YLeaf encrypted_text; //type: empty

}; // Native::Performance::Monitor::ObservationPoint


class Native::Otv : public ydk::Entity
{
    public:
        Otv();
        ~Otv();

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

        ydk::YLeaf site_identifier; //type: one of uint32, string
        class Fragmentation; //type: Native::Otv::Fragmentation
        class Isis; //type: Native::Otv::Isis
        class Site; //type: Native::Otv::Site

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Fragmentation> fragmentation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis> isis;
        ydk::YList site;
        
}; // Native::Otv


class Native::Otv::Fragmentation : public ydk::Entity
{
    public:
        Fragmentation();
        ~Fragmentation();

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

        class JoinInterface; //type: Native::Otv::Fragmentation::JoinInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Fragmentation::JoinInterface> join_interface;
        
}; // Native::Otv::Fragmentation


class Native::Otv::Fragmentation::JoinInterface : public ydk::Entity
{
    public:
        JoinInterface();
        ~JoinInterface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Otv::Fragmentation::JoinInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Otv::Fragmentation::JoinInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Fragmentation::JoinInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Fragmentation::JoinInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Otv::Fragmentation::JoinInterface


class Native::Otv::Fragmentation::JoinInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Otv::Fragmentation::JoinInterface::ATMSubinterface


class Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface


class Native::Otv::Fragmentation::JoinInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Otv::Fragmentation::JoinInterface::LISPSubinterface


class Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface


class Native::Otv::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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

        class Overlay; //type: Native::Otv::Isis::Overlay
        class Site; //type: Native::Otv::Isis::Site

        ydk::YList overlay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Site> site;
        
}; // Native::Otv::Isis


class Native::Otv::Isis::Overlay : public ydk::Entity
{
    public:
        Overlay();
        ~Overlay();

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

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf delayed_deletion_interval; //type: uint32
        ydk::YLeaf lsp_mtu; //type: uint32
        ydk::YLeaf lsp_refresh_interval; //type: uint32
        ydk::YLeaf max_lsp_lifetime; //type: uint32
        class Authentication; //type: Native::Otv::Isis::Overlay::Authentication
        class Default; //type: Native::Otv::Isis::Overlay::Default
        class Hostname; //type: Native::Otv::Isis::Overlay::Hostname
        class LogAdjacencyChanges; //type: Native::Otv::Isis::Overlay::LogAdjacencyChanges
        class LspGenInterval; //type: Native::Otv::Isis::Overlay::LspGenInterval
        class Nsf; //type: Native::Otv::Isis::Overlay::Nsf
        class PrcInterval; //type: Native::Otv::Isis::Overlay::PrcInterval
        class Skeptical; //type: Native::Otv::Isis::Overlay::Skeptical
        class SpfInterval; //type: Native::Otv::Isis::Overlay::SpfInterval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Hostname> hostname;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::LspGenInterval> lsp_gen_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Nsf> nsf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::PrcInterval> prc_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Skeptical> skeptical;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::SpfInterval> spf_interval;
        
}; // Native::Otv::Isis::Overlay


class Native::Otv::Isis::Overlay::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf send_only; //type: empty
        class Mode;

}; // Native::Otv::Isis::Overlay::Authentication


class Native::Otv::Isis::Overlay::Default : public ydk::Entity
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

        ydk::YLeaf delayed_deletion_interval; //type: empty
        ydk::YLeaf log_adjacency_changes; //type: empty
        ydk::YLeaf lsp_gen_interval; //type: empty
        ydk::YLeaf lsp_mtu; //type: empty
        ydk::YLeaf lsp_refresh_interval; //type: empty
        ydk::YLeaf max_lsp_lifetime; //type: empty
        ydk::YLeaf prc_interval; //type: empty
        ydk::YLeaf spf_interval; //type: empty
        class Authentication; //type: Native::Otv::Isis::Overlay::Default::Authentication
        class Hostname; //type: Native::Otv::Isis::Overlay::Default::Hostname
        class Nsf; //type: Native::Otv::Isis::Overlay::Default::Nsf
        class Skeptical; //type: Native::Otv::Isis::Overlay::Default::Skeptical

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Default::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Default::Hostname> hostname;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Default::Nsf> nsf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Default::Skeptical> skeptical;
        
}; // Native::Otv::Isis::Overlay::Default


class Native::Otv::Isis::Overlay::Default::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf send_only; //type: empty
        class Mode;

}; // Native::Otv::Isis::Overlay::Default::Authentication


class Native::Otv::Isis::Overlay::Default::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: empty

}; // Native::Otv::Isis::Overlay::Default::Hostname


class Native::Otv::Isis::Overlay::Default::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cisco; //type: empty
        ydk::YLeaf interval; //type: empty

}; // Native::Otv::Isis::Overlay::Default::Nsf


class Native::Otv::Isis::Overlay::Default::Skeptical : public ydk::Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: empty

}; // Native::Otv::Isis::Overlay::Default::Skeptical


class Native::Otv::Isis::Overlay::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: empty

}; // Native::Otv::Isis::Overlay::Hostname


class Native::Otv::Isis::Overlay::LogAdjacencyChanges : public ydk::Entity
{
    public:
        LogAdjacencyChanges();
        ~LogAdjacencyChanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Otv::Isis::Overlay::LogAdjacencyChanges


class Native::Otv::Isis::Overlay::LspGenInterval : public ydk::Entity
{
    public:
        LspGenInterval();
        ~LspGenInterval();

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
        ydk::YLeaf milliseconds; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Otv::Isis::Overlay::LspGenInterval


class Native::Otv::Isis::Overlay::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cisco; //type: empty
        ydk::YLeaf interval; //type: uint32

}; // Native::Otv::Isis::Overlay::Nsf


class Native::Otv::Isis::Overlay::PrcInterval : public ydk::Entity
{
    public:
        PrcInterval();
        ~PrcInterval();

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
        ydk::YLeaf milliseconds; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Otv::Isis::Overlay::PrcInterval


class Native::Otv::Isis::Overlay::Skeptical : public ydk::Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32

}; // Native::Otv::Isis::Overlay::Skeptical


class Native::Otv::Isis::Overlay::SpfInterval : public ydk::Entity
{
    public:
        SpfInterval();
        ~SpfInterval();

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
        ydk::YLeaf milliseconds; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Otv::Isis::Overlay::SpfInterval


class Native::Otv::Isis::Site : public ydk::Entity
{
    public:
        Site();
        ~Site();

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

        ydk::YLeaf net; //type: string
        class Default; //type: Native::Otv::Isis::Site::Default
        class LogAdjacencyChanges; //type: Native::Otv::Isis::Site::LogAdjacencyChanges
        class Skeptical; //type: Native::Otv::Isis::Site::Skeptical

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Site::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Site::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Site::Skeptical> skeptical;
        
}; // Native::Otv::Isis::Site


class Native::Otv::Isis::Site::Default : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf log_adjacency_changes; //type: empty
        ydk::YLeaf net; //type: empty
        class Skeptical; //type: Native::Otv::Isis::Site::Default::Skeptical

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Isis::Site::Default::Skeptical> skeptical;
        
}; // Native::Otv::Isis::Site::Default


class Native::Otv::Isis::Site::Default::Skeptical : public ydk::Entity
{
    public:
        Skeptical();
        ~Skeptical();

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

        ydk::YLeaf interval; //type: empty

}; // Native::Otv::Isis::Site::Default::Skeptical


class Native::Otv::Isis::Site::LogAdjacencyChanges : public ydk::Entity
{
    public:
        LogAdjacencyChanges();
        ~LogAdjacencyChanges();

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

        ydk::YLeaf all; //type: empty

}; // Native::Otv::Isis::Site::LogAdjacencyChanges


class Native::Otv::Isis::Site::Skeptical : public ydk::Entity
{
    public:
        Skeptical();
        ~Skeptical();

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

        ydk::YLeaf interval; //type: uint32

}; // Native::Otv::Isis::Site::Skeptical


class Native::Otv::Site : public ydk::Entity
{
    public:
        Site();
        ~Site();

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

        ydk::YLeaf bridge_domain; //type: uint16
        class Default; //type: Native::Otv::Site::Default
        class Otv_; //type: Native::Otv::Site::Otv_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Otv_> otv;
        
}; // Native::Otv::Site


class Native::Otv::Site::Default : public ydk::Entity
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

        class Otv_; //type: Native::Otv::Site::Default::Otv_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Default::Otv_> otv;
        
}; // Native::Otv::Site::Default


class Native::Otv::Site::Default::Otv_ : public ydk::Entity
{
    public:
        Otv_();
        ~Otv_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Isis; //type: Native::Otv::Site::Default::Otv_::Isis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Default::Otv_::Isis> isis;
        
}; // Native::Otv::Site::Default::Otv_


class Native::Otv::Site::Default::Otv_::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf hello_multiplier; //type: uint16
        ydk::YLeaf priority; //type: uint8
        class Authentication; //type: Native::Otv::Site::Default::Otv_::Isis::Authentication
        class Hello; //type: Native::Otv::Site::Default::Otv_::Isis::Hello
        class HelloInterval; //type: Native::Otv::Site::Default::Otv_::Isis::HelloInterval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Default::Otv_::Isis::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Default::Otv_::Isis::Hello> hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Default::Otv_::Isis::HelloInterval> hello_interval;
        
}; // Native::Otv::Site::Default::Otv_::Isis


class Native::Otv::Site::Default::Otv_::Isis::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf send_only; //type: empty
        class Mode;

}; // Native::Otv::Site::Default::Otv_::Isis::Authentication


class Native::Otv::Site::Default::Otv_::Isis::Hello : public ydk::Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Padding; //type: Native::Otv::Site::Default::Otv_::Isis::Hello::Padding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Default::Otv_::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Otv::Site::Default::Otv_::Isis::Hello


class Native::Otv::Site::Default::Otv_::Isis::Hello::Padding : public ydk::Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty

}; // Native::Otv::Site::Default::Otv_::Isis::Hello::Padding


class Native::Otv::Site::Default::Otv_::Isis::HelloInterval : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf minimal; //type: empty

}; // Native::Otv::Site::Default::Otv_::Isis::HelloInterval


class Native::Otv::Site::Otv_ : public ydk::Entity
{
    public:
        Otv_();
        ~Otv_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Isis; //type: Native::Otv::Site::Otv_::Isis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis> isis;
        
}; // Native::Otv::Site::Otv_


class Native::Otv::Site::Otv_::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf hello_multiplier; //type: uint16
        ydk::YLeaf priority; //type: uint8
        class Authentication; //type: Native::Otv::Site::Otv_::Isis::Authentication
        class Hello; //type: Native::Otv::Site::Otv_::Isis::Hello
        class HelloInterval; //type: Native::Otv::Site::Otv_::Isis::HelloInterval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Hello> hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::HelloInterval> hello_interval;
        
}; // Native::Otv::Site::Otv_::Isis


class Native::Otv::Site::Otv_::Isis::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf send_only; //type: empty
        class Mode;

}; // Native::Otv::Site::Otv_::Isis::Authentication


class Native::Otv::Site::Otv_::Isis::Hello : public ydk::Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Padding; //type: Native::Otv::Site::Otv_::Isis::Hello::Padding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Otv::Site::Otv_::Isis::Hello


class Native::Otv::Site::Otv_::Isis::Hello::Padding : public ydk::Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty

}; // Native::Otv::Site::Otv_::Isis::Hello::Padding


class Native::Otv::Site::Otv_::Isis::HelloInterval : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf minimal; //type: empty

}; // Native::Otv::Site::Otv_::Isis::HelloInterval


class Native::RemoteManagement : public ydk::Entity
{
    public:
        RemoteManagement();
        ~RemoteManagement();

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

        ydk::YLeaf dmi; //type: empty
        ydk::YLeaf restful_api; //type: boolean

}; // Native::RemoteManagement


class Native::VirtualService : public ydk::Entity
{
    public:
        VirtualService();
        ~VirtualService();

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
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf profile; //type: string
        class Ip; //type: Native::VirtualService::Ip
        class Vnic; //type: Native::VirtualService::Vnic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Vnic> vnic;
        
}; // Native::VirtualService


class Native::VirtualService::Ip : public ydk::Entity
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

        class Shared; //type: Native::VirtualService::Ip::Shared

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Ip::Shared> shared;
        
}; // Native::VirtualService::Ip


class Native::VirtualService::Ip::Shared : public ydk::Entity
{
    public:
        Shared();
        ~Shared();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostInterface; //type: Native::VirtualService::Ip::Shared::HostInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Ip::Shared::HostInterface> host_interface;
        
}; // Native::VirtualService::Ip::Shared


class Native::VirtualService::Ip::Shared::HostInterface : public ydk::Entity
{
    public:
        HostInterface();
        ~HostInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf loopback; //type: uint64
        ydk::YLeaf vlan; //type: uint16

}; // Native::VirtualService::Ip::Shared::HostInterface


class Native::VirtualService::Vnic : public ydk::Entity
{
    public:
        Vnic();
        ~Vnic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gateway; //type: Native::VirtualService::Vnic::Gateway
        class Management; //type: Native::VirtualService::Vnic::Management

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway> gateway;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management> management;
        
}; // Native::VirtualService::Vnic


class Native::VirtualService::Vnic::Gateway : public ydk::Entity
{
    public:
        Gateway();
        ~Gateway();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualPortGroup; //type: Native::VirtualService::Vnic::Gateway::VirtualPortGroup

        ydk::YList virtualportgroup;
        
}; // Native::VirtualService::Vnic::Gateway


class Native::VirtualService::Vnic::Gateway::VirtualPortGroup : public ydk::Entity
{
    public:
        VirtualPortGroup();
        ~VirtualPortGroup();

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
        class Guest; //type: Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest> guest;
        
}; // Native::VirtualService::Vnic::Gateway::VirtualPortGroup


class Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest : public ydk::Entity
{
    public:
        Guest();
        ~Guest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip
        class Ipv6; //type: Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6> ipv6;
        
}; // Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest


class Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip : public ydk::Entity
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

}; // Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ip


class Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6 : public ydk::Entity
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

        ydk::YLeaf address; //type: string

}; // Native::VirtualService::Vnic::Gateway::VirtualPortGroup::Guest::Ipv6


class Native::VirtualService::Vnic::Management : public ydk::Entity
{
    public:
        Management();
        ~Management();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gigabitethernet0; //type: empty
        class Guest; //type: Native::VirtualService::Vnic::Management::Guest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management::Guest> guest;
        
}; // Native::VirtualService::Vnic::Management


class Native::VirtualService::Vnic::Management::Guest : public ydk::Entity
{
    public:
        Guest();
        ~Guest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::VirtualService::Vnic::Management::Guest::Ip
        class Ipv6; //type: Native::VirtualService::Vnic::Management::Guest::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management::Guest::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management::Guest::Ipv6> ipv6;
        
}; // Native::VirtualService::Vnic::Management::Guest


class Native::VirtualService::Vnic::Management::Guest::Ip : public ydk::Entity
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

}; // Native::VirtualService::Vnic::Management::Guest::Ip


class Native::VirtualService::Vnic::Management::Guest::Ipv6 : public ydk::Entity
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

        ydk::YLeaf address; //type: string

}; // Native::VirtualService::Vnic::Management::Guest::Ipv6


class Native::Snmp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ifmib; //type: Native::Snmp::Ifmib
        class Mib; //type: Native::Snmp::Mib

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Ifmib> ifmib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Mib> mib;
        
}; // Native::Snmp


class Native::Snmp::Ifmib : public ydk::Entity
{
    public:
        Ifmib();
        ~Ifmib();

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

        class Ifindex; //type: Native::Snmp::Ifmib::Ifindex
        class Ifalias; //type: Native::Snmp::Ifmib::Ifalias

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Ifmib::Ifindex> ifindex;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Ifmib::Ifalias> ifalias;
        
}; // Native::Snmp::Ifmib


class Native::Snmp::Ifmib::Ifindex : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf persist; //type: empty

}; // Native::Snmp::Ifmib::Ifindex


class Native::Snmp::Ifmib::Ifalias : public ydk::Entity
{
    public:
        Ifalias();
        ~Ifalias();

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

        ydk::YLeaf long_; //type: empty

}; // Native::Snmp::Ifmib::Ifalias


class Native::Snmp::Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

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

        class CommunityMap; //type: Native::Snmp::Mib::CommunityMap
        class Bulkstat; //type: Native::Snmp::Mib::Bulkstat
        class Persist; //type: Native::Snmp::Mib::Persist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Mib::CommunityMap> community_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Mib::Bulkstat> bulkstat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Mib::Persist> persist; // presence node
        
}; // Native::Snmp::Mib


class Native::Snmp::Mib::CommunityMap : public ydk::Entity
{
    public:
        CommunityMap();
        ~CommunityMap();

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

        class CommunityMapList; //type: Native::Snmp::Mib::CommunityMap::CommunityMapList

        ydk::YList community_map_list;
        
}; // Native::Snmp::Mib::CommunityMap


class Native::Snmp::Mib::CommunityMap::CommunityMapList : public ydk::Entity
{
    public:
        CommunityMapList();
        ~CommunityMapList();

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
        ydk::YLeaf engineid; //type: string

}; // Native::Snmp::Mib::CommunityMap::CommunityMapList


class Native::Snmp::Mib::Bulkstat : public ydk::Entity
{
    public:
        Bulkstat();
        ~Bulkstat();

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

        class ObjectList; //type: Native::Snmp::Mib::Bulkstat::ObjectList

        ydk::YList object_list;
        
}; // Native::Snmp::Mib::Bulkstat


class Native::Snmp::Mib::Bulkstat::ObjectList : public ydk::Entity
{
    public:
        ObjectList();
        ~ObjectList();

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

}; // Native::Snmp::Mib::Bulkstat::ObjectList


class Native::Snmp::Mib::Persist : public ydk::Entity
{
    public:
        Persist();
        ~Persist();

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

        ydk::YLeaf persist_enum; //type: PersistEnum
        class PersistEnum;

}; // Native::Snmp::Mib::Persist


class Native::SnmpServer : public ydk::Entity
{
    public:
        SnmpServer();
        ~SnmpServer();

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

        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf contact; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf packetsize; //type: uint32
        ydk::YLeaf queue_length; //type: uint16
        ydk::YLeaf system_shutdown; //type: empty
        ydk::YLeaf tftp_server_list; //type: one of uint8, string
        class Community; //type: Native::SnmpServer::Community
        class Context; //type: Native::SnmpServer::Context
        class Enable; //type: Native::SnmpServer::Enable
        class EngineID; //type: Native::SnmpServer::EngineID
        class Group; //type: Native::SnmpServer::Group
        class Host; //type: Native::SnmpServer::Host
        class Ip; //type: Native::SnmpServer::Ip
        class Ifindex; //type: Native::SnmpServer::Ifindex
        class Manager; //type: Native::SnmpServer::Manager
        class SourceInterface; //type: Native::SnmpServer::SourceInterface
        class Trap; //type: Native::SnmpServer::Trap
        class TrapSource; //type: Native::SnmpServer::TrapSource
        class User; //type: Native::SnmpServer::User
        class View; //type: Native::SnmpServer::View

        ydk::YList community;
        ydk::YList context;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::EngineID> engineid;
        ydk::YList group;
        ydk::YList host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Ifindex> ifindex;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Manager> manager; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface> source_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Trap> trap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource> trap_source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User> user;
        ydk::YList view;
        
}; // Native::SnmpServer


class Native::SnmpServer::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

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
        ydk::YLeaf view; //type: string
        ydk::YLeaf ro; //type: empty
        ydk::YLeaf rw; //type: empty
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf access_list_name; //type: one of uint16, string

}; // Native::SnmpServer::Community


class Native::SnmpServer::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

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

}; // Native::SnmpServer::Context


class Native::SnmpServer::Enable : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class EnableChoice; //type: Native::SnmpServer::Enable::EnableChoice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice> enable_choice;
        
}; // Native::SnmpServer::Enable


class Native::SnmpServer::Enable::EnableChoice : public ydk::Entity
{
    public:
        EnableChoice();
        ~EnableChoice();

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

        ydk::YLeaf informs; //type: empty
        class Traps; //type: Native::SnmpServer::Enable::EnableChoice::Traps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps> traps; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice


class Native::SnmpServer::Enable::EnableChoice::Traps : public ydk::Entity
{
    public:
        Traps();
        ~Traps();

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

        ydk::YLeaf aaa_server; //type: empty
        ydk::YLeaf local_auth; //type: empty
        ydk::YLeaf authenticate_fail; //type: empty
        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf bgp; //type: empty
        ydk::YLeaf bstun; //type: empty
        ydk::YLeaf c2900; //type: empty
        ydk::YLeaf casa; //type: empty
        ydk::YLeaf ccme; //type: empty
        ydk::YLeaf cluster; //type: empty
        ydk::YLeaf channel; //type: empty
        ydk::YLeaf chassis; //type: empty
        ydk::YLeaf cnpd; //type: empty
        ydk::YLeaf config; //type: empty
        ydk::YLeaf copy_config; //type: empty
        ydk::YLeaf config_copy; //type: empty
        ydk::YLeaf config_ctid; //type: empty
        ydk::YLeaf cpu_threshold; //type: empty
        ydk::YLeaf dial; //type: empty
        ydk::YLeaf director; //type: empty
        ydk::YLeaf dlsw; //type: empty
        ydk::YLeaf deauthenticate; //type: empty
        ydk::YLeaf disassociate; //type: empty
        ydk::YLeaf dnis; //type: empty
        ydk::YLeaf dot11_qos; //type: empty
        ydk::YLeaf ds0_busyout; //type: empty
        ydk::YLeaf ds1; //type: empty
        ydk::YLeaf ds1_loopback; //type: empty
        ydk::YLeaf ds3; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf eigrp; //type: empty
        ydk::YLeaf entity_; //type: empty
        ydk::YLeaf ether_oam; //type: empty
        ydk::YLeaf event_manager; //type: empty
        ydk::YLeaf flowmon; //type: empty
        ydk::YLeaf fru_ctrl; //type: empty
        ydk::YLeaf gatekeeper; //type: empty
        ydk::YLeaf hsrp; //type: empty
        ydk::YLeaf icsudsu; //type: empty
        ydk::YLeaf ima; //type: empty
        ydk::YLeaf ipmobile; //type: empty
        ydk::YLeaf ipmulticast; //type: empty
        ydk::YLeaf ipsla; //type: empty
        ydk::YLeaf isis; //type: empty
        ydk::YLeaf module; //type: empty
        ydk::YLeaf msdp; //type: empty
        ydk::YLeaf mvpn; //type: empty
        ydk::YLeaf pppoe; //type: empty
        ydk::YLeaf rep; //type: empty
        ydk::YLeaf resource_policy; //type: empty
        ydk::YLeaf rf; //type: empty
        ydk::YLeaf rogue_ap; //type: empty
        ydk::YLeaf rsvp; //type: empty
        ydk::YLeaf rtr; //type: empty
        ydk::YLeaf sonet; //type: empty
        ydk::YLeaf srst; //type: empty
        ydk::YLeaf srp; //type: empty
        ydk::YLeaf stun; //type: empty
        ydk::YLeaf switch_over; //type: empty
        ydk::YLeaf syslog; //type: empty
        ydk::YLeaf tty; //type: empty
        ydk::YLeaf vlancreate; //type: empty
        ydk::YLeaf vlandelete; //type: empty
        ydk::YLeaf vlan_mac_limit; //type: empty
        ydk::YLeaf vlan_membership; //type: empty
        ydk::YLeaf voice; //type: empty
        ydk::YLeaf vrrp; //type: empty
        ydk::YLeaf vsimaster; //type: empty
        ydk::YLeaf vtp; //type: empty
        ydk::YLeaf wlan_wep; //type: empty
        ydk::YLeaf xgcp; //type: empty
        class TrustsecSxp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp
        class Vswitch; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch
        class TrustsecServer; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer
        class Trustsec; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec
        class TrustsecInterface; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface
        class TrustsecPolicy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy
        class Ospfv3; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3
        class Ike; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike
        class Alarms; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Alarms
        class Atm; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm
        class AuthFramework; //type: Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework
        class BgpConf; //type: Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf
        class Bridge; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Bridge
        class Bulkstat; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat
        class CallHome; //type: Native::SnmpServer::Enable::EnableChoice::Traps::CallHome
        class C6kxbar; //type: Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar
        class Cef; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Cef
        class Cpu; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Cpu
        class Csg; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Csg
        class Dot1x; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x
        class Dsp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Dsp
        class Energywise; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Energywise
        class EntityDiag; //type: Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag
        class Envmon; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Envmon
        class Errdisable; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable
        class Ethernet; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet
        class Firewall; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Firewall
        class Flash; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Flash
        class FlexLinks; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks
        class FrameRelay; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay
        class Ipsec; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec
        class Isakmp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp
        class Isdn; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isdn
        class L2tc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2tc
        class L2tun; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2tun
        class License; //type: Native::SnmpServer::Enable::EnableChoice::Traps::License
        class MacNotification; //type: Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification
        class MacNotification2; //type: Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2
        class Memory; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Memory
        class Mpls; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls
        class Nhrp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp
        class Ospf; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf
        class Pim; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Pim
        class Plogd; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Plogd
        class PortSecurity; //type: Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity
        class PowerEthernet; //type: Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet
        class Pw; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Pw
        class Slb; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Slb
        class Snmp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Snmp
        class Stackwise; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise
        class Stpx; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Stpx
        class Transceiver; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver
        class Udld; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Udld
        class Vrfmib; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib
        class Vstack; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vstack
        class Wireless; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Wireless

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp> trustsec_sxp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch> vswitch; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer> trustsec_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec> trustsec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface> trustsec_interface; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy> trustsec_policy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike> ike;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Alarms> alarms; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm> atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework> auth_framework; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf> bgp_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Bridge> bridge; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat> bulkstat; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::CallHome> call_home; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar> c6kxbar; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Cef> cef;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Cpu> cpu; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Csg> csg; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Dsp> dsp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Energywise> energywise; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag> entity_diag; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Envmon> envmon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable> errdisable; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Firewall> firewall; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Flash> flash; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks> flex_links; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay> frame_relay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec> ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp> isakmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isdn> isdn; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2tc> l2tc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2tun> l2tun;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::License> license; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification> mac_notification; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2> mac_notification2; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Memory> memory; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls> mpls; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp> nhrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Pim> pim; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Plogd> plogd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet> power_ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Pw> pw; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Slb> slb; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise> stackwise; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Stpx> stpx; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver> transceiver;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Udld> udld; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib> vrfmib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vstack> vstack; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Wireless> wireless; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp : public ydk::Entity
{
    public:
        TrustsecSxp();
        ~TrustsecSxp();

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

        ydk::YLeaf binding_conflict; //type: empty
        ydk::YLeaf binding_err; //type: empty
        ydk::YLeaf binding_expn_fail; //type: empty
        ydk::YLeaf conn_config_err; //type: empty
        ydk::YLeaf conn_down; //type: empty
        ydk::YLeaf conn_srcaddr_err; //type: empty
        ydk::YLeaf conn_up; //type: empty
        ydk::YLeaf msg_parse_err; //type: empty
        ydk::YLeaf oper_nodeid_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp


class Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch : public ydk::Entity
{
    public:
        Vswitch();
        ~Vswitch();

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

        class DualActive; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive> dual_active; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch


class Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive : public ydk::Entity
{
    public:
        DualActive();
        ~DualActive();

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

        ydk::YLeaf vsl; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer : public ydk::Entity
{
    public:
        TrustsecServer();
        ~TrustsecServer();

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

        class RadiusServer; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer> radius_server; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer : public ydk::Entity
{
    public:
        RadiusServer();
        ~RadiusServer();

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

        ydk::YLeaf provision_secret; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec : public ydk::Entity
{
    public:
        Trustsec();
        ~Trustsec();

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

        class AuthzFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError> authz_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError : public ydk::Entity
{
    public:
        AuthzFileError();
        ~AuthzFileError();

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

        class CacheFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError> cache_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError : public ydk::Entity
{
    public:
        CacheFileError();
        ~CacheFileError();

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

        class KeystoreFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError> keystore_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError : public ydk::Entity
{
    public:
        KeystoreFileError();
        ~KeystoreFileError();

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

        class KeystoreSyncFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail> keystore_sync_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail : public ydk::Entity
{
    public:
        KeystoreSyncFail();
        ~KeystoreSyncFail();

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

        class RandomNumberFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail> random_number_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail : public ydk::Entity
{
    public:
        RandomNumberFail();
        ~RandomNumberFail();

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

        ydk::YLeaf src_entropy_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface : public ydk::Entity
{
    public:
        TrustsecInterface();
        ~TrustsecInterface();

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

        class Unauthorized; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized> unauthorized; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized : public ydk::Entity
{
    public:
        Unauthorized();
        ~Unauthorized();

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

        class SapFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail> sap_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail : public ydk::Entity
{
    public:
        SapFail();
        ~SapFail();

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

        class AuthcFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail> authc_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail : public ydk::Entity
{
    public:
        AuthcFail();
        ~AuthcFail();

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

        class SupplicantFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail> supplicant_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail : public ydk::Entity
{
    public:
        SupplicantFail();
        ~SupplicantFail();

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

        ydk::YLeaf authz_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy : public ydk::Entity
{
    public:
        TrustsecPolicy();
        ~TrustsecPolicy();

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

        class PeerPolicyUpdated; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated> peer_policy_updated; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated : public ydk::Entity
{
    public:
        PeerPolicyUpdated();
        ~PeerPolicyUpdated();

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

        ydk::YLeaf authz_sgacl_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

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

        ydk::YLeaf state_change; //type: empty
        ydk::YLeaf errors; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike : public ydk::Entity
{
    public:
        Ike();
        ~Ike();

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

        class Policy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy : public ydk::Entity
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

        ydk::YLeaf add; //type: empty
        ydk::YLeaf delete_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf start; //type: empty
        ydk::YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Alarms : public ydk::Entity
{
    public:
        Alarms();
        ~Alarms();

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

        ydk::YLeaf alarm_type; //type: one of uint8, enumeration
        class AlarmType;

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Alarms


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

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

        class Pvc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc
        class Subif; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc> pvc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif> subif; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc : public ydk::Entity
{
    public:
        Pvc();
        ~Pvc();

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

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf fail_interval; //type: uint16
        class Extension; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension> extension;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension : public ydk::Entity
{
    public:
        Extension();
        ~Extension();

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

        ydk::YLeaf down; //type: empty
        ydk::YLeaf up; //type: empty
        ydk::YLeaf mibversion; //type: Mibversion
        class Oam; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam> oam;
                class Mibversion;

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam : public ydk::Entity
{
    public:
        Oam();
        ~Oam();

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

        class Failure; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure> failure;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

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

        ydk::YLeaf loopback; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif : public ydk::Entity
{
    public:
        Subif();
        ~Subif();

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

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf count; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif


class Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework : public ydk::Entity
{
    public:
        AuthFramework();
        ~AuthFramework();

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

        ydk::YLeaf sec_violation; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework


class Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf : public ydk::Entity
{
    public:
        BgpConf();
        ~BgpConf();

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

        ydk::YLeaf cbgp2; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf


class Native::SnmpServer::Enable::EnableChoice::Traps::Bridge : public ydk::Entity
{
    public:
        Bridge();
        ~Bridge();

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

        ydk::YLeaf newroot; //type: empty
        ydk::YLeaf topologychange; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Bridge


class Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat : public ydk::Entity
{
    public:
        Bulkstat();
        ~Bulkstat();

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

        ydk::YLeaf collection; //type: empty
        ydk::YLeaf transfer; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat


class Native::SnmpServer::Enable::EnableChoice::Traps::CallHome : public ydk::Entity
{
    public:
        CallHome();
        ~CallHome();

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

        ydk::YLeaf message_send_fail; //type: empty
        ydk::YLeaf server_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::CallHome


class Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar : public ydk::Entity
{
    public:
        C6kxbar();
        ~C6kxbar();

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

        ydk::YLeaf intbus_crcexcd; //type: empty
        ydk::YLeaf intbus_crcrcvrd; //type: empty
        ydk::YLeaf swbus; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::C6kxbar

class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::Enhanced : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf divert;

};

class Native::Performance::Monitor::Context::Profile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf application_experience;
        static const ydk::Enum::YLeaf application_performance;
        static const ydk::Enum::YLeaf application_statistics;

};

class Native::Performance::Monitor::Context::Default::Exporter::Transport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf udp;

};

class Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationResponseTime::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::Default::TrafficMonitor::ConversationTrafficStats::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::Default::TrafficMonitor::ApplicationClientServerStats::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::Exporter::Transport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf udp;

};

class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::CacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Otv::Isis::Overlay::Authentication::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf text;

};

class Native::Otv::Isis::Overlay::Default::Authentication::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf text;

};

class Native::Otv::Site::Default::Otv_::Isis::Authentication::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf text;

};

class Native::Otv::Site::Otv_::Isis::Authentication::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf text;

};

class Native::Snmp::Mib::Persist::PersistEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cbqos;
        static const ydk::Enum::YLeaf circuit;
        static const ydk::Enum::YLeaf v3mibs;

};

class Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf minor;

};

class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Mibversion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_204_ */

