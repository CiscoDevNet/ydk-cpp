
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_network_instance_1.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_network_instance {

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interfaces()
    :
    interface(this, {"interface_id"})
{

    yang_name = "interfaces"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::~Interfaces()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Interface()
    :
    interface_id{YType::str, "interface-id"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State>())
    , sid_counters(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters>())
    , interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    sid_counters->parent = this;
    interface_ref->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::~Interface()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (sid_counters !=  nullptr && sid_counters->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (sid_counters !=  nullptr && sid_counters->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State>();
        }
        return state;
    }

    if(child_yang_name == "sid-counters")
    {
        if(sid_counters == nullptr)
        {
            sid_counters = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters>();
        }
        return sid_counters;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(sid_counters != nullptr)
    {
        _children["sid-counters"] = sid_counters;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "sid-counters" || name == "interface-ref" || name == "interface-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::Config()
    :
    interface_id{YType::str, "interface-id"}
{

    yang_name = "config"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::State()
    :
    interface_id{YType::str, "interface-id"},
    in_pkts{YType::uint64, "in-pkts"},
    in_octets{YType::uint64, "in-octets"},
    out_pkts{YType::uint64, "out-pkts"},
    out_octets{YType::uint64, "out-octets"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| in_pkts.is_set
	|| in_octets.is_set
	|| out_pkts.is_set
	|| out_octets.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "in-pkts" || name == "in-octets" || name == "out-pkts" || name == "out-octets")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounters()
    :
    sid_counter(this, {"mpls_label"})
{

    yang_name = "sid-counters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::~SidCounters()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sid_counter.len(); index++)
    {
        if(sid_counter[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::has_operation() const
{
    for (std::size_t index=0; index<sid_counter.len(); index++)
    {
        if(sid_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-counter")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter>();
        ent_->parent = this;
        sid_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sid_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-counter")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::SidCounter()
    :
    mpls_label{YType::str, "mpls-label"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State>())
    , forwarding_classes(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses>())
{
    state->parent = this;
    forwarding_classes->parent = this;

    yang_name = "sid-counter"; yang_parent_name = "sid-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::~SidCounter()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::has_data() const
{
    if (is_presence_container) return true;
    return mpls_label.is_set
	|| (state !=  nullptr && state->has_data())
	|| (forwarding_classes !=  nullptr && forwarding_classes->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (forwarding_classes !=  nullptr && forwarding_classes->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-counter";
    ADD_KEY_TOKEN(mpls_label, "mpls-label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State>();
        }
        return state;
    }

    if(child_yang_name == "forwarding-classes")
    {
        if(forwarding_classes == nullptr)
        {
            forwarding_classes = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses>();
        }
        return forwarding_classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(forwarding_classes != nullptr)
    {
        _children["forwarding-classes"] = forwarding_classes;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "forwarding-classes" || name == "mpls-label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::State()
    :
    mpls_label{YType::str, "mpls-label"},
    in_pkts{YType::uint64, "in-pkts"},
    in_octets{YType::uint64, "in-octets"},
    out_pkts{YType::uint64, "out-pkts"},
    out_octets{YType::uint64, "out-octets"}
{

    yang_name = "state"; yang_parent_name = "sid-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::has_data() const
{
    if (is_presence_container) return true;
    return mpls_label.is_set
	|| in_pkts.is_set
	|| in_octets.is_set
	|| out_pkts.is_set
	|| out_octets.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-label" || name == "in-pkts" || name == "in-octets" || name == "out-pkts" || name == "out-octets")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClasses()
    :
    forwarding_class(this, {"exp"})
{

    yang_name = "forwarding-classes"; yang_parent_name = "sid-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::~ForwardingClasses()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forwarding_class.len(); index++)
    {
        if(forwarding_class[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::has_operation() const
{
    for (std::size_t index=0; index<forwarding_class.len(); index++)
    {
        if(forwarding_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-class")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass>();
        ent_->parent = this;
        forwarding_class.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : forwarding_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-class")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::ForwardingClass()
    :
    exp{YType::str, "exp"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State>())
{
    state->parent = this;

    yang_name = "forwarding-class"; yang_parent_name = "forwarding-classes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::~ForwardingClass()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::has_data() const
{
    if (is_presence_container) return true;
    return exp.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-class";
    ADD_KEY_TOKEN(exp, "exp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "exp")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::State()
    :
    exp{YType::uint8, "exp"},
    in_pkts{YType::uint64, "in-pkts"},
    in_octets{YType::uint64, "in-octets"},
    out_pkts{YType::uint64, "out-pkts"},
    out_octets{YType::uint64, "out-octets"}
{

    yang_name = "state"; yang_parent_name = "forwarding-class"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::has_data() const
{
    if (is_presence_container) return true;
    return exp.is_set
	|| in_pkts.is_set
	|| in_octets.is_set
	|| out_pkts.is_set
	|| out_octets.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_octets.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp" || name == "in-pkts" || name == "in-octets" || name == "out-pkts" || name == "out-octets")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::Lsps()
    :
    constrained_path(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath>())
    , unconstrained_path(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath>())
    , static_lsps(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps>())
{
    constrained_path->parent = this;
    unconstrained_path->parent = this;
    static_lsps->parent = this;

    yang_name = "lsps"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::~Lsps()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::has_data() const
{
    if (is_presence_container) return true;
    return (constrained_path !=  nullptr && constrained_path->has_data())
	|| (unconstrained_path !=  nullptr && unconstrained_path->has_data())
	|| (static_lsps !=  nullptr && static_lsps->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::has_operation() const
{
    return is_set(yfilter)
	|| (constrained_path !=  nullptr && constrained_path->has_operation())
	|| (unconstrained_path !=  nullptr && unconstrained_path->has_operation())
	|| (static_lsps !=  nullptr && static_lsps->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constrained-path")
    {
        if(constrained_path == nullptr)
        {
            constrained_path = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath>();
        }
        return constrained_path;
    }

    if(child_yang_name == "unconstrained-path")
    {
        if(unconstrained_path == nullptr)
        {
            unconstrained_path = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath>();
        }
        return unconstrained_path;
    }

    if(child_yang_name == "static-lsps")
    {
        if(static_lsps == nullptr)
        {
            static_lsps = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps>();
        }
        return static_lsps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(constrained_path != nullptr)
    {
        _children["constrained-path"] = constrained_path;
    }

    if(unconstrained_path != nullptr)
    {
        _children["unconstrained-path"] = unconstrained_path;
    }

    if(static_lsps != nullptr)
    {
        _children["static-lsps"] = static_lsps;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constrained-path" || name == "unconstrained-path" || name == "static-lsps")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::ConstrainedPath()
    :
    named_explicit_paths(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths>())
    , tunnels(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels>())
{
    named_explicit_paths->parent = this;
    tunnels->parent = this;

    yang_name = "constrained-path"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::~ConstrainedPath()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::has_data() const
{
    if (is_presence_container) return true;
    return (named_explicit_paths !=  nullptr && named_explicit_paths->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::has_operation() const
{
    return is_set(yfilter)
	|| (named_explicit_paths !=  nullptr && named_explicit_paths->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constrained-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-explicit-paths")
    {
        if(named_explicit_paths == nullptr)
        {
            named_explicit_paths = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths>();
        }
        return named_explicit_paths;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(named_explicit_paths != nullptr)
    {
        _children["named-explicit-paths"] = named_explicit_paths;
    }

    if(tunnels != nullptr)
    {
        _children["tunnels"] = tunnels;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-explicit-paths" || name == "tunnels")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPaths()
    :
    named_explicit_path(this, {"name"})
{

    yang_name = "named-explicit-paths"; yang_parent_name = "constrained-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::~NamedExplicitPaths()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_explicit_path.len(); index++)
    {
        if(named_explicit_path[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::has_operation() const
{
    for (std::size_t index=0; index<named_explicit_path.len(); index++)
    {
        if(named_explicit_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-explicit-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-explicit-path")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath>();
        ent_->parent = this;
        named_explicit_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_explicit_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-explicit-path")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::NamedExplicitPath()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State>())
    , explicit_route_objects(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects>())
{
    config->parent = this;
    state->parent = this;
    explicit_route_objects->parent = this;

    yang_name = "named-explicit-path"; yang_parent_name = "named-explicit-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::~NamedExplicitPath()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (explicit_route_objects !=  nullptr && explicit_route_objects->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (explicit_route_objects !=  nullptr && explicit_route_objects->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-explicit-path";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State>();
        }
        return state;
    }

    if(child_yang_name == "explicit-route-objects")
    {
        if(explicit_route_objects == nullptr)
        {
            explicit_route_objects = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects>();
        }
        return explicit_route_objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(explicit_route_objects != nullptr)
    {
        _children["explicit-route-objects"] = explicit_route_objects;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "explicit-route-objects" || name == "name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::Config()
    :
    name{YType::str, "name"},
    sid_selection_mode{YType::enumeration, "sid-selection-mode"},
    sid_protection_required{YType::boolean, "sid-protection-required"}
{

    yang_name = "config"; yang_parent_name = "named-explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| sid_selection_mode.is_set
	|| sid_protection_required.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sid_selection_mode.yfilter)
	|| ydk::is_set(sid_protection_required.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sid_selection_mode.is_set || is_set(sid_selection_mode.yfilter)) leaf_name_data.push_back(sid_selection_mode.get_name_leafdata());
    if (sid_protection_required.is_set || is_set(sid_protection_required.yfilter)) leaf_name_data.push_back(sid_protection_required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-selection-mode")
    {
        sid_selection_mode = value;
        sid_selection_mode.value_namespace = name_space;
        sid_selection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-protection-required")
    {
        sid_protection_required = value;
        sid_protection_required.value_namespace = name_space;
        sid_protection_required.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sid-selection-mode")
    {
        sid_selection_mode.yfilter = yfilter;
    }
    if(value_path == "sid-protection-required")
    {
        sid_protection_required.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "sid-selection-mode" || name == "sid-protection-required")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::State()
    :
    name{YType::str, "name"},
    sid_selection_mode{YType::enumeration, "sid-selection-mode"},
    sid_protection_required{YType::boolean, "sid-protection-required"}
{

    yang_name = "state"; yang_parent_name = "named-explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| sid_selection_mode.is_set
	|| sid_protection_required.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sid_selection_mode.yfilter)
	|| ydk::is_set(sid_protection_required.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sid_selection_mode.is_set || is_set(sid_selection_mode.yfilter)) leaf_name_data.push_back(sid_selection_mode.get_name_leafdata());
    if (sid_protection_required.is_set || is_set(sid_protection_required.yfilter)) leaf_name_data.push_back(sid_protection_required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-selection-mode")
    {
        sid_selection_mode = value;
        sid_selection_mode.value_namespace = name_space;
        sid_selection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-protection-required")
    {
        sid_protection_required = value;
        sid_protection_required.value_namespace = name_space;
        sid_protection_required.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sid-selection-mode")
    {
        sid_selection_mode.yfilter = yfilter;
    }
    if(value_path == "sid-protection-required")
    {
        sid_protection_required.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "sid-selection-mode" || name == "sid-protection-required")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObjects()
    :
    explicit_route_object(this, {"index_"})
{

    yang_name = "explicit-route-objects"; yang_parent_name = "named-explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::~ExplicitRouteObjects()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<explicit_route_object.len(); index++)
    {
        if(explicit_route_object[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::has_operation() const
{
    for (std::size_t index=0; index<explicit_route_object.len(); index++)
    {
        if(explicit_route_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-route-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-route-object")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject>();
        ent_->parent = this;
        explicit_route_object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : explicit_route_object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-route-object")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::ExplicitRouteObject()
    :
    index_{YType::str, "index"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "explicit-route-object"; yang_parent_name = "explicit-route-objects"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::~ExplicitRouteObject()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-route-object";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::Config()
    :
    address{YType::str, "address"},
    hop_type{YType::enumeration, "hop-type"},
    index_{YType::uint8, "index"}
{

    yang_name = "config"; yang_parent_name = "explicit-route-object"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| hop_type.is_set
	|| index_.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hop-type" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::State()
    :
    address{YType::str, "address"},
    hop_type{YType::enumeration, "hop-type"},
    index_{YType::uint8, "index"}
{

    yang_name = "state"; yang_parent_name = "explicit-route-object"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| hop_type.is_set
	|| index_.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hop-type" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnels()
    :
    tunnel(this, {"name"})
{

    yang_name = "tunnels"; yang_parent_name = "constrained-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::~Tunnels()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel>();
        ent_->parent = this;
        tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Tunnel()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State>())
    , bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth>())
    , p2p_tunnel_attributes(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes>())
{
    config->parent = this;
    state->parent = this;
    bandwidth->parent = this;
    p2p_tunnel_attributes->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::~Tunnel()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (p2p_tunnel_attributes !=  nullptr && p2p_tunnel_attributes->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (p2p_tunnel_attributes !=  nullptr && p2p_tunnel_attributes->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State>();
        }
        return state;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "p2p-tunnel-attributes")
    {
        if(p2p_tunnel_attributes == nullptr)
        {
            p2p_tunnel_attributes = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes>();
        }
        return p2p_tunnel_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(p2p_tunnel_attributes != nullptr)
    {
        _children["p2p-tunnel-attributes"] = p2p_tunnel_attributes;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "bandwidth" || name == "p2p-tunnel-attributes" || name == "name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::Config()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    signaling_protocol{YType::identityref, "signaling-protocol"},
    description{YType::str, "description"},
    admin_status{YType::identityref, "admin-status"},
    preference{YType::uint8, "preference"},
    metric_type{YType::identityref, "metric-type"},
    metric{YType::int32, "metric"},
    shortcut_eligible{YType::boolean, "shortcut-eligible"},
    protection_style_requested{YType::identityref, "protection-style-requested"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"},
    source{YType::str, "source"},
    soft_preemption{YType::boolean, "soft-preemption"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"}
{

    yang_name = "config"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| signaling_protocol.is_set
	|| description.is_set
	|| admin_status.is_set
	|| preference.is_set
	|| metric_type.is_set
	|| metric.is_set
	|| shortcut_eligible.is_set
	|| protection_style_requested.is_set
	|| reoptimize_timer.is_set
	|| source.is_set
	|| soft_preemption.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(shortcut_eligible.yfilter)
	|| ydk::is_set(protection_style_requested.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (shortcut_eligible.is_set || is_set(shortcut_eligible.yfilter)) leaf_name_data.push_back(shortcut_eligible.get_name_leafdata());
    if (protection_style_requested.is_set || is_set(protection_style_requested.yfilter)) leaf_name_data.push_back(protection_style_requested.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shortcut-eligible")
    {
        shortcut_eligible = value;
        shortcut_eligible.value_namespace = name_space;
        shortcut_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested = value;
        protection_style_requested.value_namespace = name_space;
        protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
        reoptimize_timer.value_namespace = name_space;
        reoptimize_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "shortcut-eligible")
    {
        shortcut_eligible.yfilter = yfilter;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "signaling-protocol" || name == "description" || name == "admin-status" || name == "preference" || name == "metric-type" || name == "metric" || name == "shortcut-eligible" || name == "protection-style-requested" || name == "reoptimize-timer" || name == "source" || name == "soft-preemption" || name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::State()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    signaling_protocol{YType::identityref, "signaling-protocol"},
    description{YType::str, "description"},
    admin_status{YType::identityref, "admin-status"},
    preference{YType::uint8, "preference"},
    metric_type{YType::identityref, "metric-type"},
    metric{YType::int32, "metric"},
    shortcut_eligible{YType::boolean, "shortcut-eligible"},
    protection_style_requested{YType::identityref, "protection-style-requested"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"},
    source{YType::str, "source"},
    soft_preemption{YType::boolean, "soft-preemption"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    oper_status{YType::identityref, "oper-status"},
    role{YType::identityref, "role"}
        ,
    counters(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters>())
{
    counters->parent = this;

    yang_name = "state"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| signaling_protocol.is_set
	|| description.is_set
	|| admin_status.is_set
	|| preference.is_set
	|| metric_type.is_set
	|| metric.is_set
	|| shortcut_eligible.is_set
	|| protection_style_requested.is_set
	|| reoptimize_timer.is_set
	|| source.is_set
	|| soft_preemption.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| oper_status.is_set
	|| role.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(shortcut_eligible.yfilter)
	|| ydk::is_set(protection_style_requested.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| ydk::is_set(role.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (shortcut_eligible.is_set || is_set(shortcut_eligible.yfilter)) leaf_name_data.push_back(shortcut_eligible.get_name_leafdata());
    if (protection_style_requested.is_set || is_set(protection_style_requested.yfilter)) leaf_name_data.push_back(protection_style_requested.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shortcut-eligible")
    {
        shortcut_eligible = value;
        shortcut_eligible.value_namespace = name_space;
        shortcut_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested = value;
        protection_style_requested.value_namespace = name_space;
        protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
        reoptimize_timer.value_namespace = name_space;
        reoptimize_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "shortcut-eligible")
    {
        shortcut_eligible.yfilter = yfilter;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "name" || name == "type" || name == "signaling-protocol" || name == "description" || name == "admin-status" || name == "preference" || name == "metric-type" || name == "metric" || name == "shortcut-eligible" || name == "protection-style-requested" || name == "reoptimize-timer" || name == "source" || name == "soft-preemption" || name == "setup-priority" || name == "hold-priority" || name == "oper-status" || name == "role")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::Counters()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"},
    path_changes{YType::uint64, "path-changes"},
    state_changes{YType::uint64, "state-changes"},
    online_time{YType::str, "online-time"},
    current_path_time{YType::str, "current-path-time"},
    next_reoptimization_time{YType::str, "next-reoptimization-time"}
{

    yang_name = "counters"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::~Counters()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::has_data() const
{
    if (is_presence_container) return true;
    return bytes.is_set
	|| packets.is_set
	|| path_changes.is_set
	|| state_changes.is_set
	|| online_time.is_set
	|| current_path_time.is_set
	|| next_reoptimization_time.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(path_changes.yfilter)
	|| ydk::is_set(state_changes.yfilter)
	|| ydk::is_set(online_time.yfilter)
	|| ydk::is_set(current_path_time.yfilter)
	|| ydk::is_set(next_reoptimization_time.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (path_changes.is_set || is_set(path_changes.yfilter)) leaf_name_data.push_back(path_changes.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());
    if (online_time.is_set || is_set(online_time.yfilter)) leaf_name_data.push_back(online_time.get_name_leafdata());
    if (current_path_time.is_set || is_set(current_path_time.yfilter)) leaf_name_data.push_back(current_path_time.get_name_leafdata());
    if (next_reoptimization_time.is_set || is_set(next_reoptimization_time.yfilter)) leaf_name_data.push_back(next_reoptimization_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-changes")
    {
        path_changes = value;
        path_changes.value_namespace = name_space;
        path_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
        state_changes.value_namespace = name_space;
        state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "online-time")
    {
        online_time = value;
        online_time.value_namespace = name_space;
        online_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-path-time")
    {
        current_path_time = value;
        current_path_time.value_namespace = name_space;
        current_path_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-reoptimization-time")
    {
        next_reoptimization_time = value;
        next_reoptimization_time.value_namespace = name_space;
        next_reoptimization_time.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "path-changes")
    {
        path_changes.yfilter = yfilter;
    }
    if(value_path == "state-changes")
    {
        state_changes.yfilter = yfilter;
    }
    if(value_path == "online-time")
    {
        online_time.yfilter = yfilter;
    }
    if(value_path == "current-path-time")
    {
        current_path_time.yfilter = yfilter;
    }
    if(value_path == "next-reoptimization-time")
    {
        next_reoptimization_time.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "path-changes" || name == "state-changes" || name == "online-time" || name == "current-path-time" || name == "next-reoptimization-time")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Bandwidth()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State>())
    , auto_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth>())
{
    config->parent = this;
    state->parent = this;
    auto_bandwidth->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::~Bandwidth()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State>();
        }
        return state;
    }

    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth == nullptr)
        {
            auto_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth>();
        }
        return auto_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(auto_bandwidth != nullptr)
    {
        _children["auto-bandwidth"] = auto_bandwidth;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "auto-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::Config()
    :
    specification_type{YType::enumeration, "specification-type"},
    set_bandwidth{YType::uint64, "set-bandwidth"}
{

    yang_name = "config"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::has_data() const
{
    if (is_presence_container) return true;
    return specification_type.is_set
	|| set_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(specification_type.yfilter)
	|| ydk::is_set(set_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (specification_type.is_set || is_set(specification_type.yfilter)) leaf_name_data.push_back(specification_type.get_name_leafdata());
    if (set_bandwidth.is_set || is_set(set_bandwidth.yfilter)) leaf_name_data.push_back(set_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "specification-type")
    {
        specification_type = value;
        specification_type.value_namespace = name_space;
        specification_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-bandwidth")
    {
        set_bandwidth = value;
        set_bandwidth.value_namespace = name_space;
        set_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "specification-type")
    {
        specification_type.yfilter = yfilter;
    }
    if(value_path == "set-bandwidth")
    {
        set_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "specification-type" || name == "set-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::State()
    :
    specification_type{YType::enumeration, "specification-type"},
    set_bandwidth{YType::uint64, "set-bandwidth"},
    signaled_bandwidth{YType::uint64, "signaled-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return specification_type.is_set
	|| set_bandwidth.is_set
	|| signaled_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(specification_type.yfilter)
	|| ydk::is_set(set_bandwidth.yfilter)
	|| ydk::is_set(signaled_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (specification_type.is_set || is_set(specification_type.yfilter)) leaf_name_data.push_back(specification_type.get_name_leafdata());
    if (set_bandwidth.is_set || is_set(set_bandwidth.yfilter)) leaf_name_data.push_back(set_bandwidth.get_name_leafdata());
    if (signaled_bandwidth.is_set || is_set(signaled_bandwidth.yfilter)) leaf_name_data.push_back(signaled_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "specification-type")
    {
        specification_type = value;
        specification_type.value_namespace = name_space;
        specification_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-bandwidth")
    {
        set_bandwidth = value;
        set_bandwidth.value_namespace = name_space;
        set_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth = value;
        signaled_bandwidth.value_namespace = name_space;
        signaled_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "specification-type")
    {
        specification_type.yfilter = yfilter;
    }
    if(value_path == "set-bandwidth")
    {
        set_bandwidth.yfilter = yfilter;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "specification-type" || name == "set-bandwidth" || name == "signaled-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::AutoBandwidth()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State>())
    , overflow(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow>())
    , underflow(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow>())
{
    config->parent = this;
    state->parent = this;
    overflow->parent = this;
    underflow->parent = this;

    yang_name = "auto-bandwidth"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::~AutoBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (overflow !=  nullptr && overflow->has_data())
	|| (underflow !=  nullptr && underflow->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (overflow !=  nullptr && overflow->has_operation())
	|| (underflow !=  nullptr && underflow->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State>();
        }
        return state;
    }

    if(child_yang_name == "overflow")
    {
        if(overflow == nullptr)
        {
            overflow = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow>();
        }
        return overflow;
    }

    if(child_yang_name == "underflow")
    {
        if(underflow == nullptr)
        {
            underflow = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow>();
        }
        return underflow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(overflow != nullptr)
    {
        _children["overflow"] = overflow;
    }

    if(underflow != nullptr)
    {
        _children["underflow"] = underflow;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "overflow" || name == "underflow")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    min_bw{YType::uint64, "min-bw"},
    max_bw{YType::uint64, "max-bw"},
    adjust_interval{YType::uint32, "adjust-interval"},
    adjust_threshold{YType::uint8, "adjust-threshold"}
{

    yang_name = "config"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| min_bw.is_set
	|| max_bw.is_set
	|| adjust_interval.is_set
	|| adjust_threshold.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(min_bw.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(adjust_interval.yfilter)
	|| ydk::is_set(adjust_threshold.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (adjust_interval.is_set || is_set(adjust_interval.yfilter)) leaf_name_data.push_back(adjust_interval.get_name_leafdata());
    if (adjust_threshold.is_set || is_set(adjust_threshold.yfilter)) leaf_name_data.push_back(adjust_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
        min_bw.value_namespace = name_space;
        min_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
        max_bw.value_namespace = name_space;
        max_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjust-interval")
    {
        adjust_interval = value;
        adjust_interval.value_namespace = name_space;
        adjust_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold = value;
        adjust_threshold.value_namespace = name_space;
        adjust_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "min-bw")
    {
        min_bw.yfilter = yfilter;
    }
    if(value_path == "max-bw")
    {
        max_bw.yfilter = yfilter;
    }
    if(value_path == "adjust-interval")
    {
        adjust_interval.yfilter = yfilter;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "min-bw" || name == "max-bw" || name == "adjust-interval" || name == "adjust-threshold")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::State()
    :
    enabled{YType::boolean, "enabled"},
    min_bw{YType::uint64, "min-bw"},
    max_bw{YType::uint64, "max-bw"},
    adjust_interval{YType::uint32, "adjust-interval"},
    adjust_threshold{YType::uint8, "adjust-threshold"}
{

    yang_name = "state"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| min_bw.is_set
	|| max_bw.is_set
	|| adjust_interval.is_set
	|| adjust_threshold.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(min_bw.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(adjust_interval.yfilter)
	|| ydk::is_set(adjust_threshold.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (adjust_interval.is_set || is_set(adjust_interval.yfilter)) leaf_name_data.push_back(adjust_interval.get_name_leafdata());
    if (adjust_threshold.is_set || is_set(adjust_threshold.yfilter)) leaf_name_data.push_back(adjust_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
        min_bw.value_namespace = name_space;
        min_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
        max_bw.value_namespace = name_space;
        max_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjust-interval")
    {
        adjust_interval = value;
        adjust_interval.value_namespace = name_space;
        adjust_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold = value;
        adjust_threshold.value_namespace = name_space;
        adjust_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "min-bw")
    {
        min_bw.yfilter = yfilter;
    }
    if(value_path == "max-bw")
    {
        max_bw.yfilter = yfilter;
    }
    if(value_path == "adjust-interval")
    {
        adjust_interval.yfilter = yfilter;
    }
    if(value_path == "adjust-threshold")
    {
        adjust_threshold.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "min-bw" || name == "max-bw" || name == "adjust-interval" || name == "adjust-threshold")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Overflow()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "overflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::~Overflow()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    overflow_threshold{YType::uint8, "overflow-threshold"},
    trigger_event_count{YType::uint16, "trigger-event-count"}
{

    yang_name = "config"; yang_parent_name = "overflow"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| overflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold = value;
        overflow_threshold.value_namespace = name_space;
        overflow_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
        trigger_event_count.value_namespace = name_space;
        trigger_event_count.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold.yfilter = yfilter;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "overflow-threshold" || name == "trigger-event-count")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::State()
    :
    enabled{YType::boolean, "enabled"},
    overflow_threshold{YType::uint8, "overflow-threshold"},
    trigger_event_count{YType::uint16, "trigger-event-count"}
{

    yang_name = "state"; yang_parent_name = "overflow"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| overflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold = value;
        overflow_threshold.value_namespace = name_space;
        overflow_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
        trigger_event_count.value_namespace = name_space;
        trigger_event_count.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold.yfilter = yfilter;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "overflow-threshold" || name == "trigger-event-count")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Underflow()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "underflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::~Underflow()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    underflow_threshold{YType::uint8, "underflow-threshold"},
    trigger_event_count{YType::uint16, "trigger-event-count"}
{

    yang_name = "config"; yang_parent_name = "underflow"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| underflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(underflow_threshold.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (underflow_threshold.is_set || is_set(underflow_threshold.yfilter)) leaf_name_data.push_back(underflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold = value;
        underflow_threshold.value_namespace = name_space;
        underflow_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
        trigger_event_count.value_namespace = name_space;
        trigger_event_count.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold.yfilter = yfilter;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "underflow-threshold" || name == "trigger-event-count")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::State()
    :
    enabled{YType::boolean, "enabled"},
    underflow_threshold{YType::uint8, "underflow-threshold"},
    trigger_event_count{YType::uint16, "trigger-event-count"}
{

    yang_name = "state"; yang_parent_name = "underflow"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| underflow_threshold.is_set
	|| trigger_event_count.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(underflow_threshold.yfilter)
	|| ydk::is_set(trigger_event_count.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (underflow_threshold.is_set || is_set(underflow_threshold.yfilter)) leaf_name_data.push_back(underflow_threshold.get_name_leafdata());
    if (trigger_event_count.is_set || is_set(trigger_event_count.yfilter)) leaf_name_data.push_back(trigger_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold = value;
        underflow_threshold.value_namespace = name_space;
        underflow_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count = value;
        trigger_event_count.value_namespace = name_space;
        trigger_event_count.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold")
    {
        underflow_threshold.yfilter = yfilter;
    }
    if(value_path == "trigger-event-count")
    {
        trigger_event_count.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "underflow-threshold" || name == "trigger-event-count")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pTunnelAttributes()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State>())
    , p2p_primary_path(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath>())
    , p2p_secondary_paths(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths>())
{
    config->parent = this;
    state->parent = this;
    p2p_primary_path->parent = this;
    p2p_secondary_paths->parent = this;

    yang_name = "p2p-tunnel-attributes"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::~P2pTunnelAttributes()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (p2p_primary_path !=  nullptr && p2p_primary_path->has_data())
	|| (p2p_secondary_paths !=  nullptr && p2p_secondary_paths->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (p2p_primary_path !=  nullptr && p2p_primary_path->has_operation())
	|| (p2p_secondary_paths !=  nullptr && p2p_secondary_paths->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State>();
        }
        return state;
    }

    if(child_yang_name == "p2p-primary-path")
    {
        if(p2p_primary_path == nullptr)
        {
            p2p_primary_path = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath>();
        }
        return p2p_primary_path;
    }

    if(child_yang_name == "p2p-secondary-paths")
    {
        if(p2p_secondary_paths == nullptr)
        {
            p2p_secondary_paths = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths>();
        }
        return p2p_secondary_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(p2p_primary_path != nullptr)
    {
        _children["p2p-primary-path"] = p2p_primary_path;
    }

    if(p2p_secondary_paths != nullptr)
    {
        _children["p2p-secondary-paths"] = p2p_secondary_paths;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "p2p-primary-path" || name == "p2p-secondary-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::Config()
    :
    destination{YType::str, "destination"}
{

    yang_name = "config"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::State()
    :
    destination{YType::str, "destination"}
{

    yang_name = "state"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath()
    :
    p2p_primary_path(this, {"name"})
{

    yang_name = "p2p-primary-path"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::~P2pPrimaryPath()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<p2p_primary_path.len(); index++)
    {
        if(p2p_primary_path[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::has_operation() const
{
    for (std::size_t index=0; index<p2p_primary_path.len(); index++)
    {
        if(p2p_primary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-primary-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-primary-path")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_>();
        ent_->parent = this;
        p2p_primary_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : p2p_primary_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-primary-path")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::P2pPrimaryPath_()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State>())
    , candidate_secondary_paths(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths>())
    , admin_groups(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups>())
{
    config->parent = this;
    state->parent = this;
    candidate_secondary_paths->parent = this;
    admin_groups->parent = this;

    yang_name = "p2p-primary-path"; yang_parent_name = "p2p-primary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::~P2pPrimaryPath_()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (candidate_secondary_paths !=  nullptr && candidate_secondary_paths->has_data())
	|| (admin_groups !=  nullptr && admin_groups->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (candidate_secondary_paths !=  nullptr && candidate_secondary_paths->has_operation())
	|| (admin_groups !=  nullptr && admin_groups->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-primary-path";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State>();
        }
        return state;
    }

    if(child_yang_name == "candidate-secondary-paths")
    {
        if(candidate_secondary_paths == nullptr)
        {
            candidate_secondary_paths = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths>();
        }
        return candidate_secondary_paths;
    }

    if(child_yang_name == "admin-groups")
    {
        if(admin_groups == nullptr)
        {
            admin_groups = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups>();
        }
        return admin_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(candidate_secondary_paths != nullptr)
    {
        _children["candidate-secondary-paths"] = candidate_secondary_paths;
    }

    if(admin_groups != nullptr)
    {
        _children["admin-groups"] = admin_groups;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "candidate-secondary-paths" || name == "admin-groups" || name == "name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::Config()
    :
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    use_cspf{YType::boolean, "use-cspf"},
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    path_computation_server{YType::str, "path-computation-server"},
    explicit_path_name{YType::str, "explicit-path-name"},
    preference{YType::uint8, "preference"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    retry_timer{YType::uint16, "retry-timer"}
{

    yang_name = "config"; yang_parent_name = "p2p-primary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path_computation_method.is_set
	|| use_cspf.is_set
	|| cspf_tiebreaker.is_set
	|| path_computation_server.is_set
	|| explicit_path_name.is_set
	|| preference.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| retry_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(use_cspf.yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(retry_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());
    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
        path_computation_method.value_namespace = name_space;
        path_computation_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path-computation-method" || name == "use-cspf" || name == "cspf-tiebreaker" || name == "path-computation-server" || name == "explicit-path-name" || name == "preference" || name == "setup-priority" || name == "hold-priority" || name == "retry-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::State()
    :
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    use_cspf{YType::boolean, "use-cspf"},
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    path_computation_server{YType::str, "path-computation-server"},
    explicit_path_name{YType::str, "explicit-path-name"},
    preference{YType::uint8, "preference"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    retry_timer{YType::uint16, "retry-timer"},
    associated_rsvp_session{YType::str, "associated-rsvp-session"}
{

    yang_name = "state"; yang_parent_name = "p2p-primary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path_computation_method.is_set
	|| use_cspf.is_set
	|| cspf_tiebreaker.is_set
	|| path_computation_server.is_set
	|| explicit_path_name.is_set
	|| preference.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| retry_timer.is_set
	|| associated_rsvp_session.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(use_cspf.yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(retry_timer.yfilter)
	|| ydk::is_set(associated_rsvp_session.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());
    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (associated_rsvp_session.is_set || is_set(associated_rsvp_session.yfilter)) leaf_name_data.push_back(associated_rsvp_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
        path_computation_method.value_namespace = name_space;
        path_computation_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "associated-rsvp-session")
    {
        associated_rsvp_session = value;
        associated_rsvp_session.value_namespace = name_space;
        associated_rsvp_session.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
    if(value_path == "associated-rsvp-session")
    {
        associated_rsvp_session.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path-computation-method" || name == "use-cspf" || name == "cspf-tiebreaker" || name == "path-computation-server" || name == "explicit-path-name" || name == "preference" || name == "setup-priority" || name == "hold-priority" || name == "retry-timer" || name == "associated-rsvp-session")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPaths()
    :
    candidate_secondary_path(this, {"secondary_path"})
{

    yang_name = "candidate-secondary-paths"; yang_parent_name = "p2p-primary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::~CandidateSecondaryPaths()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<candidate_secondary_path.len(); index++)
    {
        if(candidate_secondary_path[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::has_operation() const
{
    for (std::size_t index=0; index<candidate_secondary_path.len(); index++)
    {
        if(candidate_secondary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-secondary-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-secondary-path")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath>();
        ent_->parent = this;
        candidate_secondary_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : candidate_secondary_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-secondary-path")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::CandidateSecondaryPath()
    :
    secondary_path{YType::str, "secondary-path"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "candidate-secondary-path"; yang_parent_name = "candidate-secondary-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::~CandidateSecondaryPath()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::has_data() const
{
    if (is_presence_container) return true;
    return secondary_path.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_path.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-secondary-path";
    ADD_KEY_TOKEN(secondary_path, "secondary-path");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "secondary-path")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::Config()
    :
    secondary_path{YType::str, "secondary-path"},
    priority{YType::uint16, "priority"}
{

    yang_name = "config"; yang_parent_name = "candidate-secondary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::has_data() const
{
    if (is_presence_container) return true;
    return secondary_path.is_set
	|| priority.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_path.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-path" || name == "priority")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::State()
    :
    secondary_path{YType::str, "secondary-path"},
    priority{YType::uint16, "priority"},
    active{YType::boolean, "active"}
{

    yang_name = "state"; yang_parent_name = "candidate-secondary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::has_data() const
{
    if (is_presence_container) return true;
    return secondary_path.is_set
	|| priority.is_set
	|| active.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_path.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-path" || name == "priority" || name == "active")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::AdminGroups()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "admin-groups"; yang_parent_name = "p2p-primary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::~AdminGroups()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::Config()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "config"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::has_operation() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_group.yfilter)
	|| ydk::is_set(include_all_group.yfilter)
	|| ydk::is_set(include_any_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-group")
    {
        exclude_group.yfilter = yfilter;
    }
    if(value_path == "include-all-group")
    {
        include_all_group.yfilter = yfilter;
    }
    if(value_path == "include-any-group")
    {
        include_any_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::State()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "state"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::has_operation() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_group.yfilter)
	|| ydk::is_set(include_all_group.yfilter)
	|| ydk::is_set(include_any_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-group")
    {
        exclude_group.yfilter = yfilter;
    }
    if(value_path == "include-all-group")
    {
        include_all_group.yfilter = yfilter;
    }
    if(value_path == "include-any-group")
    {
        include_any_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPaths()
    :
    p2p_secondary_path(this, {"name"})
{

    yang_name = "p2p-secondary-paths"; yang_parent_name = "p2p-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::~P2pSecondaryPaths()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<p2p_secondary_path.len(); index++)
    {
        if(p2p_secondary_path[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::has_operation() const
{
    for (std::size_t index=0; index<p2p_secondary_path.len(); index++)
    {
        if(p2p_secondary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-secondary-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-secondary-path")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath>();
        ent_->parent = this;
        p2p_secondary_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : p2p_secondary_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-secondary-path")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::P2pSecondaryPath()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State>())
    , admin_groups(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups>())
{
    config->parent = this;
    state->parent = this;
    admin_groups->parent = this;

    yang_name = "p2p-secondary-path"; yang_parent_name = "p2p-secondary-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::~P2pSecondaryPath()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (admin_groups !=  nullptr && admin_groups->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (admin_groups !=  nullptr && admin_groups->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-secondary-path";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State>();
        }
        return state;
    }

    if(child_yang_name == "admin-groups")
    {
        if(admin_groups == nullptr)
        {
            admin_groups = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups>();
        }
        return admin_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(admin_groups != nullptr)
    {
        _children["admin-groups"] = admin_groups;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "admin-groups" || name == "name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::Config()
    :
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    use_cspf{YType::boolean, "use-cspf"},
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    path_computation_server{YType::str, "path-computation-server"},
    explicit_path_name{YType::str, "explicit-path-name"},
    preference{YType::uint8, "preference"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    retry_timer{YType::uint16, "retry-timer"}
{

    yang_name = "config"; yang_parent_name = "p2p-secondary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path_computation_method.is_set
	|| use_cspf.is_set
	|| cspf_tiebreaker.is_set
	|| path_computation_server.is_set
	|| explicit_path_name.is_set
	|| preference.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| retry_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(use_cspf.yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(retry_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());
    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
        path_computation_method.value_namespace = name_space;
        path_computation_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path-computation-method" || name == "use-cspf" || name == "cspf-tiebreaker" || name == "path-computation-server" || name == "explicit-path-name" || name == "preference" || name == "setup-priority" || name == "hold-priority" || name == "retry-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::State()
    :
    name{YType::str, "name"},
    path_computation_method{YType::identityref, "path-computation-method"},
    use_cspf{YType::boolean, "use-cspf"},
    cspf_tiebreaker{YType::enumeration, "cspf-tiebreaker"},
    path_computation_server{YType::str, "path-computation-server"},
    explicit_path_name{YType::str, "explicit-path-name"},
    preference{YType::uint8, "preference"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    retry_timer{YType::uint16, "retry-timer"},
    associated_rsvp_session{YType::str, "associated-rsvp-session"}
{

    yang_name = "state"; yang_parent_name = "p2p-secondary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path_computation_method.is_set
	|| use_cspf.is_set
	|| cspf_tiebreaker.is_set
	|| path_computation_server.is_set
	|| explicit_path_name.is_set
	|| preference.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| retry_timer.is_set
	|| associated_rsvp_session.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(use_cspf.yfilter)
	|| ydk::is_set(cspf_tiebreaker.yfilter)
	|| ydk::is_set(path_computation_server.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(retry_timer.yfilter)
	|| ydk::is_set(associated_rsvp_session.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (use_cspf.is_set || is_set(use_cspf.yfilter)) leaf_name_data.push_back(use_cspf.get_name_leafdata());
    if (cspf_tiebreaker.is_set || is_set(cspf_tiebreaker.yfilter)) leaf_name_data.push_back(cspf_tiebreaker.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (associated_rsvp_session.is_set || is_set(associated_rsvp_session.yfilter)) leaf_name_data.push_back(associated_rsvp_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
        path_computation_method.value_namespace = name_space;
        path_computation_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-cspf")
    {
        use_cspf = value;
        use_cspf.value_namespace = name_space;
        use_cspf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker = value;
        cspf_tiebreaker.value_namespace = name_space;
        cspf_tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "associated-rsvp-session")
    {
        associated_rsvp_session = value;
        associated_rsvp_session.value_namespace = name_space;
        associated_rsvp_session.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "use-cspf")
    {
        use_cspf.yfilter = yfilter;
    }
    if(value_path == "cspf-tiebreaker")
    {
        cspf_tiebreaker.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
    if(value_path == "associated-rsvp-session")
    {
        associated_rsvp_session.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path-computation-method" || name == "use-cspf" || name == "cspf-tiebreaker" || name == "path-computation-server" || name == "explicit-path-name" || name == "preference" || name == "setup-priority" || name == "hold-priority" || name == "retry-timer" || name == "associated-rsvp-session")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::AdminGroups()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "admin-groups"; yang_parent_name = "p2p-secondary-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::~AdminGroups()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::Config()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "config"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::has_operation() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_group.yfilter)
	|| ydk::is_set(include_all_group.yfilter)
	|| ydk::is_set(include_any_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-group")
    {
        exclude_group.yfilter = yfilter;
    }
    if(value_path == "include-all-group")
    {
        include_all_group.yfilter = yfilter;
    }
    if(value_path == "include-any-group")
    {
        include_any_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::State()
    :
    exclude_group{YType::str, "exclude-group"},
    include_all_group{YType::str, "include-all-group"},
    include_any_group{YType::str, "include-any-group"}
{

    yang_name = "state"; yang_parent_name = "admin-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::has_operation() const
{
    for (auto const & leaf : exclude_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_all_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : include_any_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_group.yfilter)
	|| ydk::is_set(include_all_group.yfilter)
	|| ydk::is_set(include_any_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto exclude_group_name_datas = exclude_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_group_name_datas.begin(), exclude_group_name_datas.end());
    auto include_all_group_name_datas = include_all_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_all_group_name_datas.begin(), include_all_group_name_datas.end());
    auto include_any_group_name_datas = include_any_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_any_group_name_datas.begin(), include_any_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-group")
    {
        exclude_group.append(value);
    }
    if(value_path == "include-all-group")
    {
        include_all_group.append(value);
    }
    if(value_path == "include-any-group")
    {
        include_any_group.append(value);
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-group")
    {
        exclude_group.yfilter = yfilter;
    }
    if(value_path == "include-all-group")
    {
        include_all_group.yfilter = yfilter;
    }
    if(value_path == "include-any-group")
    {
        include_any_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-group" || name == "include-all-group" || name == "include-any-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::UnconstrainedPath()
    :
    path_setup_protocol(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol>())
{
    path_setup_protocol->parent = this;

    yang_name = "unconstrained-path"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::~UnconstrainedPath()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::has_data() const
{
    if (is_presence_container) return true;
    return (path_setup_protocol !=  nullptr && path_setup_protocol->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::has_operation() const
{
    return is_set(yfilter)
	|| (path_setup_protocol !=  nullptr && path_setup_protocol->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unconstrained-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-setup-protocol")
    {
        if(path_setup_protocol == nullptr)
        {
            path_setup_protocol = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol>();
        }
        return path_setup_protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_setup_protocol != nullptr)
    {
        _children["path-setup-protocol"] = path_setup_protocol;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-setup-protocol")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::PathSetupProtocol()
    :
    ldp(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp>())
{
    ldp->parent = this;

    yang_name = "path-setup-protocol"; yang_parent_name = "unconstrained-path"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::~PathSetupProtocol()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::has_data() const
{
    if (is_presence_container) return true;
    return (ldp !=  nullptr && ldp->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (ldp !=  nullptr && ldp->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-setup-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp>();
        }
        return ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldp != nullptr)
    {
        _children["ldp"] = ldp;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Ldp()
{

    yang_name = "ldp"; yang_parent_name = "path-setup-protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::~Ldp()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::has_operation() const
{
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsps()
    :
    static_lsp(this, {"name"})
{

    yang_name = "static-lsps"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::~StaticLsps()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_lsp.len(); index++)
    {
        if(static_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::has_operation() const
{
    for (std::size_t index=0; index<static_lsp.len(); index++)
    {
        if(static_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-lsp")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp>();
        ent_->parent = this;
        static_lsp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : static_lsp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-lsp")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::StaticLsp()
    :
    name{YType::str, "name"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State>())
    , ingress(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress>())
    , transit(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit>())
    , egress(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress>())
{
    config->parent = this;
    state->parent = this;
    ingress->parent = this;
    transit->parent = this;
    egress->parent = this;

    yang_name = "static-lsp"; yang_parent_name = "static-lsps"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::~StaticLsp()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ingress !=  nullptr && ingress->has_data())
	|| (transit !=  nullptr && transit->has_data())
	|| (egress !=  nullptr && egress->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (transit !=  nullptr && transit->has_operation())
	|| (egress !=  nullptr && egress->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-lsp";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State>();
        }
        return state;
    }

    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "transit")
    {
        if(transit == nullptr)
        {
            transit = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit>();
        }
        return transit;
    }

    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress>();
        }
        return egress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(ingress != nullptr)
    {
        _children["ingress"] = ingress;
    }

    if(transit != nullptr)
    {
        _children["transit"] = transit;
    }

    if(egress != nullptr)
    {
        _children["egress"] = egress;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ingress" || name == "transit" || name == "egress" || name == "name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::Config()
    :
    name{YType::str, "name"}
{

    yang_name = "config"; yang_parent_name = "static-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State::State()
    :
    name{YType::str, "name"}
{

    yang_name = "state"; yang_parent_name = "static-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Ingress()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ingress"; yang_parent_name = "static-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::~Ingress()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::Config()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "config"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::State()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "state"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Transit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "transit"; yang_parent_name = "static-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::~Transit()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::Config()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "config"; yang_parent_name = "transit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::State()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "state"; yang_parent_name = "transit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Egress()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "egress"; yang_parent_name = "static-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::~Egress()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::Config()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "config"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::State()
    :
    next_hop{YType::str, "next-hop"},
    incoming_label{YType::str, "incoming-label"},
    push_label{YType::str, "push-label"}
{

    yang_name = "state"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| incoming_label.is_set
	|| push_label.is_set;
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(push_label.yfilter);
}

std::string NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (push_label.is_set || is_set(push_label.yfilter)) leaf_name_data.push_back(push_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-label")
    {
        push_label = value;
        push_label.value_namespace = name_space;
        push_label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "push-label")
    {
        push_label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "incoming-label" || name == "push-label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::SegmentRouting()
    :
    srgbs(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs>())
    , srlbs(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs>())
{
    srgbs->parent = this;
    srlbs->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::SegmentRouting::~SegmentRouting()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return (srgbs !=  nullptr && srgbs->has_data())
	|| (srlbs !=  nullptr && srlbs->has_data());
}

bool NetworkInstances::NetworkInstance::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (srgbs !=  nullptr && srgbs->has_operation())
	|| (srlbs !=  nullptr && srlbs->has_operation());
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srgbs")
    {
        if(srgbs == nullptr)
        {
            srgbs = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs>();
        }
        return srgbs;
    }

    if(child_yang_name == "srlbs")
    {
        if(srlbs == nullptr)
        {
            srlbs = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs>();
        }
        return srlbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srgbs != nullptr)
    {
        _children["srgbs"] = srgbs;
    }

    if(srlbs != nullptr)
    {
        _children["srlbs"] = srlbs;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srgbs" || name == "srlbs")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgbs()
    :
    srgb(this, {"local_id"})
{

    yang_name = "srgbs"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::~Srgbs()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srgb.len(); index++)
    {
        if(srgb[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::has_operation() const
{
    for (std::size_t index=0; index<srgb.len(); index++)
    {
        if(srgb[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srgb")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb>();
        ent_->parent = this;
        srgb.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srgb.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srgb")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Srgb()
    :
    local_id{YType::str, "local-id"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "srgb"; yang_parent_name = "srgbs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::~Srgb()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::has_data() const
{
    if (is_presence_container) return true;
    return local_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb";
    ADD_KEY_TOKEN(local_id, "local-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "local-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::Config()
    :
    local_id{YType::str, "local-id"},
    dataplane_type{YType::enumeration, "dataplane-type"},
    mpls_label_blocks{YType::str, "mpls-label-blocks"},
    ipv6_prefixes{YType::str, "ipv6-prefixes"}
{

    yang_name = "config"; yang_parent_name = "srgb"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mpls_label_blocks.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_prefixes.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_id.is_set
	|| dataplane_type.is_set;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::has_operation() const
{
    for (auto const & leaf : mpls_label_blocks.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6_prefixes.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(dataplane_type.yfilter)
	|| ydk::is_set(mpls_label_blocks.yfilter)
	|| ydk::is_set(ipv6_prefixes.yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (dataplane_type.is_set || is_set(dataplane_type.yfilter)) leaf_name_data.push_back(dataplane_type.get_name_leafdata());

    auto mpls_label_blocks_name_datas = mpls_label_blocks.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_label_blocks_name_datas.begin(), mpls_label_blocks_name_datas.end());
    auto ipv6_prefixes_name_datas = ipv6_prefixes.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_prefixes_name_datas.begin(), ipv6_prefixes_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type = value;
        dataplane_type.value_namespace = name_space;
        dataplane_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-blocks")
    {
        mpls_label_blocks.append(value);
    }
    if(value_path == "ipv6-prefixes")
    {
        ipv6_prefixes.append(value);
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label-blocks")
    {
        mpls_label_blocks.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefixes")
    {
        ipv6_prefixes.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "dataplane-type" || name == "mpls-label-blocks" || name == "ipv6-prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::State()
    :
    local_id{YType::str, "local-id"},
    dataplane_type{YType::enumeration, "dataplane-type"},
    mpls_label_blocks{YType::str, "mpls-label-blocks"},
    ipv6_prefixes{YType::str, "ipv6-prefixes"},
    size{YType::uint32, "size"},
    used{YType::uint32, "used"}
{

    yang_name = "state"; yang_parent_name = "srgb"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::~State()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mpls_label_blocks.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_prefixes.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_id.is_set
	|| dataplane_type.is_set
	|| size.is_set
	|| used.is_set;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::has_operation() const
{
    for (auto const & leaf : mpls_label_blocks.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6_prefixes.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(dataplane_type.yfilter)
	|| ydk::is_set(mpls_label_blocks.yfilter)
	|| ydk::is_set(ipv6_prefixes.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(used.yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (dataplane_type.is_set || is_set(dataplane_type.yfilter)) leaf_name_data.push_back(dataplane_type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());

    auto mpls_label_blocks_name_datas = mpls_label_blocks.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_label_blocks_name_datas.begin(), mpls_label_blocks_name_datas.end());
    auto ipv6_prefixes_name_datas = ipv6_prefixes.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_prefixes_name_datas.begin(), ipv6_prefixes_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type = value;
        dataplane_type.value_namespace = name_space;
        dataplane_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-blocks")
    {
        mpls_label_blocks.append(value);
    }
    if(value_path == "ipv6-prefixes")
    {
        ipv6_prefixes.append(value);
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label-blocks")
    {
        mpls_label_blocks.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefixes")
    {
        ipv6_prefixes.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srgbs::Srgb::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "dataplane-type" || name == "mpls-label-blocks" || name == "ipv6-prefixes" || name == "size" || name == "used")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlbs()
    :
    srlb(this, {"local_id"})
{

    yang_name = "srlbs"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::~Srlbs()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlb.len(); index++)
    {
        if(srlb[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::has_operation() const
{
    for (std::size_t index=0; index<srlb.len(); index++)
    {
        if(srlb[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlb")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb>();
        ent_->parent = this;
        srlb.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srlb.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlb")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Srlb()
    :
    local_id{YType::str, "local-id"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "srlb"; yang_parent_name = "srlbs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::~Srlb()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::has_data() const
{
    if (is_presence_container) return true;
    return local_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlb";
    ADD_KEY_TOKEN(local_id, "local-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "local-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::Config()
    :
    local_id{YType::str, "local-id"},
    dataplane_type{YType::enumeration, "dataplane-type"},
    mpls_label_block{YType::str, "mpls-label-block"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "config"; yang_parent_name = "srlb"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::has_data() const
{
    if (is_presence_container) return true;
    return local_id.is_set
	|| dataplane_type.is_set
	|| mpls_label_block.is_set
	|| ipv6_prefix.is_set;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(dataplane_type.yfilter)
	|| ydk::is_set(mpls_label_block.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (dataplane_type.is_set || is_set(dataplane_type.yfilter)) leaf_name_data.push_back(dataplane_type.get_name_leafdata());
    if (mpls_label_block.is_set || is_set(mpls_label_block.yfilter)) leaf_name_data.push_back(mpls_label_block.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type = value;
        dataplane_type.value_namespace = name_space;
        dataplane_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-block")
    {
        mpls_label_block = value;
        mpls_label_block.value_namespace = name_space;
        mpls_label_block.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label-block")
    {
        mpls_label_block.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "dataplane-type" || name == "mpls-label-block" || name == "ipv6-prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::State()
    :
    local_id{YType::str, "local-id"},
    dataplane_type{YType::enumeration, "dataplane-type"},
    mpls_label_block{YType::str, "mpls-label-block"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "state"; yang_parent_name = "srlb"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::~State()
{
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::has_data() const
{
    if (is_presence_container) return true;
    return local_id.is_set
	|| dataplane_type.is_set
	|| mpls_label_block.is_set
	|| ipv6_prefix.is_set;
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(dataplane_type.yfilter)
	|| ydk::is_set(mpls_label_block.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (dataplane_type.is_set || is_set(dataplane_type.yfilter)) leaf_name_data.push_back(dataplane_type.get_name_leafdata());
    if (mpls_label_block.is_set || is_set(mpls_label_block.yfilter)) leaf_name_data.push_back(mpls_label_block.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type = value;
        dataplane_type.value_namespace = name_space;
        dataplane_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-block")
    {
        mpls_label_block = value;
        mpls_label_block.value_namespace = name_space;
        mpls_label_block.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "dataplane-type")
    {
        dataplane_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label-block")
    {
        mpls_label_block.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::SegmentRouting::Srlbs::Srlb::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-id" || name == "dataplane-type" || name == "mpls-label-block" || name == "ipv6-prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlans()
    :
    vlan(this, {"vlan_id"})
{

    yang_name = "vlans"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Vlans::~Vlans()
{
}

bool NetworkInstances::NetworkInstance::Vlans::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Vlans::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Vlans::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlans";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Vlans::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Vlans::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Vlans::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Vlans::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Vlans::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Vlan()
    :
    vlan_id{YType::str, "vlan-id"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::State>())
    , members(std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members>())
{
    config->parent = this;
    state->parent = this;
    members->parent = this;

    yang_name = "vlan"; yang_parent_name = "vlans"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Vlans::Vlan::~Vlan()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (members !=  nullptr && members->has_data());
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (members !=  nullptr && members->has_operation());
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan_id, "vlan-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::State>();
        }
        return state;
    }

    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(members != nullptr)
    {
        _children["members"] = members;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "members" || name == "vlan-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Config::Config()
    :
    vlan_id{YType::uint16, "vlan-id"},
    name{YType::str, "name"},
    status{YType::enumeration, "status"},
    tpid{YType::identityref, "tpid"}
{

    yang_name = "config"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Config::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| name.is_set
	|| status.is_set
	|| tpid.is_set;
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(tpid.yfilter);
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tpid.is_set || is_set(tpid.yfilter)) leaf_name_data.push_back(tpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpid")
    {
        tpid = value;
        tpid.value_namespace = name_space;
        tpid.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "tpid")
    {
        tpid.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "name" || name == "status" || name == "tpid")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::State::State()
    :
    vlan_id{YType::uint16, "vlan-id"},
    name{YType::str, "name"},
    status{YType::enumeration, "status"},
    tpid{YType::identityref, "tpid"}
{

    yang_name = "state"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Vlans::Vlan::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::State::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| name.is_set
	|| status.is_set
	|| tpid.is_set;
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(tpid.yfilter);
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tpid.is_set || is_set(tpid.yfilter)) leaf_name_data.push_back(tpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpid")
    {
        tpid = value;
        tpid.value_namespace = name_space;
        tpid.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "tpid")
    {
        tpid.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "name" || name == "status" || name == "tpid")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Members()
    :
    member(this, {})
{

    yang_name = "members"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::~Members()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member.len(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::has_operation() const
{
    for (std::size_t index=0; index<member.len(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member>();
        ent_->parent = this;
        member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::Member()
    :
    interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef>())
{
    interface_ref->parent = this;

    yang_name = "member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::~Member()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::has_data() const
{
    if (is_presence_container) return true;
    return (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::has_operation() const
{
    return is_set(yfilter)
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-ref")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::InterfaceRef()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State>())
{
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Vlans::Vlan::Members::Member::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Afts()
    :
    ipv4_unicast(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast>())
    , ipv6_unicast(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast>())
    , policy_forwarding(std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding>())
    , mpls(std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls>())
    , ethernet(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet>())
{
    ipv4_unicast->parent = this;
    ipv6_unicast->parent = this;
    policy_forwarding->parent = this;
    mpls->parent = this;
    ethernet->parent = this;

    yang_name = "afts"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::~Afts()
{
}

bool NetworkInstances::NetworkInstance::Afts::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4_unicast !=  nullptr && ipv4_unicast->has_data())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_data())
	|| (policy_forwarding !=  nullptr && policy_forwarding->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation())
	|| (policy_forwarding !=  nullptr && policy_forwarding->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    if(child_yang_name == "policy-forwarding")
    {
        if(policy_forwarding == nullptr)
        {
            policy_forwarding = std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding>();
        }
        return policy_forwarding;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_unicast != nullptr)
    {
        _children["ipv4-unicast"] = ipv4_unicast;
    }

    if(ipv6_unicast != nullptr)
    {
        _children["ipv6-unicast"] = ipv6_unicast;
    }

    if(policy_forwarding != nullptr)
    {
        _children["policy-forwarding"] = policy_forwarding;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast" || name == "ipv6-unicast" || name == "policy-forwarding" || name == "mpls" || name == "ethernet")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Unicast()
    :
    ipv4_entry(this, {"prefix"})
{

    yang_name = "ipv4-unicast"; yang_parent_name = "afts"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::~Ipv4Unicast()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_entry.len(); index++)
    {
        if(ipv4_entry[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::has_operation() const
{
    for (std::size_t index=0; index<ipv4_entry.len(); index++)
    {
        if(ipv4_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-entry")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry>();
        ent_->parent = this;
        ipv4_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-entry")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Ipv4Entry()
    :
    prefix{YType::str, "prefix"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State>())
    , next_hops(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops>())
{
    config->parent = this;
    state->parent = this;
    next_hops->parent = this;

    yang_name = "ipv4-entry"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::~Ipv4Entry()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (next_hops !=  nullptr && next_hops->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (next_hops !=  nullptr && next_hops->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-entry";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State>();
        }
        return state;
    }

    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops>();
        }
        return next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(next_hops != nullptr)
    {
        _children["next-hops"] = next_hops;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "next-hops" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::Config()
    :
    prefix{YType::str, "prefix"}
{

    yang_name = "config"; yang_parent_name = "ipv4-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State::State()
    :
    prefix{YType::str, "prefix"},
    packets_forwarded{YType::uint64, "packets-forwarded"},
    octets_forwarded{YType::uint64, "octets-forwarded"},
    origin_network_instance{YType::str, "openconfig-aft-network-instance:origin-network-instance"}
{

    yang_name = "state"; yang_parent_name = "ipv4-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| packets_forwarded.is_set
	|| octets_forwarded.is_set
	|| origin_network_instance.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(packets_forwarded.yfilter)
	|| ydk::is_set(octets_forwarded.yfilter)
	|| ydk::is_set(origin_network_instance.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (packets_forwarded.is_set || is_set(packets_forwarded.yfilter)) leaf_name_data.push_back(packets_forwarded.get_name_leafdata());
    if (octets_forwarded.is_set || is_set(octets_forwarded.yfilter)) leaf_name_data.push_back(octets_forwarded.get_name_leafdata());
    if (origin_network_instance.is_set || is_set(origin_network_instance.yfilter)) leaf_name_data.push_back(origin_network_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded = value;
        packets_forwarded.value_namespace = name_space;
        packets_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded = value;
        octets_forwarded.value_namespace = name_space;
        octets_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openconfig-aft-network-instance:origin-network-instance")
    {
        origin_network_instance = value;
        origin_network_instance.value_namespace = name_space;
        origin_network_instance.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded.yfilter = yfilter;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded.yfilter = yfilter;
    }
    if(value_path == "origin-network-instance")
    {
        origin_network_instance.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "packets-forwarded" || name == "octets-forwarded" || name == "origin-network-instance")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHops()
    :
    next_hop(this, {"index_"})
{

    yang_name = "next-hops"; yang_parent_name = "ipv4-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::~NextHops()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop>();
        ent_->parent = this;
        next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::NextHop()
    :
    index_{YType::str, "index"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State>())
    , interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::~NextHop()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::Config()
    :
    index_{YType::uint64, "index"}
{

    yang_name = "config"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State::State()
    :
    index_{YType::uint64, "index"},
    weight{YType::uint32, "weight"},
    ip_address{YType::str, "ip-address"},
    mac_address{YType::str, "mac-address"},
    popped_mpls_label_stack{YType::str, "popped-mpls-label-stack"},
    pushed_mpls_label_stack{YType::str, "pushed-mpls-label-stack"},
    decapsulate_header{YType::enumeration, "decapsulate-header"},
    encapsulate_header{YType::enumeration, "encapsulate-header"},
    origin_protocol{YType::identityref, "origin-protocol"},
    network_instance{YType::str, "openconfig-aft-network-instance:network-instance"}
{

    yang_name = "state"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set
	|| weight.is_set
	|| ip_address.is_set
	|| mac_address.is_set
	|| decapsulate_header.is_set
	|| encapsulate_header.is_set
	|| origin_protocol.is_set
	|| network_instance.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State::has_operation() const
{
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(popped_mpls_label_stack.yfilter)
	|| ydk::is_set(pushed_mpls_label_stack.yfilter)
	|| ydk::is_set(decapsulate_header.yfilter)
	|| ydk::is_set(encapsulate_header.yfilter)
	|| ydk::is_set(origin_protocol.yfilter)
	|| ydk::is_set(network_instance.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (decapsulate_header.is_set || is_set(decapsulate_header.yfilter)) leaf_name_data.push_back(decapsulate_header.get_name_leafdata());
    if (encapsulate_header.is_set || is_set(encapsulate_header.yfilter)) leaf_name_data.push_back(encapsulate_header.get_name_leafdata());
    if (origin_protocol.is_set || is_set(origin_protocol.yfilter)) leaf_name_data.push_back(origin_protocol.get_name_leafdata());
    if (network_instance.is_set || is_set(network_instance.yfilter)) leaf_name_data.push_back(network_instance.get_name_leafdata());

    auto popped_mpls_label_stack_name_datas = popped_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), popped_mpls_label_stack_name_datas.begin(), popped_mpls_label_stack_name_datas.end());
    auto pushed_mpls_label_stack_name_datas = pushed_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pushed_mpls_label_stack_name_datas.begin(), pushed_mpls_label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.append(value);
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.append(value);
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header = value;
        decapsulate_header.value_namespace = name_space;
        decapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header = value;
        encapsulate_header.value_namespace = name_space;
        encapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol = value;
        origin_protocol.value_namespace = name_space;
        origin_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openconfig-aft-network-instance:network-instance")
    {
        network_instance = value;
        network_instance.value_namespace = name_space;
        network_instance.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header.yfilter = yfilter;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header.yfilter = yfilter;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol.yfilter = yfilter;
    }
    if(value_path == "network-instance")
    {
        network_instance.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "weight" || name == "ip-address" || name == "mac-address" || name == "popped-mpls-label-stack" || name == "pushed-mpls-label-stack" || name == "decapsulate-header" || name == "encapsulate-header" || name == "origin-protocol" || name == "network-instance")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv4Unicast::Ipv4Entry::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Unicast()
    :
    ipv6_entry(this, {"prefix"})
{

    yang_name = "ipv6-unicast"; yang_parent_name = "afts"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::~Ipv6Unicast()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_entry.len(); index++)
    {
        if(ipv6_entry[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::has_operation() const
{
    for (std::size_t index=0; index<ipv6_entry.len(); index++)
    {
        if(ipv6_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-entry")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry>();
        ent_->parent = this;
        ipv6_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-entry")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Ipv6Entry()
    :
    prefix{YType::str, "prefix"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State>())
    , next_hops(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops>())
{
    config->parent = this;
    state->parent = this;
    next_hops->parent = this;

    yang_name = "ipv6-entry"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::~Ipv6Entry()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (next_hops !=  nullptr && next_hops->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (next_hops !=  nullptr && next_hops->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-entry";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State>();
        }
        return state;
    }

    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops>();
        }
        return next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(next_hops != nullptr)
    {
        _children["next-hops"] = next_hops;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "next-hops" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::Config()
    :
    prefix{YType::str, "prefix"}
{

    yang_name = "config"; yang_parent_name = "ipv6-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State::State()
    :
    prefix{YType::str, "prefix"},
    packets_forwarded{YType::uint64, "packets-forwarded"},
    octets_forwarded{YType::uint64, "octets-forwarded"},
    origin_network_instance{YType::str, "openconfig-aft-network-instance:origin-network-instance"}
{

    yang_name = "state"; yang_parent_name = "ipv6-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| packets_forwarded.is_set
	|| octets_forwarded.is_set
	|| origin_network_instance.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(packets_forwarded.yfilter)
	|| ydk::is_set(octets_forwarded.yfilter)
	|| ydk::is_set(origin_network_instance.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (packets_forwarded.is_set || is_set(packets_forwarded.yfilter)) leaf_name_data.push_back(packets_forwarded.get_name_leafdata());
    if (octets_forwarded.is_set || is_set(octets_forwarded.yfilter)) leaf_name_data.push_back(octets_forwarded.get_name_leafdata());
    if (origin_network_instance.is_set || is_set(origin_network_instance.yfilter)) leaf_name_data.push_back(origin_network_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded = value;
        packets_forwarded.value_namespace = name_space;
        packets_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded = value;
        octets_forwarded.value_namespace = name_space;
        octets_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openconfig-aft-network-instance:origin-network-instance")
    {
        origin_network_instance = value;
        origin_network_instance.value_namespace = name_space;
        origin_network_instance.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded.yfilter = yfilter;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded.yfilter = yfilter;
    }
    if(value_path == "origin-network-instance")
    {
        origin_network_instance.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "packets-forwarded" || name == "octets-forwarded" || name == "origin-network-instance")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHops()
    :
    next_hop(this, {"index_"})
{

    yang_name = "next-hops"; yang_parent_name = "ipv6-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::~NextHops()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop>();
        ent_->parent = this;
        next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::NextHop()
    :
    index_{YType::str, "index"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State>())
    , interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::~NextHop()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::Config()
    :
    index_{YType::uint64, "index"}
{

    yang_name = "config"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State::State()
    :
    index_{YType::uint64, "index"},
    weight{YType::uint32, "weight"},
    ip_address{YType::str, "ip-address"},
    mac_address{YType::str, "mac-address"},
    popped_mpls_label_stack{YType::str, "popped-mpls-label-stack"},
    pushed_mpls_label_stack{YType::str, "pushed-mpls-label-stack"},
    decapsulate_header{YType::enumeration, "decapsulate-header"},
    encapsulate_header{YType::enumeration, "encapsulate-header"},
    origin_protocol{YType::identityref, "origin-protocol"},
    network_instance{YType::str, "openconfig-aft-network-instance:network-instance"}
{

    yang_name = "state"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set
	|| weight.is_set
	|| ip_address.is_set
	|| mac_address.is_set
	|| decapsulate_header.is_set
	|| encapsulate_header.is_set
	|| origin_protocol.is_set
	|| network_instance.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State::has_operation() const
{
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(popped_mpls_label_stack.yfilter)
	|| ydk::is_set(pushed_mpls_label_stack.yfilter)
	|| ydk::is_set(decapsulate_header.yfilter)
	|| ydk::is_set(encapsulate_header.yfilter)
	|| ydk::is_set(origin_protocol.yfilter)
	|| ydk::is_set(network_instance.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (decapsulate_header.is_set || is_set(decapsulate_header.yfilter)) leaf_name_data.push_back(decapsulate_header.get_name_leafdata());
    if (encapsulate_header.is_set || is_set(encapsulate_header.yfilter)) leaf_name_data.push_back(encapsulate_header.get_name_leafdata());
    if (origin_protocol.is_set || is_set(origin_protocol.yfilter)) leaf_name_data.push_back(origin_protocol.get_name_leafdata());
    if (network_instance.is_set || is_set(network_instance.yfilter)) leaf_name_data.push_back(network_instance.get_name_leafdata());

    auto popped_mpls_label_stack_name_datas = popped_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), popped_mpls_label_stack_name_datas.begin(), popped_mpls_label_stack_name_datas.end());
    auto pushed_mpls_label_stack_name_datas = pushed_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pushed_mpls_label_stack_name_datas.begin(), pushed_mpls_label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.append(value);
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.append(value);
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header = value;
        decapsulate_header.value_namespace = name_space;
        decapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header = value;
        encapsulate_header.value_namespace = name_space;
        encapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol = value;
        origin_protocol.value_namespace = name_space;
        origin_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openconfig-aft-network-instance:network-instance")
    {
        network_instance = value;
        network_instance.value_namespace = name_space;
        network_instance.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header.yfilter = yfilter;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header.yfilter = yfilter;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol.yfilter = yfilter;
    }
    if(value_path == "network-instance")
    {
        network_instance.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "weight" || name == "ip-address" || name == "mac-address" || name == "popped-mpls-label-stack" || name == "pushed-mpls-label-stack" || name == "decapsulate-header" || name == "encapsulate-header" || name == "origin-protocol" || name == "network-instance")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ipv6Unicast::Ipv6Entry::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwarding()
    :
    policy_forwarding_entry(this, {"index_"})
{

    yang_name = "policy-forwarding"; yang_parent_name = "afts"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::~PolicyForwarding()
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_forwarding_entry.len(); index++)
    {
        if(policy_forwarding_entry[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::has_operation() const
{
    for (std::size_t index=0; index<policy_forwarding_entry.len(); index++)
    {
        if(policy_forwarding_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::PolicyForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::PolicyForwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-forwarding-entry")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry>();
        ent_->parent = this;
        policy_forwarding_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_forwarding_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-forwarding-entry")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::PolicyForwardingEntry()
    :
    index_{YType::str, "index"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State>())
    , next_hops(std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops>())
{
    config->parent = this;
    state->parent = this;
    next_hops->parent = this;

    yang_name = "policy-forwarding-entry"; yang_parent_name = "policy-forwarding"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::~PolicyForwardingEntry()
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (next_hops !=  nullptr && next_hops->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (next_hops !=  nullptr && next_hops->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-forwarding-entry";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State>();
        }
        return state;
    }

    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops>();
        }
        return next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(next_hops != nullptr)
    {
        _children["next-hops"] = next_hops;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "next-hops" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::Config()
    :
    index_{YType::uint64, "index"},
    ip_prefix{YType::str, "ip-prefix"},
    mac_address{YType::str, "mac-address"},
    mpls_label{YType::str, "mpls-label"},
    mpls_tc{YType::uint8, "mpls-tc"},
    ip_dscp{YType::uint8, "ip-dscp"},
    ip_protocol{YType::str, "ip-protocol"},
    l4_src_port{YType::uint16, "l4-src-port"},
    l4_dst_port{YType::uint16, "l4-dst-port"}
{

    yang_name = "config"; yang_parent_name = "policy-forwarding-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| ip_prefix.is_set
	|| mac_address.is_set
	|| mpls_label.is_set
	|| mpls_tc.is_set
	|| ip_dscp.is_set
	|| ip_protocol.is_set
	|| l4_src_port.is_set
	|| l4_dst_port.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(ip_prefix.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(mpls_tc.yfilter)
	|| ydk::is_set(ip_dscp.yfilter)
	|| ydk::is_set(ip_protocol.yfilter)
	|| ydk::is_set(l4_src_port.yfilter)
	|| ydk::is_set(l4_dst_port.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (mpls_tc.is_set || is_set(mpls_tc.yfilter)) leaf_name_data.push_back(mpls_tc.get_name_leafdata());
    if (ip_dscp.is_set || is_set(ip_dscp.yfilter)) leaf_name_data.push_back(ip_dscp.get_name_leafdata());
    if (ip_protocol.is_set || is_set(ip_protocol.yfilter)) leaf_name_data.push_back(ip_protocol.get_name_leafdata());
    if (l4_src_port.is_set || is_set(l4_src_port.yfilter)) leaf_name_data.push_back(l4_src_port.get_name_leafdata());
    if (l4_dst_port.is_set || is_set(l4_dst_port.yfilter)) leaf_name_data.push_back(l4_dst_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-tc")
    {
        mpls_tc = value;
        mpls_tc.value_namespace = name_space;
        mpls_tc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-dscp")
    {
        ip_dscp = value;
        ip_dscp.value_namespace = name_space;
        ip_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-protocol")
    {
        ip_protocol = value;
        ip_protocol.value_namespace = name_space;
        ip_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-src-port")
    {
        l4_src_port = value;
        l4_src_port.value_namespace = name_space;
        l4_src_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-dst-port")
    {
        l4_dst_port = value;
        l4_dst_port.value_namespace = name_space;
        l4_dst_port.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "mpls-tc")
    {
        mpls_tc.yfilter = yfilter;
    }
    if(value_path == "ip-dscp")
    {
        ip_dscp.yfilter = yfilter;
    }
    if(value_path == "ip-protocol")
    {
        ip_protocol.yfilter = yfilter;
    }
    if(value_path == "l4-src-port")
    {
        l4_src_port.yfilter = yfilter;
    }
    if(value_path == "l4-dst-port")
    {
        l4_dst_port.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "ip-prefix" || name == "mac-address" || name == "mpls-label" || name == "mpls-tc" || name == "ip-dscp" || name == "ip-protocol" || name == "l4-src-port" || name == "l4-dst-port")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State::State()
    :
    index_{YType::uint64, "index"},
    ip_prefix{YType::str, "ip-prefix"},
    mac_address{YType::str, "mac-address"},
    mpls_label{YType::str, "mpls-label"},
    mpls_tc{YType::uint8, "mpls-tc"},
    ip_dscp{YType::uint8, "ip-dscp"},
    ip_protocol{YType::str, "ip-protocol"},
    l4_src_port{YType::uint16, "l4-src-port"},
    l4_dst_port{YType::uint16, "l4-dst-port"},
    packets_forwarded{YType::uint64, "packets-forwarded"},
    octets_forwarded{YType::uint64, "octets-forwarded"}
{

    yang_name = "state"; yang_parent_name = "policy-forwarding-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| ip_prefix.is_set
	|| mac_address.is_set
	|| mpls_label.is_set
	|| mpls_tc.is_set
	|| ip_dscp.is_set
	|| ip_protocol.is_set
	|| l4_src_port.is_set
	|| l4_dst_port.is_set
	|| packets_forwarded.is_set
	|| octets_forwarded.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(ip_prefix.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(mpls_tc.yfilter)
	|| ydk::is_set(ip_dscp.yfilter)
	|| ydk::is_set(ip_protocol.yfilter)
	|| ydk::is_set(l4_src_port.yfilter)
	|| ydk::is_set(l4_dst_port.yfilter)
	|| ydk::is_set(packets_forwarded.yfilter)
	|| ydk::is_set(octets_forwarded.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (mpls_tc.is_set || is_set(mpls_tc.yfilter)) leaf_name_data.push_back(mpls_tc.get_name_leafdata());
    if (ip_dscp.is_set || is_set(ip_dscp.yfilter)) leaf_name_data.push_back(ip_dscp.get_name_leafdata());
    if (ip_protocol.is_set || is_set(ip_protocol.yfilter)) leaf_name_data.push_back(ip_protocol.get_name_leafdata());
    if (l4_src_port.is_set || is_set(l4_src_port.yfilter)) leaf_name_data.push_back(l4_src_port.get_name_leafdata());
    if (l4_dst_port.is_set || is_set(l4_dst_port.yfilter)) leaf_name_data.push_back(l4_dst_port.get_name_leafdata());
    if (packets_forwarded.is_set || is_set(packets_forwarded.yfilter)) leaf_name_data.push_back(packets_forwarded.get_name_leafdata());
    if (octets_forwarded.is_set || is_set(octets_forwarded.yfilter)) leaf_name_data.push_back(octets_forwarded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-tc")
    {
        mpls_tc = value;
        mpls_tc.value_namespace = name_space;
        mpls_tc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-dscp")
    {
        ip_dscp = value;
        ip_dscp.value_namespace = name_space;
        ip_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-protocol")
    {
        ip_protocol = value;
        ip_protocol.value_namespace = name_space;
        ip_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-src-port")
    {
        l4_src_port = value;
        l4_src_port.value_namespace = name_space;
        l4_src_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-dst-port")
    {
        l4_dst_port = value;
        l4_dst_port.value_namespace = name_space;
        l4_dst_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded = value;
        packets_forwarded.value_namespace = name_space;
        packets_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded = value;
        octets_forwarded.value_namespace = name_space;
        octets_forwarded.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "mpls-tc")
    {
        mpls_tc.yfilter = yfilter;
    }
    if(value_path == "ip-dscp")
    {
        ip_dscp.yfilter = yfilter;
    }
    if(value_path == "ip-protocol")
    {
        ip_protocol.yfilter = yfilter;
    }
    if(value_path == "l4-src-port")
    {
        l4_src_port.yfilter = yfilter;
    }
    if(value_path == "l4-dst-port")
    {
        l4_dst_port.yfilter = yfilter;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded.yfilter = yfilter;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "ip-prefix" || name == "mac-address" || name == "mpls-label" || name == "mpls-tc" || name == "ip-dscp" || name == "ip-protocol" || name == "l4-src-port" || name == "l4-dst-port" || name == "packets-forwarded" || name == "octets-forwarded")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHops()
    :
    next_hop(this, {"index_"})
{

    yang_name = "next-hops"; yang_parent_name = "policy-forwarding-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::~NextHops()
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop>();
        ent_->parent = this;
        next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::NextHop()
    :
    index_{YType::str, "index"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State>())
    , interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::~NextHop()
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::Config()
    :
    index_{YType::uint64, "index"}
{

    yang_name = "config"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State::State()
    :
    index_{YType::uint64, "index"},
    weight{YType::uint32, "weight"},
    ip_address{YType::str, "ip-address"},
    mac_address{YType::str, "mac-address"},
    popped_mpls_label_stack{YType::str, "popped-mpls-label-stack"},
    pushed_mpls_label_stack{YType::str, "pushed-mpls-label-stack"},
    decapsulate_header{YType::enumeration, "decapsulate-header"},
    encapsulate_header{YType::enumeration, "encapsulate-header"},
    origin_protocol{YType::identityref, "origin-protocol"}
{

    yang_name = "state"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set
	|| weight.is_set
	|| ip_address.is_set
	|| mac_address.is_set
	|| decapsulate_header.is_set
	|| encapsulate_header.is_set
	|| origin_protocol.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State::has_operation() const
{
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(popped_mpls_label_stack.yfilter)
	|| ydk::is_set(pushed_mpls_label_stack.yfilter)
	|| ydk::is_set(decapsulate_header.yfilter)
	|| ydk::is_set(encapsulate_header.yfilter)
	|| ydk::is_set(origin_protocol.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (decapsulate_header.is_set || is_set(decapsulate_header.yfilter)) leaf_name_data.push_back(decapsulate_header.get_name_leafdata());
    if (encapsulate_header.is_set || is_set(encapsulate_header.yfilter)) leaf_name_data.push_back(encapsulate_header.get_name_leafdata());
    if (origin_protocol.is_set || is_set(origin_protocol.yfilter)) leaf_name_data.push_back(origin_protocol.get_name_leafdata());

    auto popped_mpls_label_stack_name_datas = popped_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), popped_mpls_label_stack_name_datas.begin(), popped_mpls_label_stack_name_datas.end());
    auto pushed_mpls_label_stack_name_datas = pushed_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pushed_mpls_label_stack_name_datas.begin(), pushed_mpls_label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.append(value);
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.append(value);
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header = value;
        decapsulate_header.value_namespace = name_space;
        decapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header = value;
        encapsulate_header.value_namespace = name_space;
        encapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol = value;
        origin_protocol.value_namespace = name_space;
        origin_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header.yfilter = yfilter;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header.yfilter = yfilter;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "weight" || name == "ip-address" || name == "mac-address" || name == "popped-mpls-label-stack" || name == "pushed-mpls-label-stack" || name == "decapsulate-header" || name == "encapsulate-header" || name == "origin-protocol")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::PolicyForwarding::PolicyForwardingEntry::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Mpls::Mpls()
    :
    label_entry(this, {"label"})
{

    yang_name = "mpls"; yang_parent_name = "afts"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Mpls::~Mpls()
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_entry.len(); index++)
    {
        if(label_entry[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::has_operation() const
{
    for (std::size_t index=0; index<label_entry.len(); index++)
    {
        if(label_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-entry")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry>();
        ent_->parent = this;
        label_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-entry")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::LabelEntry()
    :
    label{YType::str, "label"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State>())
    , next_hops(std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops>())
{
    config->parent = this;
    state->parent = this;
    next_hops->parent = this;

    yang_name = "label-entry"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::~LabelEntry()
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (next_hops !=  nullptr && next_hops->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (next_hops !=  nullptr && next_hops->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-entry";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State>();
        }
        return state;
    }

    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops>();
        }
        return next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(next_hops != nullptr)
    {
        _children["next-hops"] = next_hops;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "next-hops" || name == "label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::Config()
    :
    label{YType::str, "label"}
{

    yang_name = "config"; yang_parent_name = "label-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State::State()
    :
    label{YType::str, "label"},
    packets_forwarded{YType::uint64, "packets-forwarded"},
    octets_forwarded{YType::uint64, "octets-forwarded"}
{

    yang_name = "state"; yang_parent_name = "label-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| packets_forwarded.is_set
	|| octets_forwarded.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(packets_forwarded.yfilter)
	|| ydk::is_set(octets_forwarded.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (packets_forwarded.is_set || is_set(packets_forwarded.yfilter)) leaf_name_data.push_back(packets_forwarded.get_name_leafdata());
    if (octets_forwarded.is_set || is_set(octets_forwarded.yfilter)) leaf_name_data.push_back(octets_forwarded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded = value;
        packets_forwarded.value_namespace = name_space;
        packets_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded = value;
        octets_forwarded.value_namespace = name_space;
        octets_forwarded.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded.yfilter = yfilter;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "packets-forwarded" || name == "octets-forwarded")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHops()
    :
    next_hop(this, {"index_"})
{

    yang_name = "next-hops"; yang_parent_name = "label-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::~NextHops()
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop>();
        ent_->parent = this;
        next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::NextHop()
    :
    index_{YType::str, "index"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State>())
    , interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::~NextHop()
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::Config()
    :
    index_{YType::uint64, "index"}
{

    yang_name = "config"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State::State()
    :
    index_{YType::uint64, "index"},
    weight{YType::uint32, "weight"},
    ip_address{YType::str, "ip-address"},
    mac_address{YType::str, "mac-address"},
    popped_mpls_label_stack{YType::str, "popped-mpls-label-stack"},
    pushed_mpls_label_stack{YType::str, "pushed-mpls-label-stack"},
    decapsulate_header{YType::enumeration, "decapsulate-header"},
    encapsulate_header{YType::enumeration, "encapsulate-header"},
    origin_protocol{YType::identityref, "origin-protocol"}
{

    yang_name = "state"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set
	|| weight.is_set
	|| ip_address.is_set
	|| mac_address.is_set
	|| decapsulate_header.is_set
	|| encapsulate_header.is_set
	|| origin_protocol.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State::has_operation() const
{
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(popped_mpls_label_stack.yfilter)
	|| ydk::is_set(pushed_mpls_label_stack.yfilter)
	|| ydk::is_set(decapsulate_header.yfilter)
	|| ydk::is_set(encapsulate_header.yfilter)
	|| ydk::is_set(origin_protocol.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (decapsulate_header.is_set || is_set(decapsulate_header.yfilter)) leaf_name_data.push_back(decapsulate_header.get_name_leafdata());
    if (encapsulate_header.is_set || is_set(encapsulate_header.yfilter)) leaf_name_data.push_back(encapsulate_header.get_name_leafdata());
    if (origin_protocol.is_set || is_set(origin_protocol.yfilter)) leaf_name_data.push_back(origin_protocol.get_name_leafdata());

    auto popped_mpls_label_stack_name_datas = popped_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), popped_mpls_label_stack_name_datas.begin(), popped_mpls_label_stack_name_datas.end());
    auto pushed_mpls_label_stack_name_datas = pushed_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pushed_mpls_label_stack_name_datas.begin(), pushed_mpls_label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.append(value);
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.append(value);
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header = value;
        decapsulate_header.value_namespace = name_space;
        decapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header = value;
        encapsulate_header.value_namespace = name_space;
        encapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol = value;
        origin_protocol.value_namespace = name_space;
        origin_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header.yfilter = yfilter;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header.yfilter = yfilter;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "weight" || name == "ip-address" || name == "mac-address" || name == "popped-mpls-label-stack" || name == "pushed-mpls-label-stack" || name == "decapsulate-header" || name == "encapsulate-header" || name == "origin-protocol")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Mpls::LabelEntry::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ethernet::Ethernet()
    :
    mac_entry(this, {"mac_address"})
{

    yang_name = "ethernet"; yang_parent_name = "afts"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ethernet::~Ethernet()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_entry.len(); index++)
    {
        if(mac_entry[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::has_operation() const
{
    for (std::size_t index=0; index<mac_entry.len(); index++)
    {
        if(mac_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-entry")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry>();
        ent_->parent = this;
        mac_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-entry")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::MacEntry()
    :
    mac_address{YType::str, "mac-address"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State>())
    , next_hops(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops>())
{
    config->parent = this;
    state->parent = this;
    next_hops->parent = this;

    yang_name = "mac-entry"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::~MacEntry()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (next_hops !=  nullptr && next_hops->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (next_hops !=  nullptr && next_hops->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-entry";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State>();
        }
        return state;
    }

    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops>();
        }
        return next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(next_hops != nullptr)
    {
        _children["next-hops"] = next_hops;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "next-hops" || name == "mac-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::Config()
    :
    mac_address{YType::str, "mac-address"}
{

    yang_name = "config"; yang_parent_name = "mac-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State::State()
    :
    mac_address{YType::str, "mac-address"},
    packets_forwarded{YType::uint64, "packets-forwarded"},
    octets_forwarded{YType::uint64, "octets-forwarded"}
{

    yang_name = "state"; yang_parent_name = "mac-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| packets_forwarded.is_set
	|| octets_forwarded.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(packets_forwarded.yfilter)
	|| ydk::is_set(octets_forwarded.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (packets_forwarded.is_set || is_set(packets_forwarded.yfilter)) leaf_name_data.push_back(packets_forwarded.get_name_leafdata());
    if (octets_forwarded.is_set || is_set(octets_forwarded.yfilter)) leaf_name_data.push_back(octets_forwarded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded = value;
        packets_forwarded.value_namespace = name_space;
        packets_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded = value;
        octets_forwarded.value_namespace = name_space;
        octets_forwarded.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded.yfilter = yfilter;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "packets-forwarded" || name == "octets-forwarded")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHops()
    :
    next_hop(this, {"index_"})
{

    yang_name = "next-hops"; yang_parent_name = "mac-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::~NextHops()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop>();
        ent_->parent = this;
        next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::NextHop()
    :
    index_{YType::str, "index"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State>())
    , interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::~NextHop()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::Config()
    :
    index_{YType::uint64, "index"}
{

    yang_name = "config"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State::State()
    :
    index_{YType::uint64, "index"},
    weight{YType::uint32, "weight"},
    ip_address{YType::str, "ip-address"},
    mac_address{YType::str, "mac-address"},
    popped_mpls_label_stack{YType::str, "popped-mpls-label-stack"},
    pushed_mpls_label_stack{YType::str, "pushed-mpls-label-stack"},
    decapsulate_header{YType::enumeration, "decapsulate-header"},
    encapsulate_header{YType::enumeration, "encapsulate-header"},
    origin_protocol{YType::identityref, "origin-protocol"}
{

    yang_name = "state"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set
	|| weight.is_set
	|| ip_address.is_set
	|| mac_address.is_set
	|| decapsulate_header.is_set
	|| encapsulate_header.is_set
	|| origin_protocol.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State::has_operation() const
{
    for (auto const & leaf : popped_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : pushed_mpls_label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(popped_mpls_label_stack.yfilter)
	|| ydk::is_set(pushed_mpls_label_stack.yfilter)
	|| ydk::is_set(decapsulate_header.yfilter)
	|| ydk::is_set(encapsulate_header.yfilter)
	|| ydk::is_set(origin_protocol.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (decapsulate_header.is_set || is_set(decapsulate_header.yfilter)) leaf_name_data.push_back(decapsulate_header.get_name_leafdata());
    if (encapsulate_header.is_set || is_set(encapsulate_header.yfilter)) leaf_name_data.push_back(encapsulate_header.get_name_leafdata());
    if (origin_protocol.is_set || is_set(origin_protocol.yfilter)) leaf_name_data.push_back(origin_protocol.get_name_leafdata());

    auto popped_mpls_label_stack_name_datas = popped_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), popped_mpls_label_stack_name_datas.begin(), popped_mpls_label_stack_name_datas.end());
    auto pushed_mpls_label_stack_name_datas = pushed_mpls_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pushed_mpls_label_stack_name_datas.begin(), pushed_mpls_label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.append(value);
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.append(value);
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header = value;
        decapsulate_header.value_namespace = name_space;
        decapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header = value;
        encapsulate_header.value_namespace = name_space;
        encapsulate_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol = value;
        origin_protocol.value_namespace = name_space;
        origin_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "popped-mpls-label-stack")
    {
        popped_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "pushed-mpls-label-stack")
    {
        pushed_mpls_label_stack.yfilter = yfilter;
    }
    if(value_path == "decapsulate-header")
    {
        decapsulate_header.yfilter = yfilter;
    }
    if(value_path == "encapsulate-header")
    {
        encapsulate_header.yfilter = yfilter;
    }
    if(value_path == "origin-protocol")
    {
        origin_protocol.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "weight" || name == "ip-address" || name == "mac-address" || name == "popped-mpls-label-stack" || name == "pushed-mpls-label-stack" || name == "decapsulate-header" || name == "encapsulate-header" || name == "origin-protocol")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Afts::Ethernet::MacEntry::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::SidSelectionMode::ADJ_SID_ONLY {0, "ADJ_SID_ONLY"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::SidSelectionMode::MIXED_MODE {1, "MIXED_MODE"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::SidSelectionMode::ADJ_SID_ONLY {0, "ADJ_SID_ONLY"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::SidSelectionMode::MIXED_MODE {1, "MIXED_MODE"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Vlans::Vlan::Config::Status::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Vlans::Vlan::Config::Status::SUSPENDED {1, "SUSPENDED"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Vlans::Vlan::State::Status::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Vlans::Vlan::State::Status::SUSPENDED {1, "SUSPENDED"};


}
}

