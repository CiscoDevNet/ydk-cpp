
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_0.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_1.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

OcniIsis::OcniIsis()
    :
    network_instances(std::make_shared<OcniIsis::NetworkInstances>())
{
    network_instances->parent = this;

    yang_name = "ocni-isis"; yang_parent_name = "Cisco-IOS-XR-clns-isis-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

OcniIsis::~OcniIsis()
{
}

bool OcniIsis::has_data() const
{
    if (is_presence_container) return true;
    return (network_instances !=  nullptr && network_instances->has_data());
}

bool OcniIsis::has_operation() const
{
    return is_set(yfilter)
	|| (network_instances !=  nullptr && network_instances->has_operation());
}

std::string OcniIsis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-oper:ocni-isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instances")
    {
        if(network_instances == nullptr)
        {
            network_instances = std::make_shared<OcniIsis::NetworkInstances>();
        }
        return network_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(network_instances != nullptr)
    {
        _children["network-instances"] = network_instances;
    }

    return _children;
}

void OcniIsis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> OcniIsis::clone_ptr() const
{
    return std::make_shared<OcniIsis>();
}

std::string OcniIsis::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string OcniIsis::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function OcniIsis::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OcniIsis::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool OcniIsis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-instances")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstances()
    :
    network_instance(this, {"name"})
{

    yang_name = "network-instances"; yang_parent_name = "ocni-isis"; is_top_level_class = false; has_list_ancestor = false; 
}

OcniIsis::NetworkInstances::~NetworkInstances()
{
}

bool OcniIsis::NetworkInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::has_operation() const
{
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-oper:ocni-isis/" << get_segment_path();
    return path_buffer.str();
}

std::string OcniIsis::NetworkInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instance")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance>();
        ent_->parent = this;
        network_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : network_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-instance")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::NetworkInstance()
    :
    name{YType::str, "name"}
        ,
    interfaces(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Interfaces>())
    , protocols(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols>())
    , state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::State>())
{
    interfaces->parent = this;
    protocols->parent = this;
    state->parent = this;

    yang_name = "network-instance"; yang_parent_name = "network-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

OcniIsis::NetworkInstances::NetworkInstance::~NetworkInstance()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (protocols !=  nullptr && protocols->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (protocols !=  nullptr && protocols->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-oper:ocni-isis/network-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string OcniIsis::NetworkInstances::NetworkInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-instance";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols>();
        }
        return protocols;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(protocols != nullptr)
    {
        _children["protocols"] = protocols;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "protocols" || name == "state" || name == "name")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interfaces()
    :
    interface(this, {"id"})
{

    yang_name = "interfaces"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Interfaces::~Interfaces()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Interfaces::get_children() const
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

void OcniIsis::NetworkInstances::NetworkInstance::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::Interface()
    :
    id{YType::str, "id"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State>())
{
    state->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::~Interface()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State::State()
    :
    id{YType::str, "id"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocols()
    :
    protocol(this, {})
{

    yang_name = "protocols"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::~Protocols()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol>();
        ent_->parent = this;
        protocol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Protocol()
    :
    identifier{YType::str, "identifier"},
    name{YType::str, "name"}
        ,
    protocols_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState>())
    , isis(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis>())
{
    protocols_state->parent = this;
    isis->parent = this;

    yang_name = "protocol"; yang_parent_name = "protocols"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::~Protocol()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set
	|| (protocols_state !=  nullptr && protocols_state->has_data())
	|| (isis !=  nullptr && isis->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (protocols_state !=  nullptr && protocols_state->has_operation())
	|| (isis !=  nullptr && isis->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols-state")
    {
        if(protocols_state == nullptr)
        {
            protocols_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState>();
        }
        return protocols_state;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocols_state != nullptr)
    {
        _children["protocols-state"] = protocols_state;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols-state" || name == "isis" || name == "identifier" || name == "name")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState::ProtocolsState()
    :
    identifier{YType::str, "identifier"},
    name{YType::str, "name"}
{

    yang_name = "protocols-state"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState::~ProtocolsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Isis()
    :
    isis_interfaces(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces>())
    , global(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global>())
    , levels(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels>())
{
    isis_interfaces->parent = this;
    global->parent = this;
    levels->parent = this;

    yang_name = "isis"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::~Isis()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::has_data() const
{
    if (is_presence_container) return true;
    return (isis_interfaces !=  nullptr && isis_interfaces->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (levels !=  nullptr && levels->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::has_operation() const
{
    return is_set(yfilter)
	|| (isis_interfaces !=  nullptr && isis_interfaces->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (levels !=  nullptr && levels->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-interfaces")
    {
        if(isis_interfaces == nullptr)
        {
            isis_interfaces = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces>();
        }
        return isis_interfaces;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global>();
        }
        return global;
    }

    if(child_yang_name == "levels")
    {
        if(levels == nullptr)
        {
            levels = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels>();
        }
        return levels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis_interfaces != nullptr)
    {
        _children["isis-interfaces"] = isis_interfaces;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(levels != nullptr)
    {
        _children["levels"] = levels;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-interfaces" || name == "global" || name == "levels")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterfaces()
    :
    isis_interface(this, {"interface_id"})
{

    yang_name = "isis-interfaces"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::~IsisInterfaces()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_interface.len(); index++)
    {
        if(isis_interface[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::has_operation() const
{
    for (std::size_t index=0; index<isis_interface.len(); index++)
    {
        if(isis_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-interface")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface>();
        ent_->parent = this;
        isis_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isis_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-interface")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::IsisInterface()
    :
    interface_id{YType::str, "interface-id"}
        ,
    interfaces_afi_safis(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis>())
    , interfaces_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState>())
    , interfaces_levels(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels>())
    , circuit_counters(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters>())
    , interfaces_authentication(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication>())
    , interfaces_timers(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers>())
{
    interfaces_afi_safis->parent = this;
    interfaces_state->parent = this;
    interfaces_levels->parent = this;
    circuit_counters->parent = this;
    interfaces_authentication->parent = this;
    interfaces_timers->parent = this;

    yang_name = "isis-interface"; yang_parent_name = "isis-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::~IsisInterface()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| (interfaces_afi_safis !=  nullptr && interfaces_afi_safis->has_data())
	|| (interfaces_state !=  nullptr && interfaces_state->has_data())
	|| (interfaces_levels !=  nullptr && interfaces_levels->has_data())
	|| (circuit_counters !=  nullptr && circuit_counters->has_data())
	|| (interfaces_authentication !=  nullptr && interfaces_authentication->has_data())
	|| (interfaces_timers !=  nullptr && interfaces_timers->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (interfaces_afi_safis !=  nullptr && interfaces_afi_safis->has_operation())
	|| (interfaces_state !=  nullptr && interfaces_state->has_operation())
	|| (interfaces_levels !=  nullptr && interfaces_levels->has_operation())
	|| (circuit_counters !=  nullptr && circuit_counters->has_operation())
	|| (interfaces_authentication !=  nullptr && interfaces_authentication->has_operation())
	|| (interfaces_timers !=  nullptr && interfaces_timers->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-interface";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces-afi-safis")
    {
        if(interfaces_afi_safis == nullptr)
        {
            interfaces_afi_safis = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis>();
        }
        return interfaces_afi_safis;
    }

    if(child_yang_name == "interfaces-state")
    {
        if(interfaces_state == nullptr)
        {
            interfaces_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState>();
        }
        return interfaces_state;
    }

    if(child_yang_name == "interfaces-levels")
    {
        if(interfaces_levels == nullptr)
        {
            interfaces_levels = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels>();
        }
        return interfaces_levels;
    }

    if(child_yang_name == "circuit-counters")
    {
        if(circuit_counters == nullptr)
        {
            circuit_counters = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters>();
        }
        return circuit_counters;
    }

    if(child_yang_name == "interfaces-authentication")
    {
        if(interfaces_authentication == nullptr)
        {
            interfaces_authentication = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication>();
        }
        return interfaces_authentication;
    }

    if(child_yang_name == "interfaces-timers")
    {
        if(interfaces_timers == nullptr)
        {
            interfaces_timers = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers>();
        }
        return interfaces_timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces_afi_safis != nullptr)
    {
        _children["interfaces-afi-safis"] = interfaces_afi_safis;
    }

    if(interfaces_state != nullptr)
    {
        _children["interfaces-state"] = interfaces_state;
    }

    if(interfaces_levels != nullptr)
    {
        _children["interfaces-levels"] = interfaces_levels;
    }

    if(circuit_counters != nullptr)
    {
        _children["circuit-counters"] = circuit_counters;
    }

    if(interfaces_authentication != nullptr)
    {
        _children["interfaces-authentication"] = interfaces_authentication;
    }

    if(interfaces_timers != nullptr)
    {
        _children["interfaces-timers"] = interfaces_timers;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces-afi-safis" || name == "interfaces-state" || name == "interfaces-levels" || name == "circuit-counters" || name == "interfaces-authentication" || name == "interfaces-timers" || name == "interface-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafis()
    :
    interfaces_afi_safi(this, {})
{

    yang_name = "interfaces-afi-safis"; yang_parent_name = "isis-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::~InterfacesAfiSafis()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interfaces_afi_safi.len(); index++)
    {
        if(interfaces_afi_safi[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::has_operation() const
{
    for (std::size_t index=0; index<interfaces_afi_safi.len(); index++)
    {
        if(interfaces_afi_safi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-afi-safis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces-afi-safi")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi>();
        ent_->parent = this;
        interfaces_afi_safi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interfaces_afi_safi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces-afi-safi")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::InterfacesAfiSafi()
    :
    afi_name{YType::str, "afi-name"},
    safi_name{YType::str, "safi-name"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State>())
{
    state->parent = this;

    yang_name = "interfaces-afi-safi"; yang_parent_name = "interfaces-afi-safis"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::~InterfacesAfiSafi()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-afi-safi";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "afi-name" || name == "safi-name")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State::State()
    :
    afi_name{YType::str, "afi-name"},
    safi_name{YType::str, "safi-name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "interfaces-afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set
	|| enabled.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-name" || name == "safi-name" || name == "enabled")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState::InterfacesState()
    :
    enabled{YType::boolean, "enabled"},
    interface_id{YType::str, "interface-id"},
    passive{YType::boolean, "passive"},
    hello_padding{YType::enumeration, "hello-padding"},
    circuit_type{YType::enumeration, "circuit-type"}
{

    yang_name = "interfaces-state"; yang_parent_name = "isis-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState::~InterfacesState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| interface_id.is_set
	|| passive.is_set
	|| hello_padding.is_set
	|| circuit_type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(hello_padding.yfilter)
	|| ydk::is_set(circuit_type.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (hello_padding.is_set || is_set(hello_padding.yfilter)) leaf_name_data.push_back(hello_padding.get_name_leafdata());
    if (circuit_type.is_set || is_set(circuit_type.yfilter)) leaf_name_data.push_back(circuit_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-padding")
    {
        hello_padding = value;
        hello_padding.value_namespace = name_space;
        hello_padding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-type")
    {
        circuit_type = value;
        circuit_type.value_namespace = name_space;
        circuit_type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "hello-padding")
    {
        hello_padding.yfilter = yfilter;
    }
    if(value_path == "circuit-type")
    {
        circuit_type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "interface-id" || name == "passive" || name == "hello-padding" || name == "circuit-type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevels()
    :
    interfaces_level(this, {"level_number"})
{

    yang_name = "interfaces-levels"; yang_parent_name = "isis-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::~InterfacesLevels()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interfaces_level.len(); index++)
    {
        if(interfaces_level[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::has_operation() const
{
    for (std::size_t index=0; index<interfaces_level.len(); index++)
    {
        if(interfaces_level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces-level")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel>();
        ent_->parent = this;
        interfaces_level.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interfaces_level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces-level")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevel()
    :
    level_number{YType::uint32, "level-number"}
        ,
    hello_authentication(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication>())
    , interfaces_levels_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState>())
    , packet_counters(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters>())
    , adjacencies(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies>())
    , levels_timers(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers>())
    , levels_afi_safis(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis>())
{
    hello_authentication->parent = this;
    interfaces_levels_state->parent = this;
    packet_counters->parent = this;
    adjacencies->parent = this;
    levels_timers->parent = this;
    levels_afi_safis->parent = this;

    yang_name = "interfaces-level"; yang_parent_name = "interfaces-levels"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::~InterfacesLevel()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::has_data() const
{
    if (is_presence_container) return true;
    return level_number.is_set
	|| (hello_authentication !=  nullptr && hello_authentication->has_data())
	|| (interfaces_levels_state !=  nullptr && interfaces_levels_state->has_data())
	|| (packet_counters !=  nullptr && packet_counters->has_data())
	|| (adjacencies !=  nullptr && adjacencies->has_data())
	|| (levels_timers !=  nullptr && levels_timers->has_data())
	|| (levels_afi_safis !=  nullptr && levels_afi_safis->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_number.yfilter)
	|| (hello_authentication !=  nullptr && hello_authentication->has_operation())
	|| (interfaces_levels_state !=  nullptr && interfaces_levels_state->has_operation())
	|| (packet_counters !=  nullptr && packet_counters->has_operation())
	|| (adjacencies !=  nullptr && adjacencies->has_operation())
	|| (levels_timers !=  nullptr && levels_timers->has_operation())
	|| (levels_afi_safis !=  nullptr && levels_afi_safis->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-level";
    ADD_KEY_TOKEN(level_number, "level-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_number.is_set || is_set(level_number.yfilter)) leaf_name_data.push_back(level_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-authentication")
    {
        if(hello_authentication == nullptr)
        {
            hello_authentication = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication>();
        }
        return hello_authentication;
    }

    if(child_yang_name == "interfaces-levels-state")
    {
        if(interfaces_levels_state == nullptr)
        {
            interfaces_levels_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState>();
        }
        return interfaces_levels_state;
    }

    if(child_yang_name == "packet-counters")
    {
        if(packet_counters == nullptr)
        {
            packet_counters = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters>();
        }
        return packet_counters;
    }

    if(child_yang_name == "adjacencies")
    {
        if(adjacencies == nullptr)
        {
            adjacencies = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies>();
        }
        return adjacencies;
    }

    if(child_yang_name == "levels-timers")
    {
        if(levels_timers == nullptr)
        {
            levels_timers = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers>();
        }
        return levels_timers;
    }

    if(child_yang_name == "levels-afi-safis")
    {
        if(levels_afi_safis == nullptr)
        {
            levels_afi_safis = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis>();
        }
        return levels_afi_safis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hello_authentication != nullptr)
    {
        _children["hello-authentication"] = hello_authentication;
    }

    if(interfaces_levels_state != nullptr)
    {
        _children["interfaces-levels-state"] = interfaces_levels_state;
    }

    if(packet_counters != nullptr)
    {
        _children["packet-counters"] = packet_counters;
    }

    if(adjacencies != nullptr)
    {
        _children["adjacencies"] = adjacencies;
    }

    if(levels_timers != nullptr)
    {
        _children["levels-timers"] = levels_timers;
    }

    if(levels_afi_safis != nullptr)
    {
        _children["levels-afi-safis"] = levels_afi_safis;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-number")
    {
        level_number = value;
        level_number.value_namespace = name_space;
        level_number.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-number")
    {
        level_number.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-authentication" || name == "interfaces-levels-state" || name == "packet-counters" || name == "adjacencies" || name == "levels-timers" || name == "levels-afi-safis" || name == "level-number")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::HelloAuthentication()
    :
    key(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key>())
{
    key->parent = this;

    yang_name = "hello-authentication"; yang_parent_name = "interfaces-level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::~HelloAuthentication()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return (key !=  nullptr && key->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::Key()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State>())
{
    state->parent = this;

    yang_name = "key"; yang_parent_name = "hello-authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::~Key()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State::State()
    :
    auth_password{YType::str, "auth-password"}
{

    yang_name = "state"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State::has_data() const
{
    if (is_presence_container) return true;
    return auth_password.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_password.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_password.is_set || is_set(auth_password.yfilter)) leaf_name_data.push_back(auth_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-password")
    {
        auth_password = value;
        auth_password.value_namespace = name_space;
        auth_password.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-password")
    {
        auth_password.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-password")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState::InterfacesLevelsState()
    :
    level_number{YType::uint8, "level-number"},
    priority{YType::uint8, "priority"}
{

    yang_name = "interfaces-levels-state"; yang_parent_name = "interfaces-level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState::~InterfacesLevelsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState::has_data() const
{
    if (is_presence_container) return true;
    return level_number.is_set
	|| priority.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_number.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-levels-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_number.is_set || is_set(level_number.yfilter)) leaf_name_data.push_back(level_number.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-number")
    {
        level_number = value;
        level_number.value_namespace = name_space;
        level_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-number")
    {
        level_number.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-number" || name == "priority")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::PacketCounters()
    :
    lsp(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp>())
    , iih(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih>())
    , psnp(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp>())
    , cnsp(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp>())
{
    lsp->parent = this;
    iih->parent = this;
    psnp->parent = this;
    cnsp->parent = this;

    yang_name = "packet-counters"; yang_parent_name = "interfaces-level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::~PacketCounters()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::has_data() const
{
    if (is_presence_container) return true;
    return (lsp !=  nullptr && lsp->has_data())
	|| (iih !=  nullptr && iih->has_data())
	|| (psnp !=  nullptr && psnp->has_data())
	|| (cnsp !=  nullptr && cnsp->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::has_operation() const
{
    return is_set(yfilter)
	|| (lsp !=  nullptr && lsp->has_operation())
	|| (iih !=  nullptr && iih->has_operation())
	|| (psnp !=  nullptr && psnp->has_operation())
	|| (cnsp !=  nullptr && cnsp->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        if(lsp == nullptr)
        {
            lsp = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp>();
        }
        return lsp;
    }

    if(child_yang_name == "iih")
    {
        if(iih == nullptr)
        {
            iih = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih>();
        }
        return iih;
    }

    if(child_yang_name == "psnp")
    {
        if(psnp == nullptr)
        {
            psnp = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp>();
        }
        return psnp;
    }

    if(child_yang_name == "cnsp")
    {
        if(cnsp == nullptr)
        {
            cnsp = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp>();
        }
        return cnsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp != nullptr)
    {
        _children["lsp"] = lsp;
    }

    if(iih != nullptr)
    {
        _children["iih"] = iih;
    }

    if(psnp != nullptr)
    {
        _children["psnp"] = psnp;
    }

    if(cnsp != nullptr)
    {
        _children["cnsp"] = cnsp;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp" || name == "iih" || name == "psnp" || name == "cnsp")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::Lsp()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State>())
{
    state->parent = this;

    yang_name = "lsp"; yang_parent_name = "packet-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::~Lsp()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State::State()
    :
    received{YType::uint32, "received"},
    processed{YType::uint32, "processed"},
    sent{YType::uint32, "sent"}
{

    yang_name = "state"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State::has_data() const
{
    if (is_presence_container) return true;
    return received.is_set
	|| processed.is_set
	|| sent.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(processed.yfilter)
	|| ydk::is_set(sent.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (processed.is_set || is_set(processed.yfilter)) leaf_name_data.push_back(processed.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed")
    {
        processed = value;
        processed.value_namespace = name_space;
        processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "processed")
    {
        processed.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received" || name == "processed" || name == "sent")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::Iih()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State>())
{
    state->parent = this;

    yang_name = "iih"; yang_parent_name = "packet-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::~Iih()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iih";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State::State()
    :
    received{YType::uint32, "received"},
    processed{YType::uint32, "processed"},
    sent{YType::uint32, "sent"}
{

    yang_name = "state"; yang_parent_name = "iih"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State::has_data() const
{
    if (is_presence_container) return true;
    return received.is_set
	|| processed.is_set
	|| sent.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(processed.yfilter)
	|| ydk::is_set(sent.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (processed.is_set || is_set(processed.yfilter)) leaf_name_data.push_back(processed.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed")
    {
        processed = value;
        processed.value_namespace = name_space;
        processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "processed")
    {
        processed.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received" || name == "processed" || name == "sent")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::Psnp()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State>())
{
    state->parent = this;

    yang_name = "psnp"; yang_parent_name = "packet-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::~Psnp()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psnp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State::State()
    :
    received{YType::uint32, "received"},
    processed{YType::uint32, "processed"},
    sent{YType::uint32, "sent"}
{

    yang_name = "state"; yang_parent_name = "psnp"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State::has_data() const
{
    if (is_presence_container) return true;
    return received.is_set
	|| processed.is_set
	|| sent.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(processed.yfilter)
	|| ydk::is_set(sent.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (processed.is_set || is_set(processed.yfilter)) leaf_name_data.push_back(processed.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed")
    {
        processed = value;
        processed.value_namespace = name_space;
        processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "processed")
    {
        processed.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received" || name == "processed" || name == "sent")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::Cnsp()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State>())
{
    state->parent = this;

    yang_name = "cnsp"; yang_parent_name = "packet-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::~Cnsp()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State::State()
    :
    received{YType::uint32, "received"},
    processed{YType::uint32, "processed"},
    sent{YType::uint32, "sent"}
{

    yang_name = "state"; yang_parent_name = "cnsp"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State::has_data() const
{
    if (is_presence_container) return true;
    return received.is_set
	|| processed.is_set
	|| sent.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(processed.yfilter)
	|| ydk::is_set(sent.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (processed.is_set || is_set(processed.yfilter)) leaf_name_data.push_back(processed.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed")
    {
        processed = value;
        processed.value_namespace = name_space;
        processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "processed")
    {
        processed.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received" || name == "processed" || name == "sent")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacencies()
    :
    adjacency(this, {"system_id"})
{

    yang_name = "adjacencies"; yang_parent_name = "interfaces-level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::~Adjacencies()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjacency.len(); index++)
    {
        if(adjacency[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::has_operation() const
{
    for (std::size_t index=0; index<adjacency.len(); index++)
    {
        if(adjacency[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacencies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency>();
        ent_->parent = this;
        adjacency.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adjacency.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::Adjacency()
    :
    system_id{YType::str, "system-id"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State>())
{
    state->parent = this;

    yang_name = "adjacency"; yang_parent_name = "adjacencies"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::~Adjacency()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency";
    ADD_KEY_TOKEN(system_id, "system-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "system-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State::State()
    :
    system_id{YType::str, "system-id"},
    neighbor_ipv4_address{YType::str, "neighbor-ipv4-address"},
    neighbor_ipv6_address{YType::str, "neighbor-ipv6-address"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    local_extended_circuit_id{YType::uint32, "local-extended-circuit-id"},
    neighbor_extended_circuit_id{YType::uint32, "neighbor-extended-circuit-id"},
    priority{YType::uint8, "priority"},
    dis_system_id{YType::str, "dis-system-id"},
    neighbor_circuit_type{YType::enumeration, "neighbor-circuit-type"},
    adjacency_type{YType::enumeration, "adjacency-type"},
    adjacency_state{YType::enumeration, "adjacency-state"},
    remaining_hold_time{YType::uint16, "remaining-hold-time"},
    up_time{YType::uint32, "up-time"},
    restart_support{YType::boolean, "restart-support"},
    restart_suppress{YType::boolean, "restart-suppress"},
    restart_status{YType::boolean, "restart-status"},
    topology{YType::str, "topology"},
    area_address{YType::str, "area-address"},
    nlpid{YType::enumeration, "nlpid"}
{

    yang_name = "state"; yang_parent_name = "adjacency"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : topology.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : area_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : nlpid.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return system_id.is_set
	|| neighbor_ipv4_address.is_set
	|| neighbor_ipv6_address.is_set
	|| neighbor_snpa.is_set
	|| local_extended_circuit_id.is_set
	|| neighbor_extended_circuit_id.is_set
	|| priority.is_set
	|| dis_system_id.is_set
	|| neighbor_circuit_type.is_set
	|| adjacency_type.is_set
	|| adjacency_state.is_set
	|| remaining_hold_time.is_set
	|| up_time.is_set
	|| restart_support.is_set
	|| restart_suppress.is_set
	|| restart_status.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State::has_operation() const
{
    for (auto const & leaf : topology.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : area_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : nlpid.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(neighbor_ipv4_address.yfilter)
	|| ydk::is_set(neighbor_ipv6_address.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(local_extended_circuit_id.yfilter)
	|| ydk::is_set(neighbor_extended_circuit_id.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(dis_system_id.yfilter)
	|| ydk::is_set(neighbor_circuit_type.yfilter)
	|| ydk::is_set(adjacency_type.yfilter)
	|| ydk::is_set(adjacency_state.yfilter)
	|| ydk::is_set(remaining_hold_time.yfilter)
	|| ydk::is_set(up_time.yfilter)
	|| ydk::is_set(restart_support.yfilter)
	|| ydk::is_set(restart_suppress.yfilter)
	|| ydk::is_set(restart_status.yfilter)
	|| ydk::is_set(topology.yfilter)
	|| ydk::is_set(area_address.yfilter)
	|| ydk::is_set(nlpid.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (neighbor_ipv4_address.is_set || is_set(neighbor_ipv4_address.yfilter)) leaf_name_data.push_back(neighbor_ipv4_address.get_name_leafdata());
    if (neighbor_ipv6_address.is_set || is_set(neighbor_ipv6_address.yfilter)) leaf_name_data.push_back(neighbor_ipv6_address.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (local_extended_circuit_id.is_set || is_set(local_extended_circuit_id.yfilter)) leaf_name_data.push_back(local_extended_circuit_id.get_name_leafdata());
    if (neighbor_extended_circuit_id.is_set || is_set(neighbor_extended_circuit_id.yfilter)) leaf_name_data.push_back(neighbor_extended_circuit_id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (dis_system_id.is_set || is_set(dis_system_id.yfilter)) leaf_name_data.push_back(dis_system_id.get_name_leafdata());
    if (neighbor_circuit_type.is_set || is_set(neighbor_circuit_type.yfilter)) leaf_name_data.push_back(neighbor_circuit_type.get_name_leafdata());
    if (adjacency_type.is_set || is_set(adjacency_type.yfilter)) leaf_name_data.push_back(adjacency_type.get_name_leafdata());
    if (adjacency_state.is_set || is_set(adjacency_state.yfilter)) leaf_name_data.push_back(adjacency_state.get_name_leafdata());
    if (remaining_hold_time.is_set || is_set(remaining_hold_time.yfilter)) leaf_name_data.push_back(remaining_hold_time.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());
    if (restart_support.is_set || is_set(restart_support.yfilter)) leaf_name_data.push_back(restart_support.get_name_leafdata());
    if (restart_suppress.is_set || is_set(restart_suppress.yfilter)) leaf_name_data.push_back(restart_suppress.get_name_leafdata());
    if (restart_status.is_set || is_set(restart_status.yfilter)) leaf_name_data.push_back(restart_status.get_name_leafdata());

    auto topology_name_datas = topology.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topology_name_datas.begin(), topology_name_datas.end());
    auto area_address_name_datas = area_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), area_address_name_datas.begin(), area_address_name_datas.end());
    auto nlpid_name_datas = nlpid.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nlpid_name_datas.begin(), nlpid_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ipv4-address")
    {
        neighbor_ipv4_address = value;
        neighbor_ipv4_address.value_namespace = name_space;
        neighbor_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ipv6-address")
    {
        neighbor_ipv6_address = value;
        neighbor_ipv6_address.value_namespace = name_space;
        neighbor_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-extended-circuit-id")
    {
        local_extended_circuit_id = value;
        local_extended_circuit_id.value_namespace = name_space;
        local_extended_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-extended-circuit-id")
    {
        neighbor_extended_circuit_id = value;
        neighbor_extended_circuit_id.value_namespace = name_space;
        neighbor_extended_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dis-system-id")
    {
        dis_system_id = value;
        dis_system_id.value_namespace = name_space;
        dis_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-circuit-type")
    {
        neighbor_circuit_type = value;
        neighbor_circuit_type.value_namespace = name_space;
        neighbor_circuit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-type")
    {
        adjacency_type = value;
        adjacency_type.value_namespace = name_space;
        adjacency_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-state")
    {
        adjacency_state = value;
        adjacency_state.value_namespace = name_space;
        adjacency_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-hold-time")
    {
        remaining_hold_time = value;
        remaining_hold_time.value_namespace = name_space;
        remaining_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-support")
    {
        restart_support = value;
        restart_support.value_namespace = name_space;
        restart_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-suppress")
    {
        restart_suppress = value;
        restart_suppress.value_namespace = name_space;
        restart_suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-status")
    {
        restart_status = value;
        restart_status.value_namespace = name_space;
        restart_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology")
    {
        topology.append(value);
    }
    if(value_path == "area-address")
    {
        area_address.append(value);
    }
    if(value_path == "nlpid")
    {
        nlpid.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-ipv4-address")
    {
        neighbor_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-ipv6-address")
    {
        neighbor_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "local-extended-circuit-id")
    {
        local_extended_circuit_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-extended-circuit-id")
    {
        neighbor_extended_circuit_id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "dis-system-id")
    {
        dis_system_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-circuit-type")
    {
        neighbor_circuit_type.yfilter = yfilter;
    }
    if(value_path == "adjacency-type")
    {
        adjacency_type.yfilter = yfilter;
    }
    if(value_path == "adjacency-state")
    {
        adjacency_state.yfilter = yfilter;
    }
    if(value_path == "remaining-hold-time")
    {
        remaining_hold_time.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
    if(value_path == "restart-support")
    {
        restart_support.yfilter = yfilter;
    }
    if(value_path == "restart-suppress")
    {
        restart_suppress.yfilter = yfilter;
    }
    if(value_path == "restart-status")
    {
        restart_status.yfilter = yfilter;
    }
    if(value_path == "topology")
    {
        topology.yfilter = yfilter;
    }
    if(value_path == "area-address")
    {
        area_address.yfilter = yfilter;
    }
    if(value_path == "nlpid")
    {
        nlpid.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "neighbor-ipv4-address" || name == "neighbor-ipv6-address" || name == "neighbor-snpa" || name == "local-extended-circuit-id" || name == "neighbor-extended-circuit-id" || name == "priority" || name == "dis-system-id" || name == "neighbor-circuit-type" || name == "adjacency-type" || name == "adjacency-state" || name == "remaining-hold-time" || name == "up-time" || name == "restart-support" || name == "restart-suppress" || name == "restart-status" || name == "topology" || name == "area-address" || name == "nlpid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::LevelsTimers()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State>())
{
    state->parent = this;

    yang_name = "levels-timers"; yang_parent_name = "interfaces-level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::~LevelsTimers()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "levels-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State::State()
    :
    hello_interval{YType::uint32, "hello-interval"},
    hello_multiplier{YType::uint8, "hello-multiplier"}
{

    yang_name = "state"; yang_parent_name = "levels-timers"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State::has_data() const
{
    if (is_presence_container) return true;
    return hello_interval.is_set
	|| hello_multiplier.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hello_multiplier.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "hello-multiplier")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafis()
    :
    levels_afi_safi(this, {})
{

    yang_name = "levels-afi-safis"; yang_parent_name = "interfaces-level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::~LevelsAfiSafis()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<levels_afi_safi.len(); index++)
    {
        if(levels_afi_safi[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::has_operation() const
{
    for (std::size_t index=0; index<levels_afi_safi.len(); index++)
    {
        if(levels_afi_safi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "levels-afi-safis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "levels-afi-safi")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi>();
        ent_->parent = this;
        levels_afi_safi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : levels_afi_safi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels-afi-safi")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::LevelsAfiSafi()
    :
    afi_name{YType::str, "afi-name"},
    safi_name{YType::str, "safi-name"}
        ,
    afi_safi_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState>())
    , afi_safi_segment_routing(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting>())
{
    afi_safi_state->parent = this;
    afi_safi_segment_routing->parent = this;

    yang_name = "levels-afi-safi"; yang_parent_name = "levels-afi-safis"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::~LevelsAfiSafi()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set
	|| (afi_safi_state !=  nullptr && afi_safi_state->has_data())
	|| (afi_safi_segment_routing !=  nullptr && afi_safi_segment_routing->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter)
	|| (afi_safi_state !=  nullptr && afi_safi_state->has_operation())
	|| (afi_safi_segment_routing !=  nullptr && afi_safi_segment_routing->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "levels-afi-safi";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safi-state")
    {
        if(afi_safi_state == nullptr)
        {
            afi_safi_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState>();
        }
        return afi_safi_state;
    }

    if(child_yang_name == "afi-safi-segment-routing")
    {
        if(afi_safi_segment_routing == nullptr)
        {
            afi_safi_segment_routing = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting>();
        }
        return afi_safi_segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afi_safi_state != nullptr)
    {
        _children["afi-safi-state"] = afi_safi_state;
    }

    if(afi_safi_segment_routing != nullptr)
    {
        _children["afi-safi-segment-routing"] = afi_safi_segment_routing;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-state" || name == "afi-safi-segment-routing" || name == "afi-name" || name == "safi-name")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState::AfiSafiState()
    :
    afi_name{YType::str, "afi-name"},
    safi_name{YType::str, "safi-name"},
    metric{YType::uint32, "metric"}
{

    yang_name = "afi-safi-state"; yang_parent_name = "levels-afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState::~AfiSafiState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set
	|| metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-name" || name == "safi-name" || name == "metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::AfiSafiSegmentRouting()
    :
    segment_routing_prefix_sids(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids>())
{
    segment_routing_prefix_sids->parent = this;

    yang_name = "afi-safi-segment-routing"; yang_parent_name = "levels-afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::~AfiSafiSegmentRouting()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return (segment_routing_prefix_sids !=  nullptr && segment_routing_prefix_sids->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (segment_routing_prefix_sids !=  nullptr && segment_routing_prefix_sids->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi-segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-prefix-sids")
    {
        if(segment_routing_prefix_sids == nullptr)
        {
            segment_routing_prefix_sids = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids>();
        }
        return segment_routing_prefix_sids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segment_routing_prefix_sids != nullptr)
    {
        _children["segment-routing-prefix-sids"] = segment_routing_prefix_sids;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-prefix-sids")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSids()
    :
    segment_routing_prefix_sid(this, {"prefix"})
{

    yang_name = "segment-routing-prefix-sids"; yang_parent_name = "afi-safi-segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::~SegmentRoutingPrefixSids()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_prefix_sid.len(); index++)
    {
        if(segment_routing_prefix_sid[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_prefix_sid.len(); index++)
    {
        if(segment_routing_prefix_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-prefix-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-prefix-sid")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid>();
        ent_->parent = this;
        segment_routing_prefix_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_prefix_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-prefix-sid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::SegmentRoutingPrefixSid()
    :
    prefix{YType::str, "prefix"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State>())
{
    state->parent = this;

    yang_name = "segment-routing-prefix-sid"; yang_parent_name = "segment-routing-prefix-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::~SegmentRoutingPrefixSid()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-prefix-sid";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "prefix")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State::State()
    :
    prefix{YType::str, "prefix"},
    sid_id{YType::str, "sid-id"},
    label_options{YType::enumeration, "label-options"}
{

    yang_name = "state"; yang_parent_name = "segment-routing-prefix-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| sid_id.is_set
	|| label_options.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_id.yfilter)
	|| ydk::is_set(label_options.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_id.is_set || is_set(sid_id.yfilter)) leaf_name_data.push_back(sid_id.get_name_leafdata());
    if (label_options.is_set || is_set(label_options.yfilter)) leaf_name_data.push_back(label_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-id")
    {
        sid_id = value;
        sid_id.value_namespace = name_space;
        sid_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-options")
    {
        label_options = value;
        label_options.value_namespace = name_space;
        label_options.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-id")
    {
        sid_id.yfilter = yfilter;
    }
    if(value_path == "label-options")
    {
        label_options.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "sid-id" || name == "label-options")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::CircuitCounters()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State>())
{
    state->parent = this;

    yang_name = "circuit-counters"; yang_parent_name = "isis-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::~CircuitCounters()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State::State()
    :
    adj_changes{YType::uint32, "adj-changes"},
    rejected_adj{YType::uint32, "rejected-adj"},
    id_field_len_mismatches{YType::uint32, "id-field-len-mismatches"},
    max_area_address_mismatches{YType::uint32, "max-area-address-mismatches"},
    auth_fails{YType::uint32, "auth-fails"},
    lan_dis_changes{YType::uint32, "lan-dis-changes"}
{

    yang_name = "state"; yang_parent_name = "circuit-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State::has_data() const
{
    if (is_presence_container) return true;
    return adj_changes.is_set
	|| rejected_adj.is_set
	|| id_field_len_mismatches.is_set
	|| max_area_address_mismatches.is_set
	|| auth_fails.is_set
	|| lan_dis_changes.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adj_changes.yfilter)
	|| ydk::is_set(rejected_adj.yfilter)
	|| ydk::is_set(id_field_len_mismatches.yfilter)
	|| ydk::is_set(max_area_address_mismatches.yfilter)
	|| ydk::is_set(auth_fails.yfilter)
	|| ydk::is_set(lan_dis_changes.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_changes.is_set || is_set(adj_changes.yfilter)) leaf_name_data.push_back(adj_changes.get_name_leafdata());
    if (rejected_adj.is_set || is_set(rejected_adj.yfilter)) leaf_name_data.push_back(rejected_adj.get_name_leafdata());
    if (id_field_len_mismatches.is_set || is_set(id_field_len_mismatches.yfilter)) leaf_name_data.push_back(id_field_len_mismatches.get_name_leafdata());
    if (max_area_address_mismatches.is_set || is_set(max_area_address_mismatches.yfilter)) leaf_name_data.push_back(max_area_address_mismatches.get_name_leafdata());
    if (auth_fails.is_set || is_set(auth_fails.yfilter)) leaf_name_data.push_back(auth_fails.get_name_leafdata());
    if (lan_dis_changes.is_set || is_set(lan_dis_changes.yfilter)) leaf_name_data.push_back(lan_dis_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adj-changes")
    {
        adj_changes = value;
        adj_changes.value_namespace = name_space;
        adj_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-adj")
    {
        rejected_adj = value;
        rejected_adj.value_namespace = name_space;
        rejected_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-field-len-mismatches")
    {
        id_field_len_mismatches = value;
        id_field_len_mismatches.value_namespace = name_space;
        id_field_len_mismatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-address-mismatches")
    {
        max_area_address_mismatches = value;
        max_area_address_mismatches.value_namespace = name_space;
        max_area_address_mismatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-fails")
    {
        auth_fails = value;
        auth_fails.value_namespace = name_space;
        auth_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lan-dis-changes")
    {
        lan_dis_changes = value;
        lan_dis_changes.value_namespace = name_space;
        lan_dis_changes.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adj-changes")
    {
        adj_changes.yfilter = yfilter;
    }
    if(value_path == "rejected-adj")
    {
        rejected_adj.yfilter = yfilter;
    }
    if(value_path == "id-field-len-mismatches")
    {
        id_field_len_mismatches.yfilter = yfilter;
    }
    if(value_path == "max-area-address-mismatches")
    {
        max_area_address_mismatches.yfilter = yfilter;
    }
    if(value_path == "auth-fails")
    {
        auth_fails.yfilter = yfilter;
    }
    if(value_path == "lan-dis-changes")
    {
        lan_dis_changes.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-changes" || name == "rejected-adj" || name == "id-field-len-mismatches" || name == "max-area-address-mismatches" || name == "auth-fails" || name == "lan-dis-changes")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::InterfacesAuthentication()
    :
    key(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key>())
{
    key->parent = this;

    yang_name = "interfaces-authentication"; yang_parent_name = "isis-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::~InterfacesAuthentication()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return (key !=  nullptr && key->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::Key()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State>())
{
    state->parent = this;

    yang_name = "key"; yang_parent_name = "interfaces-authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::~Key()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State::State()
    :
    auth_password{YType::str, "auth-password"}
{

    yang_name = "state"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State::has_data() const
{
    if (is_presence_container) return true;
    return auth_password.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_password.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_password.is_set || is_set(auth_password.yfilter)) leaf_name_data.push_back(auth_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-password")
    {
        auth_password = value;
        auth_password.value_namespace = name_space;
        auth_password.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-password")
    {
        auth_password.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-password")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::InterfacesTimers()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State>())
{
    state->parent = this;

    yang_name = "interfaces-timers"; yang_parent_name = "isis-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::~InterfacesTimers()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State::State()
    :
    csnp_interval{YType::uint16, "csnp-interval"},
    lsp_pacing_interval{YType::uint64, "lsp-pacing-interval"}
{

    yang_name = "state"; yang_parent_name = "interfaces-timers"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State::has_data() const
{
    if (is_presence_container) return true;
    return csnp_interval.is_set
	|| lsp_pacing_interval.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csnp_interval.yfilter)
	|| ydk::is_set(lsp_pacing_interval.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csnp_interval.is_set || is_set(csnp_interval.yfilter)) leaf_name_data.push_back(csnp_interval.get_name_leafdata());
    if (lsp_pacing_interval.is_set || is_set(lsp_pacing_interval.yfilter)) leaf_name_data.push_back(lsp_pacing_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csnp-interval")
    {
        csnp_interval = value;
        csnp_interval.value_namespace = name_space;
        csnp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval = value;
        lsp_pacing_interval.value_namespace = name_space;
        lsp_pacing_interval.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csnp-interval")
    {
        csnp_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-interval" || name == "lsp-pacing-interval")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Global()
    :
    segment_routing(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting>())
    , lsp_bit(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit>())
    , nsr(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr>())
    , graceful_restart(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart>())
    , global_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState>())
    , inter_level_propagation_policies(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies>())
    , afi_safis(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis>())
    , timers(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers>())
    , transport(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport>())
{
    segment_routing->parent = this;
    lsp_bit->parent = this;
    nsr->parent = this;
    graceful_restart->parent = this;
    global_state->parent = this;
    inter_level_propagation_policies->parent = this;
    afi_safis->parent = this;
    timers->parent = this;
    transport->parent = this;

    yang_name = "global"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::~Global()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::has_data() const
{
    if (is_presence_container) return true;
    return (segment_routing !=  nullptr && segment_routing->has_data())
	|| (lsp_bit !=  nullptr && lsp_bit->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (global_state !=  nullptr && global_state->has_data())
	|| (inter_level_propagation_policies !=  nullptr && inter_level_propagation_policies->has_data())
	|| (afi_safis !=  nullptr && afi_safis->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::has_operation() const
{
    return is_set(yfilter)
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (lsp_bit !=  nullptr && lsp_bit->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (global_state !=  nullptr && global_state->has_operation())
	|| (inter_level_propagation_policies !=  nullptr && inter_level_propagation_policies->has_operation())
	|| (afi_safis !=  nullptr && afi_safis->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "lsp-bit")
    {
        if(lsp_bit == nullptr)
        {
            lsp_bit = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit>();
        }
        return lsp_bit;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "global-state")
    {
        if(global_state == nullptr)
        {
            global_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState>();
        }
        return global_state;
    }

    if(child_yang_name == "inter-level-propagation-policies")
    {
        if(inter_level_propagation_policies == nullptr)
        {
            inter_level_propagation_policies = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies>();
        }
        return inter_level_propagation_policies;
    }

    if(child_yang_name == "afi-safis")
    {
        if(afi_safis == nullptr)
        {
            afi_safis = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis>();
        }
        return afi_safis;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    if(lsp_bit != nullptr)
    {
        _children["lsp-bit"] = lsp_bit;
    }

    if(nsr != nullptr)
    {
        _children["nsr"] = nsr;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(global_state != nullptr)
    {
        _children["global-state"] = global_state;
    }

    if(inter_level_propagation_policies != nullptr)
    {
        _children["inter-level-propagation-policies"] = inter_level_propagation_policies;
    }

    if(afi_safis != nullptr)
    {
        _children["afi-safis"] = afi_safis;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing" || name == "lsp-bit" || name == "nsr" || name == "graceful-restart" || name == "global-state" || name == "inter-level-propagation-policies" || name == "afi-safis" || name == "timers" || name == "transport")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::SegmentRouting()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State>())
{
    state->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::~SegmentRouting()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::LspBit()
    :
    overload_bit(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit>())
    , attached_bit(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit>())
{
    overload_bit->parent = this;
    attached_bit->parent = this;

    yang_name = "lsp-bit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::~LspBit()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::has_data() const
{
    if (is_presence_container) return true;
    return (overload_bit !=  nullptr && overload_bit->has_data())
	|| (attached_bit !=  nullptr && attached_bit->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::has_operation() const
{
    return is_set(yfilter)
	|| (overload_bit !=  nullptr && overload_bit->has_operation())
	|| (attached_bit !=  nullptr && attached_bit->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overload-bit")
    {
        if(overload_bit == nullptr)
        {
            overload_bit = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit>();
        }
        return overload_bit;
    }

    if(child_yang_name == "attached-bit")
    {
        if(attached_bit == nullptr)
        {
            attached_bit = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit>();
        }
        return attached_bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(overload_bit != nullptr)
    {
        _children["overload-bit"] = overload_bit;
    }

    if(attached_bit != nullptr)
    {
        _children["attached-bit"] = attached_bit;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overload-bit" || name == "attached-bit")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBit()
    :
    overload_bit_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState>())
    , reset_triggers(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers>())
{
    overload_bit_state->parent = this;
    reset_triggers->parent = this;

    yang_name = "overload-bit"; yang_parent_name = "lsp-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::~OverloadBit()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::has_data() const
{
    if (is_presence_container) return true;
    return (overload_bit_state !=  nullptr && overload_bit_state->has_data())
	|| (reset_triggers !=  nullptr && reset_triggers->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::has_operation() const
{
    return is_set(yfilter)
	|| (overload_bit_state !=  nullptr && overload_bit_state->has_operation())
	|| (reset_triggers !=  nullptr && reset_triggers->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overload-bit-state")
    {
        if(overload_bit_state == nullptr)
        {
            overload_bit_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState>();
        }
        return overload_bit_state;
    }

    if(child_yang_name == "reset-triggers")
    {
        if(reset_triggers == nullptr)
        {
            reset_triggers = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers>();
        }
        return reset_triggers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(overload_bit_state != nullptr)
    {
        _children["overload-bit-state"] = overload_bit_state;
    }

    if(reset_triggers != nullptr)
    {
        _children["reset-triggers"] = reset_triggers;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overload-bit-state" || name == "reset-triggers")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState::OverloadBitState()
    :
    set_bit{YType::boolean, "set-bit"},
    set_bit_on_boot{YType::boolean, "set-bit-on-boot"},
    advertise_high_metric{YType::boolean, "advertise-high-metric"}
{

    yang_name = "overload-bit-state"; yang_parent_name = "overload-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState::~OverloadBitState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState::has_data() const
{
    if (is_presence_container) return true;
    return set_bit.is_set
	|| set_bit_on_boot.is_set
	|| advertise_high_metric.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_bit.yfilter)
	|| ydk::is_set(set_bit_on_boot.yfilter)
	|| ydk::is_set(advertise_high_metric.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-bit-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_bit.is_set || is_set(set_bit.yfilter)) leaf_name_data.push_back(set_bit.get_name_leafdata());
    if (set_bit_on_boot.is_set || is_set(set_bit_on_boot.yfilter)) leaf_name_data.push_back(set_bit_on_boot.get_name_leafdata());
    if (advertise_high_metric.is_set || is_set(advertise_high_metric.yfilter)) leaf_name_data.push_back(advertise_high_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-bit")
    {
        set_bit = value;
        set_bit.value_namespace = name_space;
        set_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-bit-on-boot")
    {
        set_bit_on_boot = value;
        set_bit_on_boot.value_namespace = name_space;
        set_bit_on_boot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-high-metric")
    {
        advertise_high_metric = value;
        advertise_high_metric.value_namespace = name_space;
        advertise_high_metric.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-bit")
    {
        set_bit.yfilter = yfilter;
    }
    if(value_path == "set-bit-on-boot")
    {
        set_bit_on_boot.yfilter = yfilter;
    }
    if(value_path == "advertise-high-metric")
    {
        advertise_high_metric.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-bit" || name == "set-bit-on-boot" || name == "advertise-high-metric")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTriggers()
    :
    reset_trigger(this, {"reset_trigger"})
{

    yang_name = "reset-triggers"; yang_parent_name = "overload-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::~ResetTriggers()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reset_trigger.len(); index++)
    {
        if(reset_trigger[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::has_operation() const
{
    for (std::size_t index=0; index<reset_trigger.len(); index++)
    {
        if(reset_trigger[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset-triggers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reset-trigger")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger>();
        ent_->parent = this;
        reset_trigger.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reset_trigger.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset-trigger")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::ResetTrigger()
    :
    reset_trigger{YType::str, "reset-trigger"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State>())
{
    state->parent = this;

    yang_name = "reset-trigger"; yang_parent_name = "reset-triggers"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::~ResetTrigger()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::has_data() const
{
    if (is_presence_container) return true;
    return reset_trigger.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reset_trigger.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset-trigger";
    ADD_KEY_TOKEN(reset_trigger, "reset-trigger");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reset_trigger.is_set || is_set(reset_trigger.yfilter)) leaf_name_data.push_back(reset_trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reset-trigger")
    {
        reset_trigger = value;
        reset_trigger.value_namespace = name_space;
        reset_trigger.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reset-trigger")
    {
        reset_trigger.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "reset-trigger")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::State()
    :
    reset_trigger{YType::str, "reset-trigger"},
    delay{YType::uint16, "delay"}
{

    yang_name = "state"; yang_parent_name = "reset-trigger"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::has_data() const
{
    if (is_presence_container) return true;
    return reset_trigger.is_set
	|| delay.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reset_trigger.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reset_trigger.is_set || is_set(reset_trigger.yfilter)) leaf_name_data.push_back(reset_trigger.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reset-trigger")
    {
        reset_trigger = value;
        reset_trigger.value_namespace = name_space;
        reset_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reset-trigger")
    {
        reset_trigger.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset-trigger" || name == "delay")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::AttachedBit()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State>())
{
    state->parent = this;

    yang_name = "attached-bit"; yang_parent_name = "lsp-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::~AttachedBit()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::State()
    :
    ignore_bit{YType::boolean, "ignore-bit"},
    suppress_bit{YType::boolean, "suppress-bit"}
{

    yang_name = "state"; yang_parent_name = "attached-bit"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::has_data() const
{
    if (is_presence_container) return true;
    return ignore_bit.is_set
	|| suppress_bit.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_bit.yfilter)
	|| ydk::is_set(suppress_bit.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_bit.is_set || is_set(ignore_bit.yfilter)) leaf_name_data.push_back(ignore_bit.get_name_leafdata());
    if (suppress_bit.is_set || is_set(suppress_bit.yfilter)) leaf_name_data.push_back(suppress_bit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-bit")
    {
        ignore_bit = value;
        ignore_bit.value_namespace = name_space;
        ignore_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-bit")
    {
        suppress_bit = value;
        suppress_bit.value_namespace = name_space;
        suppress_bit.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-bit")
    {
        ignore_bit.yfilter = yfilter;
    }
    if(value_path == "suppress-bit")
    {
        suppress_bit.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-bit" || name == "suppress-bit")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::Nsr()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State>())
{
    state->parent = this;

    yang_name = "nsr"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::~Nsr()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::GracefulRestart()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State>())
{
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::~GracefulRestart()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState::GlobalState()
    :
    authentication_check{YType::boolean, "authentication-check"},
    instance{YType::str, "instance"},
    level_capability{YType::enumeration, "level-capability"},
    max_ecmp_paths{YType::uint8, "max-ecmp-paths"},
    iid_tlv{YType::boolean, "iid-tlv"},
    fast_flooding{YType::boolean, "fast-flooding"},
    net{YType::str, "net"}
{

    yang_name = "global-state"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState::~GlobalState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : net.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authentication_check.is_set
	|| instance.is_set
	|| level_capability.is_set
	|| max_ecmp_paths.is_set
	|| iid_tlv.is_set
	|| fast_flooding.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState::has_operation() const
{
    for (auto const & leaf : net.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authentication_check.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(level_capability.yfilter)
	|| ydk::is_set(max_ecmp_paths.yfilter)
	|| ydk::is_set(iid_tlv.yfilter)
	|| ydk::is_set(fast_flooding.yfilter)
	|| ydk::is_set(net.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_check.is_set || is_set(authentication_check.yfilter)) leaf_name_data.push_back(authentication_check.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (level_capability.is_set || is_set(level_capability.yfilter)) leaf_name_data.push_back(level_capability.get_name_leafdata());
    if (max_ecmp_paths.is_set || is_set(max_ecmp_paths.yfilter)) leaf_name_data.push_back(max_ecmp_paths.get_name_leafdata());
    if (iid_tlv.is_set || is_set(iid_tlv.yfilter)) leaf_name_data.push_back(iid_tlv.get_name_leafdata());
    if (fast_flooding.is_set || is_set(fast_flooding.yfilter)) leaf_name_data.push_back(fast_flooding.get_name_leafdata());

    auto net_name_datas = net.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), net_name_datas.begin(), net_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-check")
    {
        authentication_check = value;
        authentication_check.value_namespace = name_space;
        authentication_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-capability")
    {
        level_capability = value;
        level_capability.value_namespace = name_space;
        level_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-ecmp-paths")
    {
        max_ecmp_paths = value;
        max_ecmp_paths.value_namespace = name_space;
        max_ecmp_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iid-tlv")
    {
        iid_tlv = value;
        iid_tlv.value_namespace = name_space;
        iid_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-flooding")
    {
        fast_flooding = value;
        fast_flooding.value_namespace = name_space;
        fast_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net")
    {
        net.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-check")
    {
        authentication_check.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "level-capability")
    {
        level_capability.yfilter = yfilter;
    }
    if(value_path == "max-ecmp-paths")
    {
        max_ecmp_paths.yfilter = yfilter;
    }
    if(value_path == "iid-tlv")
    {
        iid_tlv.yfilter = yfilter;
    }
    if(value_path == "fast-flooding")
    {
        fast_flooding.yfilter = yfilter;
    }
    if(value_path == "net")
    {
        net.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-check" || name == "instance" || name == "level-capability" || name == "max-ecmp-paths" || name == "iid-tlv" || name == "fast-flooding" || name == "net")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::InterLevelPropagationPolicies()
    :
    level1_to_level2(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2>())
    , level2_to_level1(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1>())
{
    level1_to_level2->parent = this;
    level2_to_level1->parent = this;

    yang_name = "inter-level-propagation-policies"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::~InterLevelPropagationPolicies()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::has_data() const
{
    if (is_presence_container) return true;
    return (level1_to_level2 !=  nullptr && level1_to_level2->has_data())
	|| (level2_to_level1 !=  nullptr && level2_to_level1->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::has_operation() const
{
    return is_set(yfilter)
	|| (level1_to_level2 !=  nullptr && level1_to_level2->has_operation())
	|| (level2_to_level1 !=  nullptr && level2_to_level1->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-level-propagation-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level1-to-level2")
    {
        if(level1_to_level2 == nullptr)
        {
            level1_to_level2 = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2>();
        }
        return level1_to_level2;
    }

    if(child_yang_name == "level2-to-level1")
    {
        if(level2_to_level1 == nullptr)
        {
            level2_to_level1 = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1>();
        }
        return level2_to_level1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level1_to_level2 != nullptr)
    {
        _children["level1-to-level2"] = level1_to_level2;
    }

    if(level2_to_level1 != nullptr)
    {
        _children["level2-to-level1"] = level2_to_level1;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level1-to-level2" || name == "level2-to-level1")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::Level1ToLevel2()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State>())
{
    state->parent = this;

    yang_name = "level1-to-level2"; yang_parent_name = "inter-level-propagation-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::~Level1ToLevel2()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-to-level2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::State()
    :
    import_policy{YType::str, "import-policy"}
{

    yang_name = "state"; yang_parent_name = "level1-to-level2"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::Level2ToLevel1()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State>())
{
    state->parent = this;

    yang_name = "level2-to-level1"; yang_parent_name = "inter-level-propagation-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::~Level2ToLevel1()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-to-level1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::State()
    :
    import_policy{YType::str, "import-policy"}
{

    yang_name = "state"; yang_parent_name = "level2-to-level1"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::has_operation() const
{
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(import_policy.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-policy")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafis()
    :
    afi_safi(this, {})
{

    yang_name = "afi-safis"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::~AfiSafis()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<afi_safi.len(); index++)
    {
        if(afi_safi[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::has_operation() const
{
    for (std::size_t index=0; index<afi_safi.len(); index++)
    {
        if(afi_safi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safi")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi>();
        ent_->parent = this;
        afi_safi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : afi_safi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::AfiSafi()
    :
    afi_name{YType::str, "afi-name"},
    safi_name{YType::str, "safi-name"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State>())
    , multi_topology(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology>())
{
    state->parent = this;
    multi_topology->parent = this;

    yang_name = "afi-safi"; yang_parent_name = "afi-safis"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::~AfiSafi()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set
	|| (state !=  nullptr && state->has_data())
	|| (multi_topology !=  nullptr && multi_topology->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (multi_topology !=  nullptr && multi_topology->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State>();
        }
        return state;
    }

    if(child_yang_name == "multi-topology")
    {
        if(multi_topology == nullptr)
        {
            multi_topology = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology>();
        }
        return multi_topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(multi_topology != nullptr)
    {
        _children["multi-topology"] = multi_topology;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "multi-topology" || name == "afi-name" || name == "safi-name")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State::State()
    :
    afi_name{YType::str, "afi-name"},
    safi_name{YType::str, "safi-name"},
    metric{YType::uint32, "metric"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set
	|| metric.is_set
	|| enabled.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-name" || name == "safi-name" || name == "metric" || name == "enabled")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::MultiTopology()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State>())
{
    state->parent = this;

    yang_name = "multi-topology"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::~MultiTopology()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State::State()
    :
    afi_name{YType::str, "afi-name"},
    safi_name{YType::str, "safi-name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "multi-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State::has_data() const
{
    if (is_presence_container) return true;
    return afi_name.is_set
	|| safi_name.is_set
	|| enabled.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_name.yfilter)
	|| ydk::is_set(safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_name.is_set || is_set(afi_name.yfilter)) leaf_name_data.push_back(afi_name.get_name_leafdata());
    if (safi_name.is_set || is_set(safi_name.yfilter)) leaf_name_data.push_back(safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-name")
    {
        afi_name = value;
        afi_name.value_namespace = name_space;
        afi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi-name")
    {
        safi_name = value;
        safi_name.value_namespace = name_space;
        safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-name")
    {
        afi_name.yfilter = yfilter;
    }
    if(value_path == "safi-name")
    {
        safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-name" || name == "safi-name" || name == "enabled")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Timers()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State>())
    , spf(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf>())
    , lsp_generation(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration>())
{
    state->parent = this;
    spf->parent = this;
    lsp_generation->parent = this;

    yang_name = "timers"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::~Timers()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data())
	|| (spf !=  nullptr && spf->has_data())
	|| (lsp_generation !=  nullptr && lsp_generation->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (spf !=  nullptr && spf->has_operation())
	|| (lsp_generation !=  nullptr && lsp_generation->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State>();
        }
        return state;
    }

    if(child_yang_name == "spf")
    {
        if(spf == nullptr)
        {
            spf = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf>();
        }
        return spf;
    }

    if(child_yang_name == "lsp-generation")
    {
        if(lsp_generation == nullptr)
        {
            lsp_generation = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration>();
        }
        return lsp_generation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(spf != nullptr)
    {
        _children["spf"] = spf;
    }

    if(lsp_generation != nullptr)
    {
        _children["lsp-generation"] = lsp_generation;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "spf" || name == "lsp-generation")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::State()
    :
    lsp_lifetime_interval{YType::uint16, "lsp-lifetime-interval"},
    lsp_refresh_interval{YType::uint16, "lsp-refresh-interval"}
{

    yang_name = "state"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::has_data() const
{
    if (is_presence_container) return true;
    return lsp_lifetime_interval.is_set
	|| lsp_refresh_interval.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_lifetime_interval.yfilter)
	|| ydk::is_set(lsp_refresh_interval.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_lifetime_interval.is_set || is_set(lsp_lifetime_interval.yfilter)) leaf_name_data.push_back(lsp_lifetime_interval.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.yfilter)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-lifetime-interval")
    {
        lsp_lifetime_interval = value;
        lsp_lifetime_interval.value_namespace = name_space;
        lsp_lifetime_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval = value;
        lsp_refresh_interval.value_namespace = name_space;
        lsp_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-lifetime-interval")
    {
        lsp_lifetime_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-lifetime-interval" || name == "lsp-refresh-interval")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::Spf()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State>())
{
    state->parent = this;

    yang_name = "spf"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::~Spf()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::State()
    :
    spf_hold_interval{YType::uint64, "spf-hold-interval"},
    spf_first_interval{YType::uint64, "spf-first-interval"},
    spf_second_interval{YType::uint64, "spf-second-interval"},
    adaptive_timer{YType::enumeration, "adaptive-timer"}
{

    yang_name = "state"; yang_parent_name = "spf"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::has_data() const
{
    if (is_presence_container) return true;
    return spf_hold_interval.is_set
	|| spf_first_interval.is_set
	|| spf_second_interval.is_set
	|| adaptive_timer.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_hold_interval.yfilter)
	|| ydk::is_set(spf_first_interval.yfilter)
	|| ydk::is_set(spf_second_interval.yfilter)
	|| ydk::is_set(adaptive_timer.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_hold_interval.is_set || is_set(spf_hold_interval.yfilter)) leaf_name_data.push_back(spf_hold_interval.get_name_leafdata());
    if (spf_first_interval.is_set || is_set(spf_first_interval.yfilter)) leaf_name_data.push_back(spf_first_interval.get_name_leafdata());
    if (spf_second_interval.is_set || is_set(spf_second_interval.yfilter)) leaf_name_data.push_back(spf_second_interval.get_name_leafdata());
    if (adaptive_timer.is_set || is_set(adaptive_timer.yfilter)) leaf_name_data.push_back(adaptive_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-hold-interval")
    {
        spf_hold_interval = value;
        spf_hold_interval.value_namespace = name_space;
        spf_hold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-first-interval")
    {
        spf_first_interval = value;
        spf_first_interval.value_namespace = name_space;
        spf_first_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-second-interval")
    {
        spf_second_interval = value;
        spf_second_interval.value_namespace = name_space;
        spf_second_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adaptive-timer")
    {
        adaptive_timer = value;
        adaptive_timer.value_namespace = name_space;
        adaptive_timer.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-hold-interval")
    {
        spf_hold_interval.yfilter = yfilter;
    }
    if(value_path == "spf-first-interval")
    {
        spf_first_interval.yfilter = yfilter;
    }
    if(value_path == "spf-second-interval")
    {
        spf_second_interval.yfilter = yfilter;
    }
    if(value_path == "adaptive-timer")
    {
        adaptive_timer.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-hold-interval" || name == "spf-first-interval" || name == "spf-second-interval" || name == "adaptive-timer")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::LspGeneration()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State>())
{
    state->parent = this;

    yang_name = "lsp-generation"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::~LspGeneration()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-generation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::State()
    :
    lsp_max_wait_interval{YType::uint64, "lsp-max-wait-interval"},
    lsp_first_wait_interval{YType::uint64, "lsp-first-wait-interval"},
    lsp_second_wait_interval{YType::uint64, "lsp-second-wait-interval"},
    adaptive_timer{YType::enumeration, "adaptive-timer"}
{

    yang_name = "state"; yang_parent_name = "lsp-generation"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::has_data() const
{
    if (is_presence_container) return true;
    return lsp_max_wait_interval.is_set
	|| lsp_first_wait_interval.is_set
	|| lsp_second_wait_interval.is_set
	|| adaptive_timer.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_max_wait_interval.yfilter)
	|| ydk::is_set(lsp_first_wait_interval.yfilter)
	|| ydk::is_set(lsp_second_wait_interval.yfilter)
	|| ydk::is_set(adaptive_timer.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_max_wait_interval.is_set || is_set(lsp_max_wait_interval.yfilter)) leaf_name_data.push_back(lsp_max_wait_interval.get_name_leafdata());
    if (lsp_first_wait_interval.is_set || is_set(lsp_first_wait_interval.yfilter)) leaf_name_data.push_back(lsp_first_wait_interval.get_name_leafdata());
    if (lsp_second_wait_interval.is_set || is_set(lsp_second_wait_interval.yfilter)) leaf_name_data.push_back(lsp_second_wait_interval.get_name_leafdata());
    if (adaptive_timer.is_set || is_set(adaptive_timer.yfilter)) leaf_name_data.push_back(adaptive_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-max-wait-interval")
    {
        lsp_max_wait_interval = value;
        lsp_max_wait_interval.value_namespace = name_space;
        lsp_max_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-first-wait-interval")
    {
        lsp_first_wait_interval = value;
        lsp_first_wait_interval.value_namespace = name_space;
        lsp_first_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-second-wait-interval")
    {
        lsp_second_wait_interval = value;
        lsp_second_wait_interval.value_namespace = name_space;
        lsp_second_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adaptive-timer")
    {
        adaptive_timer = value;
        adaptive_timer.value_namespace = name_space;
        adaptive_timer.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-max-wait-interval")
    {
        lsp_max_wait_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-first-wait-interval")
    {
        lsp_first_wait_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-second-wait-interval")
    {
        lsp_second_wait_interval.yfilter = yfilter;
    }
    if(value_path == "adaptive-timer")
    {
        adaptive_timer.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-max-wait-interval" || name == "lsp-first-wait-interval" || name == "lsp-second-wait-interval" || name == "adaptive-timer")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::Transport()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State>())
{
    state->parent = this;

    yang_name = "transport"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::~Transport()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::State()
    :
    lsp_mtu_size{YType::uint16, "lsp-mtu-size"}
{

    yang_name = "state"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::has_data() const
{
    if (is_presence_container) return true;
    return lsp_mtu_size.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_mtu_size.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_mtu_size.is_set || is_set(lsp_mtu_size.yfilter)) leaf_name_data.push_back(lsp_mtu_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-mtu-size")
    {
        lsp_mtu_size = value;
        lsp_mtu_size.value_namespace = name_space;
        lsp_mtu_size.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-mtu-size")
    {
        lsp_mtu_size.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-mtu-size")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Levels()
    :
    level(this, {"level_number"})
{

    yang_name = "levels"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::~Levels()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::has_operation() const
{
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level>();
        ent_->parent = this;
        level.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::Level()
    :
    level_number{YType::uint32, "level-number"}
        ,
    route_preference(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference>())
    , levels_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState>())
    , traffic_engineering(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering>())
    , levels_authentication(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication>())
    , system_level_counters(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters>())
    , link_state_databases(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases>())
{
    route_preference->parent = this;
    levels_state->parent = this;
    traffic_engineering->parent = this;
    levels_authentication->parent = this;
    system_level_counters->parent = this;
    link_state_databases->parent = this;

    yang_name = "level"; yang_parent_name = "levels"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::~Level()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::has_data() const
{
    if (is_presence_container) return true;
    return level_number.is_set
	|| (route_preference !=  nullptr && route_preference->has_data())
	|| (levels_state !=  nullptr && levels_state->has_data())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_data())
	|| (levels_authentication !=  nullptr && levels_authentication->has_data())
	|| (system_level_counters !=  nullptr && system_level_counters->has_data())
	|| (link_state_databases !=  nullptr && link_state_databases->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_number.yfilter)
	|| (route_preference !=  nullptr && route_preference->has_operation())
	|| (levels_state !=  nullptr && levels_state->has_operation())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_operation())
	|| (levels_authentication !=  nullptr && levels_authentication->has_operation())
	|| (system_level_counters !=  nullptr && system_level_counters->has_operation())
	|| (link_state_databases !=  nullptr && link_state_databases->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    ADD_KEY_TOKEN(level_number, "level-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_number.is_set || is_set(level_number.yfilter)) leaf_name_data.push_back(level_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-preference")
    {
        if(route_preference == nullptr)
        {
            route_preference = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference>();
        }
        return route_preference;
    }

    if(child_yang_name == "levels-state")
    {
        if(levels_state == nullptr)
        {
            levels_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState>();
        }
        return levels_state;
    }

    if(child_yang_name == "traffic-engineering")
    {
        if(traffic_engineering == nullptr)
        {
            traffic_engineering = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering>();
        }
        return traffic_engineering;
    }

    if(child_yang_name == "levels-authentication")
    {
        if(levels_authentication == nullptr)
        {
            levels_authentication = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication>();
        }
        return levels_authentication;
    }

    if(child_yang_name == "system-level-counters")
    {
        if(system_level_counters == nullptr)
        {
            system_level_counters = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters>();
        }
        return system_level_counters;
    }

    if(child_yang_name == "link-state-databases")
    {
        if(link_state_databases == nullptr)
        {
            link_state_databases = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases>();
        }
        return link_state_databases;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_preference != nullptr)
    {
        _children["route-preference"] = route_preference;
    }

    if(levels_state != nullptr)
    {
        _children["levels-state"] = levels_state;
    }

    if(traffic_engineering != nullptr)
    {
        _children["traffic-engineering"] = traffic_engineering;
    }

    if(levels_authentication != nullptr)
    {
        _children["levels-authentication"] = levels_authentication;
    }

    if(system_level_counters != nullptr)
    {
        _children["system-level-counters"] = system_level_counters;
    }

    if(link_state_databases != nullptr)
    {
        _children["link-state-databases"] = link_state_databases;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-number")
    {
        level_number = value;
        level_number.value_namespace = name_space;
        level_number.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-number")
    {
        level_number.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-preference" || name == "levels-state" || name == "traffic-engineering" || name == "levels-authentication" || name == "system-level-counters" || name == "link-state-databases" || name == "level-number")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::RoutePreference()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State>())
{
    state->parent = this;

    yang_name = "route-preference"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::~RoutePreference()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State::State()
    :
    external_route_preference{YType::uint8, "external-route-preference"},
    internal_route_preference{YType::uint8, "internal-route-preference"}
{

    yang_name = "state"; yang_parent_name = "route-preference"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State::has_data() const
{
    if (is_presence_container) return true;
    return external_route_preference.is_set
	|| internal_route_preference.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_route_preference.yfilter)
	|| ydk::is_set(internal_route_preference.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_preference.is_set || is_set(external_route_preference.yfilter)) leaf_name_data.push_back(external_route_preference.get_name_leafdata());
    if (internal_route_preference.is_set || is_set(internal_route_preference.yfilter)) leaf_name_data.push_back(internal_route_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-route-preference")
    {
        external_route_preference = value;
        external_route_preference.value_namespace = name_space;
        external_route_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-preference")
    {
        internal_route_preference = value;
        internal_route_preference.value_namespace = name_space;
        internal_route_preference.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-route-preference")
    {
        external_route_preference.yfilter = yfilter;
    }
    if(value_path == "internal-route-preference")
    {
        internal_route_preference.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-route-preference" || name == "internal-route-preference")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState::LevelsState()
    :
    level_number{YType::uint8, "level-number"},
    metric_style{YType::enumeration, "metric-style"},
    authentication_check{YType::boolean, "authentication-check"}
{

    yang_name = "levels-state"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState::~LevelsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState::has_data() const
{
    if (is_presence_container) return true;
    return level_number.is_set
	|| metric_style.is_set
	|| authentication_check.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_number.yfilter)
	|| ydk::is_set(metric_style.yfilter)
	|| ydk::is_set(authentication_check.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "levels-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_number.is_set || is_set(level_number.yfilter)) leaf_name_data.push_back(level_number.get_name_leafdata());
    if (metric_style.is_set || is_set(metric_style.yfilter)) leaf_name_data.push_back(metric_style.get_name_leafdata());
    if (authentication_check.is_set || is_set(authentication_check.yfilter)) leaf_name_data.push_back(authentication_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-number")
    {
        level_number = value;
        level_number.value_namespace = name_space;
        level_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-style")
    {
        metric_style = value;
        metric_style.value_namespace = name_space;
        metric_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-check")
    {
        authentication_check = value;
        authentication_check.value_namespace = name_space;
        authentication_check.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-number")
    {
        level_number.yfilter = yfilter;
    }
    if(value_path == "metric-style")
    {
        metric_style.yfilter = yfilter;
    }
    if(value_path == "authentication-check")
    {
        authentication_check.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-number" || name == "metric-style" || name == "authentication-check")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::TrafficEngineering()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State>())
{
    state->parent = this;

    yang_name = "traffic-engineering"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::~TrafficEngineering()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-engineering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State::State()
    :
    enabled{YType::boolean, "enabled"},
    ipv4_router_id{YType::str, "ipv4-router-id"},
    ipv6_router_id{YType::str, "ipv6-router-id"}
{

    yang_name = "state"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| ipv4_router_id.is_set
	|| ipv6_router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(ipv4_router_id.yfilter)
	|| ydk::is_set(ipv6_router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ipv4_router_id.is_set || is_set(ipv4_router_id.yfilter)) leaf_name_data.push_back(ipv4_router_id.get_name_leafdata());
    if (ipv6_router_id.is_set || is_set(ipv6_router_id.yfilter)) leaf_name_data.push_back(ipv6_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-router-id")
    {
        ipv4_router_id = value;
        ipv4_router_id.value_namespace = name_space;
        ipv4_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-router-id")
    {
        ipv6_router_id = value;
        ipv6_router_id.value_namespace = name_space;
        ipv6_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "ipv4-router-id")
    {
        ipv4_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-router-id")
    {
        ipv6_router_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "ipv4-router-id" || name == "ipv6-router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::LevelsAuthentication()
    :
    key(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key>())
{
    key->parent = this;

    yang_name = "levels-authentication"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::~LevelsAuthentication()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return (key !=  nullptr && key->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "levels-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::Key()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State>())
{
    state->parent = this;

    yang_name = "key"; yang_parent_name = "levels-authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::~Key()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State::State()
    :
    auth_password{YType::str, "auth-password"}
{

    yang_name = "state"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State::has_data() const
{
    if (is_presence_container) return true;
    return auth_password.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_password.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_password.is_set || is_set(auth_password.yfilter)) leaf_name_data.push_back(auth_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-password")
    {
        auth_password = value;
        auth_password.value_namespace = name_space;
        auth_password.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-password")
    {
        auth_password.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-password")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::SystemLevelCounters()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State>())
{
    state->parent = this;

    yang_name = "system-level-counters"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::~SystemLevelCounters()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-level-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::State()
    :
    corrupted_lsps{YType::uint32, "corrupted-lsps"},
    database_overloads{YType::uint32, "database-overloads"},
    exceed_max_seq_nums{YType::uint32, "exceed-max-seq-nums"},
    seq_num_skips{YType::uint32, "seq-num-skips"},
    own_lsp_purges{YType::uint32, "own-lsp-purges"},
    id_len_mismatch{YType::uint32, "id-len-mismatch"},
    max_area_address_mismatches{YType::uint32, "max-area-address-mismatches"},
    spf_runs{YType::uint32, "spf-runs"},
    lsp_errors{YType::uint32, "lsp-errors"}
{

    yang_name = "state"; yang_parent_name = "system-level-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::has_data() const
{
    if (is_presence_container) return true;
    return corrupted_lsps.is_set
	|| database_overloads.is_set
	|| exceed_max_seq_nums.is_set
	|| seq_num_skips.is_set
	|| own_lsp_purges.is_set
	|| id_len_mismatch.is_set
	|| max_area_address_mismatches.is_set
	|| spf_runs.is_set
	|| lsp_errors.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(corrupted_lsps.yfilter)
	|| ydk::is_set(database_overloads.yfilter)
	|| ydk::is_set(exceed_max_seq_nums.yfilter)
	|| ydk::is_set(seq_num_skips.yfilter)
	|| ydk::is_set(own_lsp_purges.yfilter)
	|| ydk::is_set(id_len_mismatch.yfilter)
	|| ydk::is_set(max_area_address_mismatches.yfilter)
	|| ydk::is_set(spf_runs.yfilter)
	|| ydk::is_set(lsp_errors.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (corrupted_lsps.is_set || is_set(corrupted_lsps.yfilter)) leaf_name_data.push_back(corrupted_lsps.get_name_leafdata());
    if (database_overloads.is_set || is_set(database_overloads.yfilter)) leaf_name_data.push_back(database_overloads.get_name_leafdata());
    if (exceed_max_seq_nums.is_set || is_set(exceed_max_seq_nums.yfilter)) leaf_name_data.push_back(exceed_max_seq_nums.get_name_leafdata());
    if (seq_num_skips.is_set || is_set(seq_num_skips.yfilter)) leaf_name_data.push_back(seq_num_skips.get_name_leafdata());
    if (own_lsp_purges.is_set || is_set(own_lsp_purges.yfilter)) leaf_name_data.push_back(own_lsp_purges.get_name_leafdata());
    if (id_len_mismatch.is_set || is_set(id_len_mismatch.yfilter)) leaf_name_data.push_back(id_len_mismatch.get_name_leafdata());
    if (max_area_address_mismatches.is_set || is_set(max_area_address_mismatches.yfilter)) leaf_name_data.push_back(max_area_address_mismatches.get_name_leafdata());
    if (spf_runs.is_set || is_set(spf_runs.yfilter)) leaf_name_data.push_back(spf_runs.get_name_leafdata());
    if (lsp_errors.is_set || is_set(lsp_errors.yfilter)) leaf_name_data.push_back(lsp_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "corrupted-lsps")
    {
        corrupted_lsps = value;
        corrupted_lsps.value_namespace = name_space;
        corrupted_lsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-overloads")
    {
        database_overloads = value;
        database_overloads.value_namespace = name_space;
        database_overloads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-max-seq-nums")
    {
        exceed_max_seq_nums = value;
        exceed_max_seq_nums.value_namespace = name_space;
        exceed_max_seq_nums.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num-skips")
    {
        seq_num_skips = value;
        seq_num_skips.value_namespace = name_space;
        seq_num_skips.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "own-lsp-purges")
    {
        own_lsp_purges = value;
        own_lsp_purges.value_namespace = name_space;
        own_lsp_purges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-len-mismatch")
    {
        id_len_mismatch = value;
        id_len_mismatch.value_namespace = name_space;
        id_len_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-address-mismatches")
    {
        max_area_address_mismatches = value;
        max_area_address_mismatches.value_namespace = name_space;
        max_area_address_mismatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-runs")
    {
        spf_runs = value;
        spf_runs.value_namespace = name_space;
        spf_runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-errors")
    {
        lsp_errors = value;
        lsp_errors.value_namespace = name_space;
        lsp_errors.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "corrupted-lsps")
    {
        corrupted_lsps.yfilter = yfilter;
    }
    if(value_path == "database-overloads")
    {
        database_overloads.yfilter = yfilter;
    }
    if(value_path == "exceed-max-seq-nums")
    {
        exceed_max_seq_nums.yfilter = yfilter;
    }
    if(value_path == "seq-num-skips")
    {
        seq_num_skips.yfilter = yfilter;
    }
    if(value_path == "own-lsp-purges")
    {
        own_lsp_purges.yfilter = yfilter;
    }
    if(value_path == "id-len-mismatch")
    {
        id_len_mismatch.yfilter = yfilter;
    }
    if(value_path == "max-area-address-mismatches")
    {
        max_area_address_mismatches.yfilter = yfilter;
    }
    if(value_path == "spf-runs")
    {
        spf_runs.yfilter = yfilter;
    }
    if(value_path == "lsp-errors")
    {
        lsp_errors.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "corrupted-lsps" || name == "database-overloads" || name == "exceed-max-seq-nums" || name == "seq-num-skips" || name == "own-lsp-purges" || name == "id-len-mismatch" || name == "max-area-address-mismatches" || name == "spf-runs" || name == "lsp-errors")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabases()
    :
    link_state_database(this, {"lsp_id"})
{

    yang_name = "link-state-databases"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::~LinkStateDatabases()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_state_database.len(); index++)
    {
        if(link_state_database[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::has_operation() const
{
    for (std::size_t index=0; index<link_state_database.len(); index++)
    {
        if(link_state_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-state-databases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-state-database")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase>();
        ent_->parent = this;
        link_state_database.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_state_database.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-state-database")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabase()
    :
    lsp_id{YType::str, "lsp-id"}
        ,
    undefined_tlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs>())
    , link_state_database_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState>())
    , tlvses(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses>())
{
    undefined_tlvs->parent = this;
    link_state_database_state->parent = this;
    tlvses->parent = this;

    yang_name = "link-state-database"; yang_parent_name = "link-state-databases"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::~LinkStateDatabase()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| (undefined_tlvs !=  nullptr && undefined_tlvs->has_data())
	|| (link_state_database_state !=  nullptr && link_state_database_state->has_data())
	|| (tlvses !=  nullptr && tlvses->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (undefined_tlvs !=  nullptr && undefined_tlvs->has_operation())
	|| (link_state_database_state !=  nullptr && link_state_database_state->has_operation())
	|| (tlvses !=  nullptr && tlvses->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-state-database";
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "undefined-tlvs")
    {
        if(undefined_tlvs == nullptr)
        {
            undefined_tlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs>();
        }
        return undefined_tlvs;
    }

    if(child_yang_name == "link-state-database-state")
    {
        if(link_state_database_state == nullptr)
        {
            link_state_database_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState>();
        }
        return link_state_database_state;
    }

    if(child_yang_name == "tlvses")
    {
        if(tlvses == nullptr)
        {
            tlvses = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses>();
        }
        return tlvses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(undefined_tlvs != nullptr)
    {
        _children["undefined-tlvs"] = undefined_tlvs;
    }

    if(link_state_database_state != nullptr)
    {
        _children["link-state-database-state"] = link_state_database_state;
    }

    if(tlvses != nullptr)
    {
        _children["tlvses"] = tlvses;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "undefined-tlvs" || name == "link-state-database-state" || name == "tlvses" || name == "lsp-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlvs()
    :
    undefined_tlv(this, {"type"})
{

    yang_name = "undefined-tlvs"; yang_parent_name = "link-state-database"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::~UndefinedTlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<undefined_tlv.len(); index++)
    {
        if(undefined_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::has_operation() const
{
    for (std::size_t index=0; index<undefined_tlv.len(); index++)
    {
        if(undefined_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-tlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "undefined-tlv")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv>();
        ent_->parent = this;
        undefined_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : undefined_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "undefined-tlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::UndefinedTlv()
    :
    type{YType::uint32, "type"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State>())
{
    state->parent = this;

    yang_name = "undefined-tlv"; yang_parent_name = "undefined-tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::~UndefinedTlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-tlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "undefined-tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState::LinkStateDatabaseState()
    :
    lsp_id{YType::str, "lsp-id"},
    maximum_area_addresses{YType::uint8, "maximum-area-addresses"},
    version{YType::uint8, "version"},
    version2{YType::uint8, "version2"},
    id_length{YType::uint8, "id-length"},
    pdu_type{YType::enumeration, "pdu-type"},
    remaining_lifetime{YType::uint16, "remaining-lifetime"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    pdu_length{YType::uint16, "pdu-length"},
    is_type{YType::uint8, "is-type"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "link-state-database-state"; yang_parent_name = "link-state-database"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState::~LinkStateDatabaseState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsp_id.is_set
	|| maximum_area_addresses.is_set
	|| version.is_set
	|| version2.is_set
	|| id_length.is_set
	|| pdu_type.is_set
	|| remaining_lifetime.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| pdu_length.is_set
	|| is_type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(maximum_area_addresses.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(version2.yfilter)
	|| ydk::is_set(id_length.yfilter)
	|| ydk::is_set(pdu_type.yfilter)
	|| ydk::is_set(remaining_lifetime.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(pdu_length.yfilter)
	|| ydk::is_set(is_type.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-state-database-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (maximum_area_addresses.is_set || is_set(maximum_area_addresses.yfilter)) leaf_name_data.push_back(maximum_area_addresses.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (version2.is_set || is_set(version2.yfilter)) leaf_name_data.push_back(version2.get_name_leafdata());
    if (id_length.is_set || is_set(id_length.yfilter)) leaf_name_data.push_back(id_length.get_name_leafdata());
    if (pdu_type.is_set || is_set(pdu_type.yfilter)) leaf_name_data.push_back(pdu_type.get_name_leafdata());
    if (remaining_lifetime.is_set || is_set(remaining_lifetime.yfilter)) leaf_name_data.push_back(remaining_lifetime.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (pdu_length.is_set || is_set(pdu_length.yfilter)) leaf_name_data.push_back(pdu_length.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.yfilter)) leaf_name_data.push_back(is_type.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-area-addresses")
    {
        maximum_area_addresses = value;
        maximum_area_addresses.value_namespace = name_space;
        maximum_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version2")
    {
        version2 = value;
        version2.value_namespace = name_space;
        version2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-length")
    {
        id_length = value;
        id_length.value_namespace = name_space;
        id_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-type")
    {
        pdu_type = value;
        pdu_type.value_namespace = name_space;
        pdu_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-lifetime")
    {
        remaining_lifetime = value;
        remaining_lifetime.value_namespace = name_space;
        remaining_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-length")
    {
        pdu_length = value;
        pdu_length.value_namespace = name_space;
        pdu_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-type")
    {
        is_type = value;
        is_type.value_namespace = name_space;
        is_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "maximum-area-addresses")
    {
        maximum_area_addresses.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "version2")
    {
        version2.yfilter = yfilter;
    }
    if(value_path == "id-length")
    {
        id_length.yfilter = yfilter;
    }
    if(value_path == "pdu-type")
    {
        pdu_type.yfilter = yfilter;
    }
    if(value_path == "remaining-lifetime")
    {
        remaining_lifetime.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "pdu-length")
    {
        pdu_length.yfilter = yfilter;
    }
    if(value_path == "is-type")
    {
        is_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "maximum-area-addresses" || name == "version" || name == "version2" || name == "id-length" || name == "pdu-type" || name == "remaining-lifetime" || name == "sequence-number" || name == "checksum" || name == "pdu-length" || name == "is-type" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvses()
    :
    tlvs(this, {"type"})
{

    yang_name = "tlvses"; yang_parent_name = "link-state-database"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::~Tlvses()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlvs.len(); index++)
    {
        if(tlvs[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::has_operation() const
{
    for (std::size_t index=0; index<tlvs.len(); index++)
    {
        if(tlvs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlvses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlvs")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs>();
        ent_->parent = this;
        tlvs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlvs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlvs")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Tlvs()
    :
    type{YType::str, "type"}
        ,
    area_address(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress>())
    , authentication(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication>())
    , ipv4_interface_addresses(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses>())
    , router_capabilities(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities>())
    , mt_ipv4_reachability(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability>())
    , mt_isn(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn>())
    , ipv6_srlgs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs>())
    , tlvs_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState>())
    , purge_oi(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi>())
    , host_name(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName>())
    , ipv6_reachability(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability>())
    , ipv6_te_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId>())
    , ipv4_internal_reachability(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability>())
    , ipv6_interface_addresses(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses>())
    , extended_is_reachability(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability>())
    , instance_ids(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds>())
    , ipv4_srlgs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs>())
    , is_reachability(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability>())
    , ipv4_te_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId>())
    , nlpid(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid>())
    , extended_ipv4_reachability(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability>())
    , multi_topology(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology>())
    , ipv4_external_reachability(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability>())
    , mt_ipv6_reachability(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability>())
{
    area_address->parent = this;
    authentication->parent = this;
    ipv4_interface_addresses->parent = this;
    router_capabilities->parent = this;
    mt_ipv4_reachability->parent = this;
    mt_isn->parent = this;
    ipv6_srlgs->parent = this;
    tlvs_state->parent = this;
    purge_oi->parent = this;
    host_name->parent = this;
    ipv6_reachability->parent = this;
    ipv6_te_router_id->parent = this;
    ipv4_internal_reachability->parent = this;
    ipv6_interface_addresses->parent = this;
    extended_is_reachability->parent = this;
    instance_ids->parent = this;
    ipv4_srlgs->parent = this;
    is_reachability->parent = this;
    ipv4_te_router_id->parent = this;
    nlpid->parent = this;
    extended_ipv4_reachability->parent = this;
    multi_topology->parent = this;
    ipv4_external_reachability->parent = this;
    mt_ipv6_reachability->parent = this;

    yang_name = "tlvs"; yang_parent_name = "tlvses"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::~Tlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (area_address !=  nullptr && area_address->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ipv4_interface_addresses !=  nullptr && ipv4_interface_addresses->has_data())
	|| (router_capabilities !=  nullptr && router_capabilities->has_data())
	|| (mt_ipv4_reachability !=  nullptr && mt_ipv4_reachability->has_data())
	|| (mt_isn !=  nullptr && mt_isn->has_data())
	|| (ipv6_srlgs !=  nullptr && ipv6_srlgs->has_data())
	|| (tlvs_state !=  nullptr && tlvs_state->has_data())
	|| (purge_oi !=  nullptr && purge_oi->has_data())
	|| (host_name !=  nullptr && host_name->has_data())
	|| (ipv6_reachability !=  nullptr && ipv6_reachability->has_data())
	|| (ipv6_te_router_id !=  nullptr && ipv6_te_router_id->has_data())
	|| (ipv4_internal_reachability !=  nullptr && ipv4_internal_reachability->has_data())
	|| (ipv6_interface_addresses !=  nullptr && ipv6_interface_addresses->has_data())
	|| (extended_is_reachability !=  nullptr && extended_is_reachability->has_data())
	|| (instance_ids !=  nullptr && instance_ids->has_data())
	|| (ipv4_srlgs !=  nullptr && ipv4_srlgs->has_data())
	|| (is_reachability !=  nullptr && is_reachability->has_data())
	|| (ipv4_te_router_id !=  nullptr && ipv4_te_router_id->has_data())
	|| (nlpid !=  nullptr && nlpid->has_data())
	|| (extended_ipv4_reachability !=  nullptr && extended_ipv4_reachability->has_data())
	|| (multi_topology !=  nullptr && multi_topology->has_data())
	|| (ipv4_external_reachability !=  nullptr && ipv4_external_reachability->has_data())
	|| (mt_ipv6_reachability !=  nullptr && mt_ipv6_reachability->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (area_address !=  nullptr && area_address->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ipv4_interface_addresses !=  nullptr && ipv4_interface_addresses->has_operation())
	|| (router_capabilities !=  nullptr && router_capabilities->has_operation())
	|| (mt_ipv4_reachability !=  nullptr && mt_ipv4_reachability->has_operation())
	|| (mt_isn !=  nullptr && mt_isn->has_operation())
	|| (ipv6_srlgs !=  nullptr && ipv6_srlgs->has_operation())
	|| (tlvs_state !=  nullptr && tlvs_state->has_operation())
	|| (purge_oi !=  nullptr && purge_oi->has_operation())
	|| (host_name !=  nullptr && host_name->has_operation())
	|| (ipv6_reachability !=  nullptr && ipv6_reachability->has_operation())
	|| (ipv6_te_router_id !=  nullptr && ipv6_te_router_id->has_operation())
	|| (ipv4_internal_reachability !=  nullptr && ipv4_internal_reachability->has_operation())
	|| (ipv6_interface_addresses !=  nullptr && ipv6_interface_addresses->has_operation())
	|| (extended_is_reachability !=  nullptr && extended_is_reachability->has_operation())
	|| (instance_ids !=  nullptr && instance_ids->has_operation())
	|| (ipv4_srlgs !=  nullptr && ipv4_srlgs->has_operation())
	|| (is_reachability !=  nullptr && is_reachability->has_operation())
	|| (ipv4_te_router_id !=  nullptr && ipv4_te_router_id->has_operation())
	|| (nlpid !=  nullptr && nlpid->has_operation())
	|| (extended_ipv4_reachability !=  nullptr && extended_ipv4_reachability->has_operation())
	|| (multi_topology !=  nullptr && multi_topology->has_operation())
	|| (ipv4_external_reachability !=  nullptr && ipv4_external_reachability->has_operation())
	|| (mt_ipv6_reachability !=  nullptr && mt_ipv6_reachability->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlvs";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-address")
    {
        if(area_address == nullptr)
        {
            area_address = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress>();
        }
        return area_address;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ipv4-interface-addresses")
    {
        if(ipv4_interface_addresses == nullptr)
        {
            ipv4_interface_addresses = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses>();
        }
        return ipv4_interface_addresses;
    }

    if(child_yang_name == "router-capabilities")
    {
        if(router_capabilities == nullptr)
        {
            router_capabilities = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities>();
        }
        return router_capabilities;
    }

    if(child_yang_name == "mt-ipv4-reachability")
    {
        if(mt_ipv4_reachability == nullptr)
        {
            mt_ipv4_reachability = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability>();
        }
        return mt_ipv4_reachability;
    }

    if(child_yang_name == "mt-isn")
    {
        if(mt_isn == nullptr)
        {
            mt_isn = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn>();
        }
        return mt_isn;
    }

    if(child_yang_name == "ipv6-srlgs")
    {
        if(ipv6_srlgs == nullptr)
        {
            ipv6_srlgs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs>();
        }
        return ipv6_srlgs;
    }

    if(child_yang_name == "tlvs-state")
    {
        if(tlvs_state == nullptr)
        {
            tlvs_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState>();
        }
        return tlvs_state;
    }

    if(child_yang_name == "purge-oi")
    {
        if(purge_oi == nullptr)
        {
            purge_oi = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi>();
        }
        return purge_oi;
    }

    if(child_yang_name == "host-name")
    {
        if(host_name == nullptr)
        {
            host_name = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName>();
        }
        return host_name;
    }

    if(child_yang_name == "ipv6-reachability")
    {
        if(ipv6_reachability == nullptr)
        {
            ipv6_reachability = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability>();
        }
        return ipv6_reachability;
    }

    if(child_yang_name == "ipv6-te-router-id")
    {
        if(ipv6_te_router_id == nullptr)
        {
            ipv6_te_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId>();
        }
        return ipv6_te_router_id;
    }

    if(child_yang_name == "ipv4-internal-reachability")
    {
        if(ipv4_internal_reachability == nullptr)
        {
            ipv4_internal_reachability = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability>();
        }
        return ipv4_internal_reachability;
    }

    if(child_yang_name == "ipv6-interface-addresses")
    {
        if(ipv6_interface_addresses == nullptr)
        {
            ipv6_interface_addresses = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses>();
        }
        return ipv6_interface_addresses;
    }

    if(child_yang_name == "extended-is-reachability")
    {
        if(extended_is_reachability == nullptr)
        {
            extended_is_reachability = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability>();
        }
        return extended_is_reachability;
    }

    if(child_yang_name == "instance-ids")
    {
        if(instance_ids == nullptr)
        {
            instance_ids = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds>();
        }
        return instance_ids;
    }

    if(child_yang_name == "ipv4-srlgs")
    {
        if(ipv4_srlgs == nullptr)
        {
            ipv4_srlgs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs>();
        }
        return ipv4_srlgs;
    }

    if(child_yang_name == "is-reachability")
    {
        if(is_reachability == nullptr)
        {
            is_reachability = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability>();
        }
        return is_reachability;
    }

    if(child_yang_name == "ipv4-te-router-id")
    {
        if(ipv4_te_router_id == nullptr)
        {
            ipv4_te_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId>();
        }
        return ipv4_te_router_id;
    }

    if(child_yang_name == "nlpid")
    {
        if(nlpid == nullptr)
        {
            nlpid = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid>();
        }
        return nlpid;
    }

    if(child_yang_name == "extended-ipv4-reachability")
    {
        if(extended_ipv4_reachability == nullptr)
        {
            extended_ipv4_reachability = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability>();
        }
        return extended_ipv4_reachability;
    }

    if(child_yang_name == "multi-topology")
    {
        if(multi_topology == nullptr)
        {
            multi_topology = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology>();
        }
        return multi_topology;
    }

    if(child_yang_name == "ipv4-external-reachability")
    {
        if(ipv4_external_reachability == nullptr)
        {
            ipv4_external_reachability = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability>();
        }
        return ipv4_external_reachability;
    }

    if(child_yang_name == "mt-ipv6-reachability")
    {
        if(mt_ipv6_reachability == nullptr)
        {
            mt_ipv6_reachability = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability>();
        }
        return mt_ipv6_reachability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(area_address != nullptr)
    {
        _children["area-address"] = area_address;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(ipv4_interface_addresses != nullptr)
    {
        _children["ipv4-interface-addresses"] = ipv4_interface_addresses;
    }

    if(router_capabilities != nullptr)
    {
        _children["router-capabilities"] = router_capabilities;
    }

    if(mt_ipv4_reachability != nullptr)
    {
        _children["mt-ipv4-reachability"] = mt_ipv4_reachability;
    }

    if(mt_isn != nullptr)
    {
        _children["mt-isn"] = mt_isn;
    }

    if(ipv6_srlgs != nullptr)
    {
        _children["ipv6-srlgs"] = ipv6_srlgs;
    }

    if(tlvs_state != nullptr)
    {
        _children["tlvs-state"] = tlvs_state;
    }

    if(purge_oi != nullptr)
    {
        _children["purge-oi"] = purge_oi;
    }

    if(host_name != nullptr)
    {
        _children["host-name"] = host_name;
    }

    if(ipv6_reachability != nullptr)
    {
        _children["ipv6-reachability"] = ipv6_reachability;
    }

    if(ipv6_te_router_id != nullptr)
    {
        _children["ipv6-te-router-id"] = ipv6_te_router_id;
    }

    if(ipv4_internal_reachability != nullptr)
    {
        _children["ipv4-internal-reachability"] = ipv4_internal_reachability;
    }

    if(ipv6_interface_addresses != nullptr)
    {
        _children["ipv6-interface-addresses"] = ipv6_interface_addresses;
    }

    if(extended_is_reachability != nullptr)
    {
        _children["extended-is-reachability"] = extended_is_reachability;
    }

    if(instance_ids != nullptr)
    {
        _children["instance-ids"] = instance_ids;
    }

    if(ipv4_srlgs != nullptr)
    {
        _children["ipv4-srlgs"] = ipv4_srlgs;
    }

    if(is_reachability != nullptr)
    {
        _children["is-reachability"] = is_reachability;
    }

    if(ipv4_te_router_id != nullptr)
    {
        _children["ipv4-te-router-id"] = ipv4_te_router_id;
    }

    if(nlpid != nullptr)
    {
        _children["nlpid"] = nlpid;
    }

    if(extended_ipv4_reachability != nullptr)
    {
        _children["extended-ipv4-reachability"] = extended_ipv4_reachability;
    }

    if(multi_topology != nullptr)
    {
        _children["multi-topology"] = multi_topology;
    }

    if(ipv4_external_reachability != nullptr)
    {
        _children["ipv4-external-reachability"] = ipv4_external_reachability;
    }

    if(mt_ipv6_reachability != nullptr)
    {
        _children["mt-ipv6-reachability"] = mt_ipv6_reachability;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-address" || name == "authentication" || name == "ipv4-interface-addresses" || name == "router-capabilities" || name == "mt-ipv4-reachability" || name == "mt-isn" || name == "ipv6-srlgs" || name == "tlvs-state" || name == "purge-oi" || name == "host-name" || name == "ipv6-reachability" || name == "ipv6-te-router-id" || name == "ipv4-internal-reachability" || name == "ipv6-interface-addresses" || name == "extended-is-reachability" || name == "instance-ids" || name == "ipv4-srlgs" || name == "is-reachability" || name == "ipv4-te-router-id" || name == "nlpid" || name == "extended-ipv4-reachability" || name == "multi-topology" || name == "ipv4-external-reachability" || name == "mt-ipv6-reachability" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::AreaAddress()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State>())
{
    state->parent = this;

    yang_name = "area-address"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::~AreaAddress()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State::State()
    :
    area_address{YType::str, "area-address"}
{

    yang_name = "state"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : area_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State::has_operation() const
{
    for (auto const & leaf : area_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_address.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto area_address_name_datas = area_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), area_address_name_datas.begin(), area_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-address")
    {
        area_address.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-address")
    {
        area_address.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-address")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::Authentication()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State>())
{
    state->parent = this;

    yang_name = "authentication"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::~Authentication()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State::State()
    :
    crypto_type{YType::enumeration, "crypto-type"},
    authentication_key{YType::str, "authentication-key"}
{

    yang_name = "state"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State::has_data() const
{
    if (is_presence_container) return true;
    return crypto_type.is_set
	|| authentication_key.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crypto_type.yfilter)
	|| ydk::is_set(authentication_key.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crypto_type.is_set || is_set(crypto_type.yfilter)) leaf_name_data.push_back(crypto_type.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crypto-type")
    {
        crypto_type = value;
        crypto_type.value_namespace = name_space;
        crypto_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crypto-type")
    {
        crypto_type.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto-type" || name == "authentication-key")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::Ipv4InterfaceAddresses()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State>())
{
    state->parent = this;

    yang_name = "ipv4-interface-addresses"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::~Ipv4InterfaceAddresses()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-interface-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State::State()
    :
    ipv4_interface_address{YType::str, "ipv4-interface-address"}
{

    yang_name = "state"; yang_parent_name = "ipv4-interface-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv4_interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State::has_operation() const
{
    for (auto const & leaf : ipv4_interface_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_interface_address.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_interface_address_name_datas = ipv4_interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_interface_address_name_datas.begin(), ipv4_interface_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-interface-address")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapabilities()
    :
    router_capability(this, {"instance_number"})
{

    yang_name = "router-capabilities"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::~RouterCapabilities()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<router_capability.len(); index++)
    {
        if(router_capability[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::has_operation() const
{
    for (std::size_t index=0; index<router_capability.len(); index++)
    {
        if(router_capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-capability")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability>();
        ent_->parent = this;
        router_capability.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : router_capability.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-capability")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapability()
    :
    instance_number{YType::uint32, "instance-number"}
        ,
    router_capabilities_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState>())
    , undefined_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs>())
    , subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs>())
{
    router_capabilities_state->parent = this;
    undefined_subtlvs->parent = this;
    subtlvs->parent = this;

    yang_name = "router-capability"; yang_parent_name = "router-capabilities"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::~RouterCapability()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::has_data() const
{
    if (is_presence_container) return true;
    return instance_number.is_set
	|| (router_capabilities_state !=  nullptr && router_capabilities_state->has_data())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_data())
	|| (subtlvs !=  nullptr && subtlvs->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| (router_capabilities_state !=  nullptr && router_capabilities_state->has_operation())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_operation())
	|| (subtlvs !=  nullptr && subtlvs->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-capability";
    ADD_KEY_TOKEN(instance_number, "instance-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-capabilities-state")
    {
        if(router_capabilities_state == nullptr)
        {
            router_capabilities_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState>();
        }
        return router_capabilities_state;
    }

    if(child_yang_name == "undefined-subtlvs")
    {
        if(undefined_subtlvs == nullptr)
        {
            undefined_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs>();
        }
        return undefined_subtlvs;
    }

    if(child_yang_name == "subtlvs")
    {
        if(subtlvs == nullptr)
        {
            subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs>();
        }
        return subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(router_capabilities_state != nullptr)
    {
        _children["router-capabilities-state"] = router_capabilities_state;
    }

    if(undefined_subtlvs != nullptr)
    {
        _children["undefined-subtlvs"] = undefined_subtlvs;
    }

    if(subtlvs != nullptr)
    {
        _children["subtlvs"] = subtlvs;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-capabilities-state" || name == "undefined-subtlvs" || name == "subtlvs" || name == "instance-number")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState::RouterCapabilitiesState()
    :
    instance_number{YType::uint32, "instance-number"},
    router_id{YType::str, "router-id"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "router-capabilities-state"; yang_parent_name = "router-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState::~RouterCapabilitiesState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return instance_number.is_set
	|| router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_number.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-capabilities-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_number.is_set || is_set(instance_number.yfilter)) leaf_name_data.push_back(instance_number.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-number")
    {
        instance_number = value;
        instance_number.value_namespace = name_space;
        instance_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-number")
    {
        instance_number.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-number" || name == "router-id" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlvs()
    :
    undefined_subtlv(this, {"type"})
{

    yang_name = "undefined-subtlvs"; yang_parent_name = "router-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::~UndefinedSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<undefined_subtlv.len(); index++)
    {
        if(undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<undefined_subtlv.len(); index++)
    {
        if(undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "undefined-subtlv")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv>();
        ent_->parent = this;
        undefined_subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : undefined_subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "undefined-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::UndefinedSubtlv()
    :
    type{YType::uint32, "type"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State>())
{
    state->parent = this;

    yang_name = "undefined-subtlv"; yang_parent_name = "undefined-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::~UndefinedSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "undefined-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlvs()
    :
    subtlv(this, {"type"})
{

    yang_name = "subtlvs"; yang_parent_name = "router-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::~Subtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::has_operation() const
{
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlv")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv>();
        ent_->parent = this;
        subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::Subtlv()
    :
    type{YType::str, "type"}
        ,
    subtlvs_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState>())
    , segment_routing_algorithms(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms>())
    , segment_routing_capability(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability>())
{
    subtlvs_state->parent = this;
    segment_routing_algorithms->parent = this;
    segment_routing_capability->parent = this;

    yang_name = "subtlv"; yang_parent_name = "subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::~Subtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (subtlvs_state !=  nullptr && subtlvs_state->has_data())
	|| (segment_routing_algorithms !=  nullptr && segment_routing_algorithms->has_data())
	|| (segment_routing_capability !=  nullptr && segment_routing_capability->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (subtlvs_state !=  nullptr && subtlvs_state->has_operation())
	|| (segment_routing_algorithms !=  nullptr && segment_routing_algorithms->has_operation())
	|| (segment_routing_capability !=  nullptr && segment_routing_capability->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlvs-state")
    {
        if(subtlvs_state == nullptr)
        {
            subtlvs_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState>();
        }
        return subtlvs_state;
    }

    if(child_yang_name == "segment-routing-algorithms")
    {
        if(segment_routing_algorithms == nullptr)
        {
            segment_routing_algorithms = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms>();
        }
        return segment_routing_algorithms;
    }

    if(child_yang_name == "segment-routing-capability")
    {
        if(segment_routing_capability == nullptr)
        {
            segment_routing_capability = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability>();
        }
        return segment_routing_capability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(subtlvs_state != nullptr)
    {
        _children["subtlvs-state"] = subtlvs_state;
    }

    if(segment_routing_algorithms != nullptr)
    {
        _children["segment-routing-algorithms"] = segment_routing_algorithms;
    }

    if(segment_routing_capability != nullptr)
    {
        _children["segment-routing-capability"] = segment_routing_capability;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subtlvs-state" || name == "segment-routing-algorithms" || name == "segment-routing-capability" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState::SubtlvsState()
    :
    type{YType::str, "type"}
{

    yang_name = "subtlvs-state"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState::~SubtlvsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithms()
    :
    segment_routing_algorithm(this, {"algorithm"})
{

    yang_name = "segment-routing-algorithms"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::~SegmentRoutingAlgorithms()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_algorithm.len(); index++)
    {
        if(segment_routing_algorithm[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_algorithm.len(); index++)
    {
        if(segment_routing_algorithm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-algorithms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-algorithm")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm>();
        ent_->parent = this;
        segment_routing_algorithm.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_algorithm.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-algorithm")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::SegmentRoutingAlgorithm()
    :
    algorithm{YType::enumeration, "algorithm"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State>())
{
    state->parent = this;

    yang_name = "segment-routing-algorithm"; yang_parent_name = "segment-routing-algorithms"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::~SegmentRoutingAlgorithm()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::has_data() const
{
    if (is_presence_container) return true;
    return algorithm.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-algorithm";
    ADD_KEY_TOKEN(algorithm, "algorithm");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "algorithm")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::State()
    :
    algorithm{YType::enumeration, "algorithm"}
{

    yang_name = "state"; yang_parent_name = "segment-routing-algorithm"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::has_data() const
{
    if (is_presence_container) return true;
    return algorithm.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SegmentRoutingCapability()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State>())
    , srgb_descriptors(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors>())
{
    state->parent = this;
    srgb_descriptors->parent = this;

    yang_name = "segment-routing-capability"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::~SegmentRoutingCapability()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data())
	|| (srgb_descriptors !=  nullptr && srgb_descriptors->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (srgb_descriptors !=  nullptr && srgb_descriptors->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State>();
        }
        return state;
    }

    if(child_yang_name == "srgb-descriptors")
    {
        if(srgb_descriptors == nullptr)
        {
            srgb_descriptors = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors>();
        }
        return srgb_descriptors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(srgb_descriptors != nullptr)
    {
        _children["srgb-descriptors"] = srgb_descriptors;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "srgb-descriptors")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::State()
    :
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "segment-routing-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptors()
    :
    srgb_descriptor(this, {})
{

    yang_name = "srgb-descriptors"; yang_parent_name = "segment-routing-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::~SrgbDescriptors()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srgb_descriptor.len(); index++)
    {
        if(srgb_descriptor[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::has_operation() const
{
    for (std::size_t index=0; index<srgb_descriptor.len(); index++)
    {
        if(srgb_descriptor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-descriptors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srgb-descriptor")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor>();
        ent_->parent = this;
        srgb_descriptor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srgb_descriptor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srgb-descriptor")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::SrgbDescriptor()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State>())
{
    state->parent = this;

    yang_name = "srgb-descriptor"; yang_parent_name = "srgb-descriptors"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::~SrgbDescriptor()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-descriptor";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::State()
    :
    range{YType::uint32, "range"},
    label{YType::str, "label"}
{

    yang_name = "state"; yang_parent_name = "srgb-descriptor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| label.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "label")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4Reachability()
    :
    mt_ipv4_reachability_prefixes(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes>())
{
    mt_ipv4_reachability_prefixes->parent = this;

    yang_name = "mt-ipv4-reachability"; yang_parent_name = "tlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::~MtIpv4Reachability()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::has_data() const
{
    if (is_presence_container) return true;
    return (mt_ipv4_reachability_prefixes !=  nullptr && mt_ipv4_reachability_prefixes->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::has_operation() const
{
    return is_set(yfilter)
	|| (mt_ipv4_reachability_prefixes !=  nullptr && mt_ipv4_reachability_prefixes->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv4-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv4-reachability-prefixes")
    {
        if(mt_ipv4_reachability_prefixes == nullptr)
        {
            mt_ipv4_reachability_prefixes = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes>();
        }
        return mt_ipv4_reachability_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mt_ipv4_reachability_prefixes != nullptr)
    {
        _children["mt-ipv4-reachability-prefixes"] = mt_ipv4_reachability_prefixes;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv4-reachability-prefixes")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixes()
    :
    mt_ipv4_reachability_prefixe(this, {})
{

    yang_name = "mt-ipv4-reachability-prefixes"; yang_parent_name = "mt-ipv4-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::~MtIpv4ReachabilityPrefixes()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mt_ipv4_reachability_prefixe.len(); index++)
    {
        if(mt_ipv4_reachability_prefixe[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::has_operation() const
{
    for (std::size_t index=0; index<mt_ipv4_reachability_prefixe.len(); index++)
    {
        if(mt_ipv4_reachability_prefixe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv4-reachability-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv4-reachability-prefixe")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe>();
        ent_->parent = this;
        mt_ipv4_reachability_prefixe.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mt_ipv4_reachability_prefixe.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv4-reachability-prefixe")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixe()
    :
    mt_id{YType::uint32, "mt-id"},
    prefix{YType::str, "prefix"}
        ,
    mt_ipv4_reachability_prefixes_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState>())
    , mt_ipv4_reachability_prefixes_undefined_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs>())
    , mt_ipv4_reachability_prefixes_subtlvs(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs>())
{
    mt_ipv4_reachability_prefixes_state->parent = this;
    mt_ipv4_reachability_prefixes_undefined_subtlvs->parent = this;
    mt_ipv4_reachability_prefixes_subtlvs->parent = this;

    yang_name = "mt-ipv4-reachability-prefixe"; yang_parent_name = "mt-ipv4-reachability-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::~MtIpv4ReachabilityPrefixe()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| prefix.is_set
	|| (mt_ipv4_reachability_prefixes_state !=  nullptr && mt_ipv4_reachability_prefixes_state->has_data())
	|| (mt_ipv4_reachability_prefixes_undefined_subtlvs !=  nullptr && mt_ipv4_reachability_prefixes_undefined_subtlvs->has_data())
	|| (mt_ipv4_reachability_prefixes_subtlvs !=  nullptr && mt_ipv4_reachability_prefixes_subtlvs->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (mt_ipv4_reachability_prefixes_state !=  nullptr && mt_ipv4_reachability_prefixes_state->has_operation())
	|| (mt_ipv4_reachability_prefixes_undefined_subtlvs !=  nullptr && mt_ipv4_reachability_prefixes_undefined_subtlvs->has_operation())
	|| (mt_ipv4_reachability_prefixes_subtlvs !=  nullptr && mt_ipv4_reachability_prefixes_subtlvs->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv4-reachability-prefixe";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv4-reachability-prefixes-state")
    {
        if(mt_ipv4_reachability_prefixes_state == nullptr)
        {
            mt_ipv4_reachability_prefixes_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState>();
        }
        return mt_ipv4_reachability_prefixes_state;
    }

    if(child_yang_name == "mt-ipv4-reachability-prefixes-undefined-subtlvs")
    {
        if(mt_ipv4_reachability_prefixes_undefined_subtlvs == nullptr)
        {
            mt_ipv4_reachability_prefixes_undefined_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs>();
        }
        return mt_ipv4_reachability_prefixes_undefined_subtlvs;
    }

    if(child_yang_name == "mt-ipv4-reachability-prefixes-subtlvs")
    {
        if(mt_ipv4_reachability_prefixes_subtlvs == nullptr)
        {
            mt_ipv4_reachability_prefixes_subtlvs = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs>();
        }
        return mt_ipv4_reachability_prefixes_subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mt_ipv4_reachability_prefixes_state != nullptr)
    {
        _children["mt-ipv4-reachability-prefixes-state"] = mt_ipv4_reachability_prefixes_state;
    }

    if(mt_ipv4_reachability_prefixes_undefined_subtlvs != nullptr)
    {
        _children["mt-ipv4-reachability-prefixes-undefined-subtlvs"] = mt_ipv4_reachability_prefixes_undefined_subtlvs;
    }

    if(mt_ipv4_reachability_prefixes_subtlvs != nullptr)
    {
        _children["mt-ipv4-reachability-prefixes-subtlvs"] = mt_ipv4_reachability_prefixes_subtlvs;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv4-reachability-prefixes-state" || name == "mt-ipv4-reachability-prefixes-undefined-subtlvs" || name == "mt-ipv4-reachability-prefixes-subtlvs" || name == "mt-id" || name == "prefix")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState::MtIpv4ReachabilityPrefixesState()
    :
    up_down{YType::boolean, "up-down"},
    sbit{YType::boolean, "sbit"},
    prefix{YType::str, "prefix"},
    metric{YType::uint32, "metric"},
    mt_id{YType::uint16, "mt-id"}
{

    yang_name = "mt-ipv4-reachability-prefixes-state"; yang_parent_name = "mt-ipv4-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState::~MtIpv4ReachabilityPrefixesState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState::has_data() const
{
    if (is_presence_container) return true;
    return up_down.is_set
	|| sbit.is_set
	|| prefix.is_set
	|| metric.is_set
	|| mt_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(mt_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv4-reachability-prefixes-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "sbit" || name == "prefix" || name == "metric" || name == "mt-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlvs()
    :
    mt_ipv4_reachability_prefixes_undefined_subtlv(this, {"type"})
{

    yang_name = "mt-ipv4-reachability-prefixes-undefined-subtlvs"; yang_parent_name = "mt-ipv4-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::~MtIpv4ReachabilityPrefixesUndefinedSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mt_ipv4_reachability_prefixes_undefined_subtlv.len(); index++)
    {
        if(mt_ipv4_reachability_prefixes_undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<mt_ipv4_reachability_prefixes_undefined_subtlv.len(); index++)
    {
        if(mt_ipv4_reachability_prefixes_undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv4-reachability-prefixes-undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv4-reachability-prefixes-undefined-subtlv")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv>();
        ent_->parent = this;
        mt_ipv4_reachability_prefixes_undefined_subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mt_ipv4_reachability_prefixes_undefined_subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv4-reachability-prefixes-undefined-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::MtIpv4ReachabilityPrefixesUndefinedSubtlv()
    :
    type{YType::uint32, "type"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State>())
{
    state->parent = this;

    yang_name = "mt-ipv4-reachability-prefixes-undefined-subtlv"; yang_parent_name = "mt-ipv4-reachability-prefixes-undefined-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::~MtIpv4ReachabilityPrefixesUndefinedSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv4-reachability-prefixes-undefined-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "mt-ipv4-reachability-prefixes-undefined-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlvs()
    :
    mt_ipv4_reachability_prefixes_subtlv(this, {"type"})
{

    yang_name = "mt-ipv4-reachability-prefixes-subtlvs"; yang_parent_name = "mt-ipv4-reachability-prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::~MtIpv4ReachabilityPrefixesSubtlvs()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mt_ipv4_reachability_prefixes_subtlv.len(); index++)
    {
        if(mt_ipv4_reachability_prefixes_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<mt_ipv4_reachability_prefixes_subtlv.len(); index++)
    {
        if(mt_ipv4_reachability_prefixes_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv4-reachability-prefixes-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mt-ipv4-reachability-prefixes-subtlv")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv>();
        ent_->parent = this;
        mt_ipv4_reachability_prefixes_subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mt_ipv4_reachability_prefixes_subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-ipv4-reachability-prefixes-subtlv")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlv()
    :
    type{YType::str, "type"}
        ,
    prefixes_subtlvs_tag64(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64>())
    , prefixes_subtlvs_tag(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag>())
    , mt_ipv4_reachability_prefixes_subtlvs_state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState>())
    , prefixes_subtlvs_ipv4_source_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId>())
    , prefixes_subtlvs_ipv6_source_router_id(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId>())
    , prefixes_subtlvs_prefix_sids(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids>())
    , prefixes_subtlvs_flags(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags>())
{
    prefixes_subtlvs_tag64->parent = this;
    prefixes_subtlvs_tag->parent = this;
    mt_ipv4_reachability_prefixes_subtlvs_state->parent = this;
    prefixes_subtlvs_ipv4_source_router_id->parent = this;
    prefixes_subtlvs_ipv6_source_router_id->parent = this;
    prefixes_subtlvs_prefix_sids->parent = this;
    prefixes_subtlvs_flags->parent = this;

    yang_name = "mt-ipv4-reachability-prefixes-subtlv"; yang_parent_name = "mt-ipv4-reachability-prefixes-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::~MtIpv4ReachabilityPrefixesSubtlv()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (prefixes_subtlvs_tag64 !=  nullptr && prefixes_subtlvs_tag64->has_data())
	|| (prefixes_subtlvs_tag !=  nullptr && prefixes_subtlvs_tag->has_data())
	|| (mt_ipv4_reachability_prefixes_subtlvs_state !=  nullptr && mt_ipv4_reachability_prefixes_subtlvs_state->has_data())
	|| (prefixes_subtlvs_ipv4_source_router_id !=  nullptr && prefixes_subtlvs_ipv4_source_router_id->has_data())
	|| (prefixes_subtlvs_ipv6_source_router_id !=  nullptr && prefixes_subtlvs_ipv6_source_router_id->has_data())
	|| (prefixes_subtlvs_prefix_sids !=  nullptr && prefixes_subtlvs_prefix_sids->has_data())
	|| (prefixes_subtlvs_flags !=  nullptr && prefixes_subtlvs_flags->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (prefixes_subtlvs_tag64 !=  nullptr && prefixes_subtlvs_tag64->has_operation())
	|| (prefixes_subtlvs_tag !=  nullptr && prefixes_subtlvs_tag->has_operation())
	|| (mt_ipv4_reachability_prefixes_subtlvs_state !=  nullptr && mt_ipv4_reachability_prefixes_subtlvs_state->has_operation())
	|| (prefixes_subtlvs_ipv4_source_router_id !=  nullptr && prefixes_subtlvs_ipv4_source_router_id->has_operation())
	|| (prefixes_subtlvs_ipv6_source_router_id !=  nullptr && prefixes_subtlvs_ipv6_source_router_id->has_operation())
	|| (prefixes_subtlvs_prefix_sids !=  nullptr && prefixes_subtlvs_prefix_sids->has_operation())
	|| (prefixes_subtlvs_flags !=  nullptr && prefixes_subtlvs_flags->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv4-reachability-prefixes-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes-subtlvs-tag64")
    {
        if(prefixes_subtlvs_tag64 == nullptr)
        {
            prefixes_subtlvs_tag64 = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64>();
        }
        return prefixes_subtlvs_tag64;
    }

    if(child_yang_name == "prefixes-subtlvs-tag")
    {
        if(prefixes_subtlvs_tag == nullptr)
        {
            prefixes_subtlvs_tag = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag>();
        }
        return prefixes_subtlvs_tag;
    }

    if(child_yang_name == "mt-ipv4-reachability-prefixes-subtlvs-state")
    {
        if(mt_ipv4_reachability_prefixes_subtlvs_state == nullptr)
        {
            mt_ipv4_reachability_prefixes_subtlvs_state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState>();
        }
        return mt_ipv4_reachability_prefixes_subtlvs_state;
    }

    if(child_yang_name == "prefixes-subtlvs-ipv4-source-router-id")
    {
        if(prefixes_subtlvs_ipv4_source_router_id == nullptr)
        {
            prefixes_subtlvs_ipv4_source_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId>();
        }
        return prefixes_subtlvs_ipv4_source_router_id;
    }

    if(child_yang_name == "prefixes-subtlvs-ipv6-source-router-id")
    {
        if(prefixes_subtlvs_ipv6_source_router_id == nullptr)
        {
            prefixes_subtlvs_ipv6_source_router_id = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId>();
        }
        return prefixes_subtlvs_ipv6_source_router_id;
    }

    if(child_yang_name == "prefixes-subtlvs-prefix-sids")
    {
        if(prefixes_subtlvs_prefix_sids == nullptr)
        {
            prefixes_subtlvs_prefix_sids = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids>();
        }
        return prefixes_subtlvs_prefix_sids;
    }

    if(child_yang_name == "prefixes-subtlvs-flags")
    {
        if(prefixes_subtlvs_flags == nullptr)
        {
            prefixes_subtlvs_flags = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags>();
        }
        return prefixes_subtlvs_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefixes_subtlvs_tag64 != nullptr)
    {
        _children["prefixes-subtlvs-tag64"] = prefixes_subtlvs_tag64;
    }

    if(prefixes_subtlvs_tag != nullptr)
    {
        _children["prefixes-subtlvs-tag"] = prefixes_subtlvs_tag;
    }

    if(mt_ipv4_reachability_prefixes_subtlvs_state != nullptr)
    {
        _children["mt-ipv4-reachability-prefixes-subtlvs-state"] = mt_ipv4_reachability_prefixes_subtlvs_state;
    }

    if(prefixes_subtlvs_ipv4_source_router_id != nullptr)
    {
        _children["prefixes-subtlvs-ipv4-source-router-id"] = prefixes_subtlvs_ipv4_source_router_id;
    }

    if(prefixes_subtlvs_ipv6_source_router_id != nullptr)
    {
        _children["prefixes-subtlvs-ipv6-source-router-id"] = prefixes_subtlvs_ipv6_source_router_id;
    }

    if(prefixes_subtlvs_prefix_sids != nullptr)
    {
        _children["prefixes-subtlvs-prefix-sids"] = prefixes_subtlvs_prefix_sids;
    }

    if(prefixes_subtlvs_flags != nullptr)
    {
        _children["prefixes-subtlvs-flags"] = prefixes_subtlvs_flags;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes-subtlvs-tag64" || name == "prefixes-subtlvs-tag" || name == "mt-ipv4-reachability-prefixes-subtlvs-state" || name == "prefixes-subtlvs-ipv4-source-router-id" || name == "prefixes-subtlvs-ipv6-source-router-id" || name == "prefixes-subtlvs-prefix-sids" || name == "prefixes-subtlvs-flags" || name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::PrefixesSubtlvsTag64()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State>())
{
    state->parent = this;

    yang_name = "prefixes-subtlvs-tag64"; yang_parent_name = "mt-ipv4-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::~PrefixesSubtlvsTag64()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlvs-tag64";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State::State()
    :
    tag64{YType::uint64, "tag64"}
{

    yang_name = "state"; yang_parent_name = "prefixes-subtlvs-tag64"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State::has_operation() const
{
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag64.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag64_name_datas = tag64.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag64_name_datas.begin(), tag64_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag64")
    {
        tag64.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag64")
    {
        tag64.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag64")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::PrefixesSubtlvsTag()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State>())
{
    state->parent = this;

    yang_name = "prefixes-subtlvs-tag"; yang_parent_name = "mt-ipv4-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::~PrefixesSubtlvsTag()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlvs-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State::State()
    :
    tag32{YType::uint32, "tag32"}
{

    yang_name = "state"; yang_parent_name = "prefixes-subtlvs-tag"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State::has_operation() const
{
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag32.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag32_name_datas = tag32.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag32_name_datas.begin(), tag32_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag32")
    {
        tag32.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag32")
    {
        tag32.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag32")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState::MtIpv4ReachabilityPrefixesSubtlvsState()
    :
    type{YType::str, "type"}
{

    yang_name = "mt-ipv4-reachability-prefixes-subtlvs-state"; yang_parent_name = "mt-ipv4-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState::~MtIpv4ReachabilityPrefixesSubtlvsState()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mt-ipv4-reachability-prefixes-subtlvs-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::PrefixesSubtlvsIpv4SourceRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "prefixes-subtlvs-ipv4-source-router-id"; yang_parent_name = "mt-ipv4-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::~PrefixesSubtlvsIpv4SourceRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlvs-ipv4-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State::State()
    :
    type{YType::str, "type"},
    ipv4_source_router_id{YType::str, "ipv4-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "prefixes-subtlvs-ipv4-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_source_router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_source_router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_source_router_id.is_set || is_set(ipv4_source_router_id.yfilter)) leaf_name_data.push_back(ipv4_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-router-id")
    {
        ipv4_source_router_id = value;
        ipv4_source_router_id.value_namespace = name_space;
        ipv4_source_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-router-id")
    {
        ipv4_source_router_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv4-source-router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::PrefixesSubtlvsIpv6SourceRouterId()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "prefixes-subtlvs-ipv6-source-router-id"; yang_parent_name = "mt-ipv4-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::~PrefixesSubtlvsIpv6SourceRouterId()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlvs-ipv6-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State::State()
    :
    type{YType::str, "type"},
    ipv6_source_router_id{YType::str, "ipv6-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "prefixes-subtlvs-ipv6-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv6_source_router_id.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv6_source_router_id.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv6_source_router_id.is_set || is_set(ipv6_source_router_id.yfilter)) leaf_name_data.push_back(ipv6_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-source-router-id")
    {
        ipv6_source_router_id = value;
        ipv6_source_router_id.value_namespace = name_space;
        ipv6_source_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv6-source-router-id")
    {
        ipv6_source_router_id.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv6-source-router-id")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSids()
    :
    prefixes_subtlvs_prefix_sid(this, {"value_"})
{

    yang_name = "prefixes-subtlvs-prefix-sids"; yang_parent_name = "mt-ipv4-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::~PrefixesSubtlvsPrefixSids()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes_subtlvs_prefix_sid.len(); index++)
    {
        if(prefixes_subtlvs_prefix_sid[index]->has_data())
            return true;
    }
    return false;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::has_operation() const
{
    for (std::size_t index=0; index<prefixes_subtlvs_prefix_sid.len(); index++)
    {
        if(prefixes_subtlvs_prefix_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlvs-prefix-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes-subtlvs-prefix-sid")
    {
        auto ent_ = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid>();
        ent_->parent = this;
        prefixes_subtlvs_prefix_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes_subtlvs_prefix_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes-subtlvs-prefix-sid")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::PrefixesSubtlvsPrefixSid()
    :
    value_{YType::uint32, "value"}
        ,
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State>())
{
    state->parent = this;

    yang_name = "prefixes-subtlvs-prefix-sid"; yang_parent_name = "prefixes-subtlvs-prefix-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::~PrefixesSubtlvsPrefixSid()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlvs-prefix-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State::State()
    :
    value_{YType::uint32, "value"},
    algorithm{YType::uint8, "algorithm"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "prefixes-subtlvs-prefix-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set
	|| algorithm.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "algorithm" || name == "flags")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::PrefixesSubtlvsFlags()
    :
    state(std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State>())
{
    state->parent = this;

    yang_name = "prefixes-subtlvs-flags"; yang_parent_name = "mt-ipv4-reachability-prefixes-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::~PrefixesSubtlvsFlags()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes-subtlvs-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State::State()
    :
    type{YType::str, "type"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "prefixes-subtlvs-flags"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State::~State()
{
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set;
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "flags")
        return true;
    return false;
}

const Enum::YLeaf IsisSubAfId::unicast {0, "unicast"};
const Enum::YLeaf IsisSubAfId::multicast {1, "multicast"};

const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_cfg_passive {0, "isis-intf-af-fwd-addr-unknown-cfg-passive"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_proto_doesnt_exist {1, "isis-intf-af-fwd-addr-unknown-proto-doesnt-exist"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_next_hop_reg_error {2, "isis-intf-af-fwd-addr-unknown-next-hop-reg-error"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_no_link_local_add {3, "isis-intf-af-fwd-addr-unknown-no-link-local-add"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_af_not_up {4, "isis-intf-af-fwd-addr-unknown-af-not-up"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_vrf_enabled {5, "isis-intf-af-fwd-addr-unknown-vrf-enabled"};
const Enum::YLeaf IsisIfAfFwdAddrUnknownReason::isis_intf_af_fwd_addr_unknown_internal_error {6, "isis-intf-af-fwd-addr-unknown-internal-error"};

const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_none {0, "isis-u-loop-event-none"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_link_down {1, "isis-u-loop-event-link-down"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_link_up {2, "isis-u-loop-event-link-up"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_ol_bit_set {3, "isis-u-loop-event-ol-bit-set"};
const Enum::YLeaf IsisUloopEvent::isis_u_loop_event_ol_bit_unset {4, "isis-u-loop-event-ol-bit-unset"};

const Enum::YLeaf SrmsMiSrcEB::none {0, "none"};
const Enum::YLeaf SrmsMiSrcEB::local {1, "local"};
const Enum::YLeaf SrmsMiSrcEB::remote {2, "remote"};

const Enum::YLeaf IsisLspDbOp::isis_lsp_db_clear {0, "isis-lsp-db-clear"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_insert_new_lsp {1, "isis-lsp-db-insert-new-lsp"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_replace_lsp_with_lsp {2, "isis-lsp-db-replace-lsp-with-lsp"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_purge_lsp {3, "isis-lsp-db-purge-lsp"};
const Enum::YLeaf IsisLspDbOp::isis_lsp_db_delete_lsp {4, "isis-lsp-db-delete-lsp"};

const Enum::YLeaf OpenconfigIsisLspRouterCapabilityStateFlagsEnum::flood {0, "flood"};
const Enum::YLeaf OpenconfigIsisLspRouterCapabilityStateFlagsEnum::down {1, "down"};

const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_active {0, "isis-startup-ssm-active"};
const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_complete {1, "isis-startup-ssm-complete"};
const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_aborted {2, "isis-startup-ssm-aborted"};
const Enum::YLeaf IsisStartupStatus::isis_startup_ssm_not_run {3, "isis-startup-ssm-not-run"};

const Enum::YLeaf IsisUp::isis_down {0, "isis-down"};
const Enum::YLeaf IsisUp::isis_up {1, "isis-up"};

const Enum::YLeaf IsisErrLogLevel::isis_err_log_level_info {0, "isis-err-log-level-info"};
const Enum::YLeaf IsisErrLogLevel::isis_err_log_level_warn {1, "isis-err-log-level-warn"};
const Enum::YLeaf IsisErrLogLevel::isis_err_log_level_critical {2, "isis-err-log-level-critical"};

const Enum::YLeaf OpenconfigIsisTypesHelloPaddingTypeEnum::strict {0, "strict"};
const Enum::YLeaf OpenconfigIsisTypesHelloPaddingTypeEnum::loose {1, "loose"};
const Enum::YLeaf OpenconfigIsisTypesHelloPaddingTypeEnum::adaptive {2, "adaptive"};
const Enum::YLeaf OpenconfigIsisTypesHelloPaddingTypeEnum::disable {3, "disable"};

const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_intf_passive {0, "isis-intf-topo-adj-form-disabled-intf-passive"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_af_not_up {1, "isis-intf-topo-adj-form-disabled-af-not-up"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_af_fwd_addr_unknown {2, "isis-intf-topo-adj-form-disabled-af-fwd-addr-unknown"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_topo_not_cfg {3, "isis-intf-topo-adj-form-disabled-topo-not-cfg"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_topo_can_not_participate {4, "isis-intf-topo-adj-form-disabled-topo-can-not-participate"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_idle {5, "isis-intf-topo-adj-form-disabled-idle"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_internal_error {6, "isis-intf-topo-adj-form-disabled-internal-error"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_mtu {7, "isis-intf-topo-adj-form-disabled-mtu"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_snpa {8, "isis-intf-topo-adj-form-disabled-snpa"};
const Enum::YLeaf IsisIfTopoAdjFormDisabledReason::isis_intf_topo_adj_form_disabled_mcast {9, "isis-intf-topo-adj-form-disabled-mcast"};

const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_none {0, "isis-tilfa-comp-none"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_link {1, "isis-tilfa-comp-link"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_node {2, "isis-tilfa-comp-node"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_srlg {3, "isis-tilfa-comp-srlg"};
const Enum::YLeaf IsisTilfaComputation::isis_tilfa_comp_node_srlg {4, "isis-tilfa-comp-node-srlg"};

const Enum::YLeaf IsisAdjStateReason::isis_adj_up_nsf_restart {0, "isis-adj-up-nsf-restart"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_up_new_adj {1, "isis-adj-up-new-adj"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_up_restarted {2, "isis-adj-up-restarted"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_up_nsf_restored {3, "isis-adj-up-nsf-restored"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_up_chkpt_restored {4, "isis-adj-up-chkpt-restored"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_init_reason {5, "isis-adj-init-reason"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_init_neighbor_forgot {6, "isis-adj-init-neighbor-forgot"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_hold_time {7, "isis-adj-down-hold-time"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_if_down {8, "isis-adj-down-if-down"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_cfg_mismatch {9, "isis-adj-down-cfg-mismatch"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_circ_id {10, "isis-adj-down-circ-id"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_nsf_ack_fail {11, "isis-adj-down-nsf-ack-fail"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_db_clear {12, "isis-adj-down-db-clear"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_no_common_topology {13, "isis-adj-down-no-common-topology"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_restart_tlv_missing {14, "isis-adj-down-restart-tlv-missing"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_bfd_down {15, "isis-adj-down-bfd-down"};
const Enum::YLeaf IsisAdjStateReason::isis_adj_down_3way_down {16, "isis-adj-down-3way-down"};

const Enum::YLeaf SrmsMiAfEB::none {0, "none"};
const Enum::YLeaf SrmsMiAfEB::ipv4 {1, "ipv4"};
const Enum::YLeaf SrmsMiAfEB::ipv6 {2, "ipv6"};

const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_no_state {0, "isis-adj-bfd-no-state"};
const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_down_state {1, "isis-adj-bfd-down-state"};
const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_init_state {2, "isis-adj-bfd-init-state"};
const Enum::YLeaf IsisAdjBfdState::isis_adj_bfd_up_state {3, "isis-adj-bfd-up-state"};

const Enum::YLeaf IsisRedistProto::isis_redist_connected {0, "isis-redist-connected"};
const Enum::YLeaf IsisRedistProto::isis_redist_static {1, "isis-redist-static"};
const Enum::YLeaf IsisRedistProto::isis_redist_ospf {2, "isis-redist-ospf"};
const Enum::YLeaf IsisRedistProto::isis_redist_bgp {3, "isis-redist-bgp"};
const Enum::YLeaf IsisRedistProto::isis_redist_isis {4, "isis-redist-isis"};
const Enum::YLeaf IsisRedistProto::isis_redist_ospfv3 {5, "isis-redist-ospfv3"};
const Enum::YLeaf IsisRedistProto::isis_redist_rip {6, "isis-redist-rip"};
const Enum::YLeaf IsisRedistProto::isis_redist_eigrp {7, "isis-redist-eigrp"};
const Enum::YLeaf IsisRedistProto::isis_redist_subscriber {8, "isis-redist-subscriber"};
const Enum::YLeaf IsisRedistProto::isis_redist_application {9, "isis-redist-application"};
const Enum::YLeaf IsisRedistProto::isis_redist_mobile {10, "isis-redist-mobile"};

const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_interface {0, "isis-sh-route-adv-origin-interface"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_redistributed {1, "isis-sh-route-adv-origin-redistributed"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_native {2, "isis-sh-route-adv-origin-native"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_summary {3, "isis-sh-route-adv-origin-summary"};
const Enum::YLeaf IsisShRouteAdvOrigin::isis_sh_route_adv_origin_default {4, "isis-sh-route-adv-origin-default"};

const Enum::YLeaf IsisEnabled::isis_disabled {0, "isis-disabled"};
const Enum::YLeaf IsisEnabled::isis_enabled {1, "isis-enabled"};

const Enum::YLeaf IsisLevel::isis_level0 {0, "isis-level0"};
const Enum::YLeaf IsisLevel::isis_level1 {1, "isis-level1"};
const Enum::YLeaf IsisLevel::isis_level2 {2, "isis-level2"};

const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_down_stream {0, "isis-frr-tiebreaker-down-stream"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_lc_disjoint {1, "isis-frr-tiebreaker-lc-disjoint"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_low_est_backup_metric {2, "isis-frr-tiebreaker-low-est-backup-metric"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_node_protecting {3, "isis-frr-tiebreaker-node-protecting"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_primary_path {4, "isis-frr-tiebreaker-primary-path"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_secondary_path {5, "isis-frr-tiebreaker-secondary-path"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_srlg_disjoint {6, "isis-frr-tiebreaker-srlg-disjoint"};
const Enum::YLeaf IsisFrrTiebreaker::isis_frr_tiebreaker_default {7, "isis-frr-tiebreaker-default"};

const Enum::YLeaf OpenconfigIsisLspIpv6SrlgStateFlagsEnum::na {0, "na"};

const Enum::YLeaf IsisFrr::isis_frr_type_none {0, "isis-frr-type-none"};
const Enum::YLeaf IsisFrr::isis_frr_type_per_link {1, "isis-frr-type-per-link"};
const Enum::YLeaf IsisFrr::isis_frr_type_per_prefix {2, "isis-frr-type-per-prefix"};
const Enum::YLeaf IsisFrr::isis_frr_type_sr_u_loop {3, "isis-frr-type-sr-u-loop"};

const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_no_net_cfg {0, "isis-intf-disabled-no-net-cfg"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_area_missing {1, "isis-intf-disabled-area-missing"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_no_area_running {2, "isis-intf-disabled-no-area-running"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_no_topos_cfg {3, "isis-intf-disabled-no-topos-cfg"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_no_imd_conn {4, "isis-intf-disabled-no-imd-conn"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_imd_reg_error {5, "isis-intf-disabled-imd-reg-error"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_level_mismatch {6, "isis-intf-disabled-level-mismatch"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_base_caps_error {7, "isis-intf-disabled-base-caps-error"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_intf_doesnt_exist {8, "isis-intf-disabled-intf-doesnt-exist"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_intf_shutdown {9, "isis-intf-disabled-intf-shutdown"};
const Enum::YLeaf IsisIfDisabledReason::isis_intf_disabled_internal_error {10, "isis-intf-disabled-internal-error"};

const Enum::YLeaf IsisShTeLink::isis_sh_te_link_p2p {0, "isis-sh-te-link-p2p"};
const Enum::YLeaf IsisShTeLink::isis_sh_te_link_broadcast {1, "isis-sh-te-link-broadcast"};

const Enum::YLeaf IsisMediaClass::isis_media_class_lan {0, "isis-media-class-lan"};
const Enum::YLeaf IsisMediaClass::isis_media_class_p2p {1, "isis-media-class-p2p"};
const Enum::YLeaf IsisMediaClass::isis_media_class_loop_back {2, "isis-media-class-loop-back"};

const Enum::YLeaf OpenconfigIsisTypesAdaptiveTimerTypeEnum::linear {0, "linear"};
const Enum::YLeaf OpenconfigIsisTypesAdaptiveTimerTypeEnum::exponential {1, "exponential"};

const Enum::YLeaf IsisIfMcastInvalidReason::isis_intf_mcast_invalid_join_error {0, "isis-intf-mcast-invalid-join-error"};
const Enum::YLeaf IsisIfMcastInvalidReason::isis_intf_mcast_invalid_internal_error {1, "isis-intf-mcast-invalid-internal-error"};
const Enum::YLeaf IsisIfMcastInvalidReason::isis_intf_mcast_invalid_not_yet_needed {2, "isis-intf-mcast-invalid-not-yet-needed"};

const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_intf_suppressed {0, "isis-intf-topo-adv-prefix-disabled-intf-suppressed"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_af_not_up {1, "isis-intf-topo-adv-prefix-disabled-af-not-up"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_af_prefixes_unknown {2, "isis-intf-topo-adv-prefix-disabled-af-prefixes-unknown"};
const Enum::YLeaf IsisIfTopoAdvPrefixDisabledReason::isis_intf_topo_adv_prefix_disabled_internal_error {3, "isis-intf-topo-adv-prefix-disabled-internal-error"};

const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_config {0, "isis-lsp-trig-config"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_newadj {1, "isis-lsp-trig-newadj"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_deladj {2, "isis-lsp-trig-deladj"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_dr_change {3, "isis-lsp-trig-dr-change"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_area_set {4, "isis-lsp-trig-area-set"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_attach {5, "isis-lsp-trig-attach"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_hippity {6, "isis-lsp-trig-hippity"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_regen {7, "isis-lsp-trig-regen"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_if_up {8, "isis-lsp-trig-ip-if-up"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_if_down {9, "isis-lsp-trig-ip-if-down"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_inter_area {10, "isis-lsp-trig-ip-inter-area"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_external {11, "isis-lsp-trig-ip-external"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_external_full {12, "isis-lsp-trig-ip-external-full"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_def_orig {13, "isis-lsp-trig-ip-def-orig"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_ip_addr_chg {14, "isis-lsp-trig-ip-addr-chg"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_te_info {15, "isis-lsp-trig-te-info"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_te_pce_info {16, "isis-lsp-trig-te-pce-info"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_te_fa_info {17, "isis-lsp-trig-te-fa-info"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_nsr_fo {18, "isis-lsp-trig-nsr-fo"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_pn_cancel {19, "isis-lsp-trig-pn-cancel"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_lkgp {20, "isis-lsp-trig-lkgp"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_pp {21, "isis-lsp-trig-pp"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_config_force_send {22, "isis-lsp-trig-config-force-send"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_config_force_init {23, "isis-lsp-trig-config-force-init"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_adj_sid_add {24, "isis-lsp-trig-adj-sid-add"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_adj_sid_delete {25, "isis-lsp-trig-adj-sid-delete"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_adj_sid_change {26, "isis-lsp-trig-adj-sid-change"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_msd {27, "isis-lsp-trig-msd"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_adj_sid_wait_timer {28, "isis-lsp-trig-adj-sid-wait-timer"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_direct_gen {29, "isis-lsp-trig-direct-gen"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_flex_algo_enable_disable {30, "isis-lsp-trig-flex-algo-enable-disable"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_pm_delay_loss {31, "isis-lsp-trig-pm-delay-loss"};
const Enum::YLeaf IsisLspTrigger::isis_lsp_trig_pm_bw_util {32, "isis-lsp-trig-pm-bw-util"};

const Enum::YLeaf IsisAdjState::isis_adj_up_state {0, "isis-adj-up-state"};
const Enum::YLeaf IsisAdjState::isis_adj_init_state {1, "isis-adj-init-state"};
const Enum::YLeaf IsisAdjState::isis_adj_failed_state {2, "isis-adj-failed-state"};

const Enum::YLeaf OpenconfigIsisLspNlpidEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf OpenconfigIsisLspNlpidEnum::ipv6 {1, "ipv6"};

const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_add_to_intf_stack_fail {0, "isis-intf-clns-proto-down-add-to-intf-stack-fail"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_no_imd_conn {1, "isis-intf-clns-proto-down-no-imd-conn"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_imd_node_doesnt_exist {2, "isis-intf-clns-proto-down-imd-node-doesnt-exist"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_imd_exist_reg_error {3, "isis-intf-clns-proto-down-imd-exist-reg-error"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_imd_state_reg_error {4, "isis-intf-clns-proto-down-imd-state-reg-error"};
const Enum::YLeaf IsisIfClnsProtoDownReason::isis_intf_clns_proto_down_clns_not_up {5, "isis-intf-clns-proto-down-clns-not-up"};

const Enum::YLeaf SrmsMiFlagEB::false_ {0, "false"};
const Enum::YLeaf SrmsMiFlagEB::true_ {1, "true"};

const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ok {0, "isis-adj-topo-status-ok"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_intf_not_configured {1, "isis-adj-topo-status-intf-not-configured"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_intf_not_running {2, "isis-adj-topo-status-intf-not-running"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_init_state {3, "isis-adj-topo-status-init-state"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_neighbor_doesnt_participate {4, "isis-adj-topo-status-neighbor-doesnt-participate"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv4_address_tlv_missing {5, "isis-adj-topo-status-ipv4-address-tlv-missing"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv4_address_tlv_empty {6, "isis-adj-topo-status-ipv4-address-tlv-empty"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv6_address_tlv_missing {7, "isis-adj-topo-status-ipv6-address-tlv-missing"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv6_address_tlv_empty {8, "isis-adj-topo-status-ipv6-address-tlv-empty"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv4_address_matches_ours {9, "isis-adj-topo-status-ipv4-address-matches-ours"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv6_address_matches_ours {10, "isis-adj-topo-status-ipv6-address-matches-ours"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv4_address_subnet_mismatch {11, "isis-adj-topo-status-ipv4-address-subnet-mismatch"};
const Enum::YLeaf IsisAdjTopoStatus::isis_adj_topo_status_ipv6_address_not_link_local {12, "isis-adj-topo-status-ipv6-address-not-link-local"};

const Enum::YLeaf OpenconfigIsisLspLanAdjacencySidStateFlagsEnum::address_family {0, "address-family"};
const Enum::YLeaf OpenconfigIsisLspLanAdjacencySidStateFlagsEnum::backup {1, "backup"};
const Enum::YLeaf OpenconfigIsisLspLanAdjacencySidStateFlagsEnum::value_ {2, "value"};
const Enum::YLeaf OpenconfigIsisLspLanAdjacencySidStateFlagsEnum::local {3, "local"};
const Enum::YLeaf OpenconfigIsisLspLanAdjacencySidStateFlagsEnum::set {4, "set"};

const Enum::YLeaf IsisIfTopoDisabledReason::isis_intf_topo_disabled_not_cfg {0, "isis-intf-topo-disabled-not-cfg"};
const Enum::YLeaf IsisIfTopoDisabledReason::isis_intf_topo_disabled_internal_error {1, "isis-intf-topo-disabled-internal-error"};

const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_cfg_passive {0, "isis-intf-adj-form-disabled-cfg-passive"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_no_topo_participate {1, "isis-intf-adj-form-disabled-no-topo-participate"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_add_to_intf_stack_fail {2, "isis-intf-adj-form-disabled-add-to-intf-stack-fail"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_clns_io {3, "isis-intf-adj-form-disabled-clns-io"};
const Enum::YLeaf IsisIfAdjFormDisabledReason::isis_intf_adj_form_disabled_internal_error {4, "isis-intf-adj-form-disabled-internal-error"};

const Enum::YLeaf OpenconfigIsisLspIsisMetricFlagsEnum::internal {0, "internal"};
const Enum::YLeaf OpenconfigIsisLspIsisMetricFlagsEnum::unsupported {1, "unsupported"};

const Enum::YLeaf OpenconfigSegmentRoutingLabelOptionsEnum::no_php {0, "no-php"};
const Enum::YLeaf OpenconfigSegmentRoutingLabelOptionsEnum::explicit_null {1, "explicit-null"};

const Enum::YLeaf IsisLevels::isis_levels_none {0, "isis-levels-none"};
const Enum::YLeaf IsisLevels::isis_levels_1 {1, "isis-levels-1"};
const Enum::YLeaf IsisLevels::isis_levels_2 {2, "isis-levels-2"};
const Enum::YLeaf IsisLevels::isis_levels_12 {3, "isis-levels-12"};
const Enum::YLeaf IsisLevels::isis_levels_total {4, "isis-levels-total"};

const Enum::YLeaf OpenconfigIsisTypesCircuitTypeEnum::point_to_point {0, "point-to-point"};
const Enum::YLeaf OpenconfigIsisTypesCircuitTypeEnum::broadcast {1, "broadcast"};

const Enum::YLeaf OpenconfigIsisLspCryptoTypeEnum::hmac_md5 {0, "hmac-md5"};
const Enum::YLeaf OpenconfigIsisLspCryptoTypeEnum::cleartext {1, "cleartext"};

const Enum::YLeaf IsisIfAfDisabledReason::isis_intf_af_disabled_no_topo_enabled {0, "isis-intf-af-disabled-no-topo-enabled"};
const Enum::YLeaf IsisIfAfDisabledReason::isis_intf_af_disabled_internal_error {1, "isis-intf-af-disabled-internal-error"};

const Enum::YLeaf OpenconfigIsisLspStateFlagsEnum::numbered {0, "numbered"};

const Enum::YLeaf IsisIfAfPrefixUnknownReason::isis_intf_af_prefix_unknown_adv_suppressed {0, "isis-intf-af-prefix-unknown-adv-suppressed"};
const Enum::YLeaf IsisIfAfPrefixUnknownReason::isis_intf_af_prefix_unknown_global_addr_reg_error {1, "isis-intf-af-prefix-unknown-global-addr-reg-error"};
const Enum::YLeaf IsisIfAfPrefixUnknownReason::isis_intf_af_prefix_unknown_internal_error {2, "isis-intf-af-prefix-unknown-internal-error"};

const Enum::YLeaf OpenconfigIsisTypesMetricStyleEnum::narrow_metric {0, "narrow-metric"};
const Enum::YLeaf OpenconfigIsisTypesMetricStyleEnum::wide_metric {1, "wide-metric"};

const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_none {0, "isis-nsf-flav-or-none"};
const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_cisco {1, "isis-nsf-flav-or-cisco"};
const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_ietf {2, "isis-nsf-flav-or-ietf"};
const Enum::YLeaf IsisNsfFlavor::isis_nsf_flav_or_nsr {3, "isis-nsf-flav-or-nsr"};

const Enum::YLeaf IsisAdjTopoChange::isis_adj_topo_up_change {0, "isis-adj-topo-up-change"};
const Enum::YLeaf IsisAdjTopoChange::isis_adj_topo_next_hop_change {1, "isis-adj-topo-next-hop-change"};
const Enum::YLeaf IsisAdjTopoChange::isis_adj_topo_down_change {2, "isis-adj-topo-down-change"};

const Enum::YLeaf IsisShTePceFloodingScope::none {0, "none"};
const Enum::YLeaf IsisShTePceFloodingScope::area {1, "area"};
const Enum::YLeaf IsisShTePceFloodingScope::domain {2, "domain"};

const Enum::YLeaf OpenconfigIsisLspAlgorithmEnum::spf {0, "spf"};
const Enum::YLeaf OpenconfigIsisLspAlgorithmEnum::strict_spf {1, "strict-spf"};

const Enum::YLeaf IsisPrefixPriority::isis_prefix_priority_critical {0, "isis-prefix-priority-critical"};
const Enum::YLeaf IsisPrefixPriority::isis_prefix_priority_high {1, "isis-prefix-priority-high"};
const Enum::YLeaf IsisPrefixPriority::isis_prefix_priority_med {2, "isis-prefix-priority-med"};
const Enum::YLeaf IsisPrefixPriority::isis_prefix_priority_low {3, "isis-prefix-priority-low"};

const Enum::YLeaf OpenconfigIsisLspFlagsStateFlagsEnum::external_flag {0, "external-flag"};
const Enum::YLeaf OpenconfigIsisLspFlagsStateFlagsEnum::readvertisement_flag {1, "readvertisement-flag"};
const Enum::YLeaf OpenconfigIsisLspFlagsStateFlagsEnum::node_flag {2, "node-flag"};

const Enum::YLeaf IsisAfId::ipv4 {0, "ipv4"};
const Enum::YLeaf IsisAfId::ipv6 {1, "ipv6"};

const Enum::YLeaf IsisKnown::isis_unknown {0, "isis-unknown"};
const Enum::YLeaf IsisKnown::isis_known {1, "isis-known"};

const Enum::YLeaf OpenconfigIsisLspAdjacencySidStateFlagsEnum::address_family {0, "address-family"};
const Enum::YLeaf OpenconfigIsisLspAdjacencySidStateFlagsEnum::backup {1, "backup"};
const Enum::YLeaf OpenconfigIsisLspAdjacencySidStateFlagsEnum::value_ {2, "value"};
const Enum::YLeaf OpenconfigIsisLspAdjacencySidStateFlagsEnum::local {3, "local"};
const Enum::YLeaf OpenconfigIsisLspAdjacencySidStateFlagsEnum::set {4, "set"};

const Enum::YLeaf OpenconfigIsisLspPrefixSidStateFlagsEnum::readvertisement {0, "readvertisement"};
const Enum::YLeaf OpenconfigIsisLspPrefixSidStateFlagsEnum::node {1, "node"};
const Enum::YLeaf OpenconfigIsisLspPrefixSidStateFlagsEnum::php {2, "php"};
const Enum::YLeaf OpenconfigIsisLspPrefixSidStateFlagsEnum::explicit_null {3, "explicit-null"};
const Enum::YLeaf OpenconfigIsisLspPrefixSidStateFlagsEnum::value_ {4, "value"};
const Enum::YLeaf OpenconfigIsisLspPrefixSidStateFlagsEnum::local {5, "local"};

const Enum::YLeaf OpenconfigIsisLspFlagsEnum::partition_repair {0, "partition-repair"};
const Enum::YLeaf OpenconfigIsisLspFlagsEnum::attached_error {1, "attached-error"};
const Enum::YLeaf OpenconfigIsisLspFlagsEnum::attached_expense {2, "attached-expense"};
const Enum::YLeaf OpenconfigIsisLspFlagsEnum::attached_delay {3, "attached-delay"};
const Enum::YLeaf OpenconfigIsisLspFlagsEnum::attached_default {4, "attached-default"};
const Enum::YLeaf OpenconfigIsisLspFlagsEnum::overload {5, "overload"};

const Enum::YLeaf IsisValid::isis_invalid {0, "isis-invalid"};
const Enum::YLeaf IsisValid::isis_valid {1, "isis-valid"};

const Enum::YLeaf IsisIfClnsMtuInvalidReason::isis_intf_clns_mtu_invalid_too_small {0, "isis-intf-clns-mtu-invalid-too-small"};
const Enum::YLeaf IsisIfClnsMtuInvalidReason::isis_intf_clns_mtu_invalid_internal_error {1, "isis-intf-clns-mtu-invalid-internal-error"};

const Enum::YLeaf OpenconfigIsisLspDefaultMetricStateFlagsEnum::internal {0, "internal"};

const Enum::YLeaf OpenconfigIsisAdjacencyStateNlpidEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf OpenconfigIsisAdjacencyStateNlpidEnum::ipv6 {1, "ipv6"};

const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_conn_fail {0, "isis-intf-af-proto-down-imd-conn-fail"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_node_doesnt_exist {1, "isis-intf-af-proto-down-imd-node-doesnt-exist"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_exist_reg_error {2, "isis-intf-af-proto-down-imd-exist-reg-error"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_imd_state_reg_error {3, "isis-intf-af-proto-down-imd-state-reg-error"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_af_not_up {4, "isis-intf-af-proto-down-af-not-up"};
const Enum::YLeaf IsisIfAfProtoDownReason::isis_intf_af_proto_down_internal_error {5, "isis-intf-af-proto-down-internal-error"};

const Enum::YLeaf IsisMetricMode::isis_metric_mode_fixed {0, "isis-metric-mode-fixed"};
const Enum::YLeaf IsisMetricMode::isis_metric_mode_relative {1, "isis-metric-mode-relative"};
const Enum::YLeaf IsisMetricMode::isis_metric_mode_absolute {2, "isis-metric-mode-absolute"};

const Enum::YLeaf OpenconfigIsisLspSegmentRoutingCapabilityStateFlagsEnum::ipv4_mpls {0, "ipv4-mpls"};
const Enum::YLeaf OpenconfigIsisLspSegmentRoutingCapabilityStateFlagsEnum::ipv6_mpls {1, "ipv6-mpls"};
const Enum::YLeaf OpenconfigIsisLspSegmentRoutingCapabilityStateFlagsEnum::ipv6_sr {2, "ipv6-sr"};

const Enum::YLeaf IsisMetricStyle::isis_metric_style_narrow {0, "isis-metric-style-narrow"};
const Enum::YLeaf IsisMetricStyle::isis_metric_style_wide {1, "isis-metric-style-wide"};
const Enum::YLeaf IsisMetricStyle::isis_metric_style_transition {2, "isis-metric-style-transition"};
const Enum::YLeaf IsisMetricStyle::isis_metric_style_narrow_transition {3, "isis-metric-style-narrow-transition"};
const Enum::YLeaf IsisMetricStyle::isis_metric_style_wide_transition {4, "isis-metric-style-wide-transition"};

const Enum::YLeaf IsisIfAdvPrefixDisabledReason::isis_intf_adv_prefix_disabled_if_cfg_suppressed {0, "isis-intf-adv-prefix-disabled-if-cfg-suppressed"};
const Enum::YLeaf IsisIfAdvPrefixDisabledReason::isis_intf_adv_prefix_disabled_no_topo_participate {1, "isis-intf-adv-prefix-disabled-no-topo-participate"};
const Enum::YLeaf IsisIfAdvPrefixDisabledReason::isis_intf_adv_prefix_disabled_internal_error {2, "isis-intf-adv-prefix-disabled-internal-error"};

const Enum::YLeaf OpenconfigIsisTypesLevelTypeEnum::level1 {0, "level1"};
const Enum::YLeaf OpenconfigIsisTypesLevelTypeEnum::level2 {1, "level2"};
const Enum::YLeaf OpenconfigIsisTypesLevelTypeEnum::level12 {2, "level12"};

const Enum::YLeaf IsisSpfClass::isis_spf_frr_sr_u_loop {0, "isis-spf-frr-sr-u-loop"};
const Enum::YLeaf IsisSpfClass::isis_spf_frr_per_link {1, "isis-spf-frr-per-link"};
const Enum::YLeaf IsisSpfClass::isis_spf_partial {2, "isis-spf-partial"};
const Enum::YLeaf IsisSpfClass::isis_spf_frr_per_prefix {3, "isis-spf-frr-per-prefix"};
const Enum::YLeaf IsisSpfClass::isis_spf_ucmp_calc {4, "isis-spf-ucmp-calc"};
const Enum::YLeaf IsisSpfClass::isis_spf_flex {5, "isis-spf-flex"};
const Enum::YLeaf IsisSpfClass::isis_spf_next_hop {6, "isis-spf-next-hop"};
const Enum::YLeaf IsisSpfClass::isis_spf_incremental {7, "isis-spf-incremental"};
const Enum::YLeaf IsisSpfClass::isis_spf_full {8, "isis-spf-full"};

const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_config {0, "isis-spf-trig-config"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_nsr_fo {1, "isis-spf-trig-nsr-fo"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_periodic {2, "isis-spf-trig-periodic"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_clear {3, "isis-spf-trig-clear"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_newadj {4, "isis-spf-trig-newadj"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_deladj {5, "isis-spf-trig-deladj"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_next_hop {6, "isis-spf-trig-next-hop"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_metric {7, "isis-spf-trig-metric"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_dis {8, "isis-spf-trig-dis"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_frr_per_link {9, "isis-spf-trig-frr-per-link"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_frr_per_prefix {10, "isis-spf-trig-frr-per-prefix"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_ucmp {11, "isis-spf-trig-ucmp"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_new_tunnel {12, "isis-spf-trig-new-tunnel"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_del_tunnel {13, "isis-spf-trig-del-tunnel"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_chg_tunnel {14, "isis-spf-trig-chg-tunnel"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_new_node {15, "isis-spf-trig-new-node"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_del_node {16, "isis-spf-trig-del-node"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_newlsp {17, "isis-spf-trig-newlsp"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_lsp_expiry {18, "isis-spf-trig-lsp-expiry"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_attach_set {19, "isis-spf-trig-attach-set"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_attach_clr {20, "isis-spf-trig-attach-clr"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_overload_set {21, "isis-spf-trig-overload-set"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_overload_clr {22, "isis-spf-trig-overload-clr"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_link_good {23, "isis-spf-trig-link-good"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_link_bad {24, "isis-spf-trig-link-bad"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_prefix_good {25, "isis-spf-trig-prefix-good"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_prefix_bad {26, "isis-spf-trig-prefix-bad"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_prefix {27, "isis-spf-trig-prefix"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_area_addr {28, "isis-spf-trig-area-addr"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_ip_addr {29, "isis-spf-trig-ip-addr"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_rtrid {30, "isis-spf-trig-rtrid"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_flex_algo {31, "isis-spf-trig-flex-algo"};
const Enum::YLeaf IsisSpfTrigger::isis_spf_trig_prefix_policy {32, "isis-spf-trig-prefix-policy"};

const Enum::YLeaf IsisIfClnsSnpaUnknownReason::isis_intf_clns_snpa_unknown_access_error {0, "isis-intf-clns-snpa-unknown-access-error"};
const Enum::YLeaf IsisIfClnsSnpaUnknownReason::isis_intf_clns_snpa_unknown_not_lan {1, "isis-intf-clns-snpa-unknown-not-lan"};
const Enum::YLeaf IsisIfClnsSnpaUnknownReason::isis_intf_clns_snpa_unknown_internal_error {2, "isis-intf-clns-snpa-unknown-internal-error"};

const Enum::YLeaf OpenconfigIsisTypesIsisInterfaceAdjStateEnum::up {0, "up"};
const Enum::YLeaf OpenconfigIsisTypesIsisInterfaceAdjStateEnum::down {1, "down"};
const Enum::YLeaf OpenconfigIsisTypesIsisInterfaceAdjStateEnum::init {2, "init"};
const Enum::YLeaf OpenconfigIsisTypesIsisInterfaceAdjStateEnum::failed {3, "failed"};

const Enum::YLeaf IsisReachable::isis_unreachable {0, "isis-unreachable"};
const Enum::YLeaf IsisReachable::isis_reachable {1, "isis-reachable"};

const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_none {0, "isis-u-loop-avoidance-type-none"};
const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_all {1, "isis-u-loop-avoidance-type-all"};
const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_protected {2, "isis-u-loop-avoidance-type-protected"};
const Enum::YLeaf IsisUloopAvoidance::isis_u_loop_avoidance_type_sr {3, "isis-u-loop-avoidance-type-sr"};

const Enum::YLeaf Srv6EndFunction::unknown {0, "unknown"};
const Enum::YLeaf Srv6EndFunction::end {1, "end"};
const Enum::YLeaf Srv6EndFunction::end_with_psp {2, "end-with-psp"};
const Enum::YLeaf Srv6EndFunction::end_with_usp {3, "end-with-usp"};
const Enum::YLeaf Srv6EndFunction::end_with_psp_usp {4, "end-with-psp-usp"};
const Enum::YLeaf Srv6EndFunction::end_x {5, "end-x"};
const Enum::YLeaf Srv6EndFunction::end_x_with_psp {6, "end-x-with-psp"};
const Enum::YLeaf Srv6EndFunction::end_x_with_usp {7, "end-x-with-usp"};
const Enum::YLeaf Srv6EndFunction::end_x_with_psp_usp {8, "end-x-with-psp-usp"};
const Enum::YLeaf Srv6EndFunction::end_tn {9, "end-tn"};
const Enum::YLeaf Srv6EndFunction::end_t_with_psp {10, "end-t-with-psp"};
const Enum::YLeaf Srv6EndFunction::end_t_with_usp {11, "end-t-with-usp"};
const Enum::YLeaf Srv6EndFunction::end_t_with_psp_usp {12, "end-t-with-psp-usp"};
const Enum::YLeaf Srv6EndFunction::end_b6 {13, "end-b6"};
const Enum::YLeaf Srv6EndFunction::end_b6_encaps {14, "end-b6-encaps"};
const Enum::YLeaf Srv6EndFunction::end_bm {15, "end-bm"};
const Enum::YLeaf Srv6EndFunction::end_dx6 {16, "end-dx6"};
const Enum::YLeaf Srv6EndFunction::end_dx4 {17, "end-dx4"};
const Enum::YLeaf Srv6EndFunction::end_dt6 {18, "end-dt6"};
const Enum::YLeaf Srv6EndFunction::end_dt4 {19, "end-dt4"};
const Enum::YLeaf Srv6EndFunction::end_dt46 {20, "end-dt46"};
const Enum::YLeaf Srv6EndFunction::end_dx2 {21, "end-dx2"};
const Enum::YLeaf Srv6EndFunction::end_dx2v {22, "end-dx2v"};
const Enum::YLeaf Srv6EndFunction::end_dx2u {23, "end-dx2u"};
const Enum::YLeaf Srv6EndFunction::end_dx2m {24, "end-dx2m"};
const Enum::YLeaf Srv6EndFunction::end_otp {25, "end-otp"};
const Enum::YLeaf Srv6EndFunction::end_s {26, "end-s"};

const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_l1_summary_null {0, "isis-prefix-origin-l1-summary-null"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_l1 {1, "isis-prefix-origin-l1"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_l2_summary_null {2, "isis-prefix-origin-l2-summary-null"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_l2 {3, "isis-prefix-origin-l2"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_inter_area_summary_null {4, "isis-prefix-origin-inter-area-summary-null"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_inter_area {5, "isis-prefix-origin-inter-area"};
const Enum::YLeaf IsisPrefixOrigin::isis_prefix_origin_default_nearest_attached {6, "isis-prefix-origin-default-nearest-attached"};

const Enum::YLeaf OpenconfigIsisLspAttributesEnum::overload {0, "overload"};
const Enum::YLeaf OpenconfigIsisLspAttributesEnum::attached {1, "attached"};

const Enum::YLeaf OpenconfigIsisLspPduTypeEnum::level1 {0, "level1"};
const Enum::YLeaf OpenconfigIsisLspPduTypeEnum::level2 {1, "level2"};

const Enum::YLeaf OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::Algorithm::spf {0, "spf"};
const Enum::YLeaf OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::Algorithm::strict_spf {1, "strict-spf"};


}
}

