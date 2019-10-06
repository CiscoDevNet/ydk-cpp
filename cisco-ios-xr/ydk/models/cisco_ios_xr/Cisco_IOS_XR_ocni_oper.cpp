
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ocni_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ocni_oper {

OcniNiBase::OcniNiBase()
    :
    network_instances(std::make_shared<OcniNiBase::NetworkInstances>())
{
    network_instances->parent = this;

    yang_name = "ocni-ni-base"; yang_parent_name = "Cisco-IOS-XR-ocni-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

OcniNiBase::~OcniNiBase()
{
}

bool OcniNiBase::has_data() const
{
    if (is_presence_container) return true;
    return (network_instances !=  nullptr && network_instances->has_data());
}

bool OcniNiBase::has_operation() const
{
    return is_set(yfilter)
	|| (network_instances !=  nullptr && network_instances->has_operation());
}

std::string OcniNiBase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-oper:ocni-ni-base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniNiBase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniNiBase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instances")
    {
        if(network_instances == nullptr)
        {
            network_instances = std::make_shared<OcniNiBase::NetworkInstances>();
        }
        return network_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniNiBase::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(network_instances != nullptr)
    {
        _children["network-instances"] = network_instances;
    }

    return _children;
}

void OcniNiBase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniNiBase::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> OcniNiBase::clone_ptr() const
{
    return std::make_shared<OcniNiBase>();
}

std::string OcniNiBase::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string OcniNiBase::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function OcniNiBase::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OcniNiBase::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool OcniNiBase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-instances")
        return true;
    return false;
}

OcniNiBase::NetworkInstances::NetworkInstances()
    :
    network_instance(this, {"name"})
{

    yang_name = "network-instances"; yang_parent_name = "ocni-ni-base"; is_top_level_class = false; has_list_ancestor = false; 
}

OcniNiBase::NetworkInstances::~NetworkInstances()
{
}

bool OcniNiBase::NetworkInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_data())
            return true;
    }
    return false;
}

bool OcniNiBase::NetworkInstances::has_operation() const
{
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniNiBase::NetworkInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-oper:ocni-ni-base/" << get_segment_path();
    return path_buffer.str();
}

std::string OcniNiBase::NetworkInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniNiBase::NetworkInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniNiBase::NetworkInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instance")
    {
        auto ent_ = std::make_shared<OcniNiBase::NetworkInstances::NetworkInstance>();
        ent_->parent = this;
        network_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniNiBase::NetworkInstances::get_children() const
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

void OcniNiBase::NetworkInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniNiBase::NetworkInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniNiBase::NetworkInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-instance")
        return true;
    return false;
}

OcniNiBase::NetworkInstances::NetworkInstance::NetworkInstance()
    :
    name{YType::str, "name"}
        ,
    state(std::make_shared<OcniNiBase::NetworkInstances::NetworkInstance::State>())
{
    state->parent = this;

    yang_name = "network-instance"; yang_parent_name = "network-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

OcniNiBase::NetworkInstances::NetworkInstance::~NetworkInstance()
{
}

bool OcniNiBase::NetworkInstances::NetworkInstance::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniNiBase::NetworkInstances::NetworkInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniNiBase::NetworkInstances::NetworkInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-oper:ocni-ni-base/network-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string OcniNiBase::NetworkInstances::NetworkInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-instance";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniNiBase::NetworkInstances::NetworkInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniNiBase::NetworkInstances::NetworkInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniNiBase::NetworkInstances::NetworkInstance::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniNiBase::NetworkInstances::NetworkInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void OcniNiBase::NetworkInstances::NetworkInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void OcniNiBase::NetworkInstances::NetworkInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool OcniNiBase::NetworkInstances::NetworkInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "name")
        return true;
    return false;
}

OcniNiBase::NetworkInstances::NetworkInstance::State::State()
    :
    name{YType::str, "name"},
    type{YType::str, "type"},
    enabled{YType::boolean, "enabled"},
    description{YType::str, "description"},
    enabled_address_family{YType::str, "enabled-address-family"}
{

    yang_name = "state"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniNiBase::NetworkInstances::NetworkInstance::State::~State()
{
}

bool OcniNiBase::NetworkInstances::NetworkInstance::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : enabled_address_family.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| type.is_set
	|| enabled.is_set
	|| description.is_set;
}

bool OcniNiBase::NetworkInstances::NetworkInstance::State::has_operation() const
{
    for (auto const & leaf : enabled_address_family.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(enabled_address_family.yfilter);
}

std::string OcniNiBase::NetworkInstances::NetworkInstance::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniNiBase::NetworkInstances::NetworkInstance::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    auto enabled_address_family_name_datas = enabled_address_family.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), enabled_address_family_name_datas.begin(), enabled_address_family_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcniNiBase::NetworkInstances::NetworkInstance::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcniNiBase::NetworkInstances::NetworkInstance::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcniNiBase::NetworkInstances::NetworkInstance::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-address-family")
    {
        enabled_address_family.append(value);
    }
}

void OcniNiBase::NetworkInstances::NetworkInstance::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "enabled-address-family")
    {
        enabled_address_family.yfilter = yfilter;
    }
}

bool OcniNiBase::NetworkInstances::NetworkInstance::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "enabled" || name == "description" || name == "enabled-address-family")
        return true;
    return false;
}


}
}

