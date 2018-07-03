
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ocni_intfbase_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ocni_intfbase_oper {

OcniNiIntfbase::OcniNiIntfbase()
    :
    network_instances(std::make_shared<OcniNiIntfbase::NetworkInstances>())
{
    network_instances->parent = this;

    yang_name = "ocni-ni-intfbase"; yang_parent_name = "Cisco-IOS-XR-ocni-intfbase-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

OcniNiIntfbase::~OcniNiIntfbase()
{
}

bool OcniNiIntfbase::has_data() const
{
    if (is_presence_container) return true;
    return (network_instances !=  nullptr && network_instances->has_data());
}

bool OcniNiIntfbase::has_operation() const
{
    return is_set(yfilter)
	|| (network_instances !=  nullptr && network_instances->has_operation());
}

std::string OcniNiIntfbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-intfbase-oper:ocni-ni-intfbase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniNiIntfbase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniNiIntfbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instances")
    {
        if(network_instances == nullptr)
        {
            network_instances = std::make_shared<OcniNiIntfbase::NetworkInstances>();
        }
        return network_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniNiIntfbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network_instances != nullptr)
    {
        children["network-instances"] = network_instances;
    }

    return children;
}

void OcniNiIntfbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniNiIntfbase::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> OcniNiIntfbase::clone_ptr() const
{
    return std::make_shared<OcniNiIntfbase>();
}

std::string OcniNiIntfbase::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string OcniNiIntfbase::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function OcniNiIntfbase::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OcniNiIntfbase::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool OcniNiIntfbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-instances")
        return true;
    return false;
}

OcniNiIntfbase::NetworkInstances::NetworkInstances()
    :
    network_instance(this, {"name"})
{

    yang_name = "network-instances"; yang_parent_name = "ocni-ni-intfbase"; is_top_level_class = false; has_list_ancestor = false; 
}

OcniNiIntfbase::NetworkInstances::~NetworkInstances()
{
}

bool OcniNiIntfbase::NetworkInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_data())
            return true;
    }
    return false;
}

bool OcniNiIntfbase::NetworkInstances::has_operation() const
{
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniNiIntfbase::NetworkInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-intfbase-oper:ocni-ni-intfbase/" << get_segment_path();
    return path_buffer.str();
}

std::string OcniNiIntfbase::NetworkInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniNiIntfbase::NetworkInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniNiIntfbase::NetworkInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instance")
    {
        auto c = std::make_shared<OcniNiIntfbase::NetworkInstances::NetworkInstance>();
        c->parent = this;
        network_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniNiIntfbase::NetworkInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : network_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniNiIntfbase::NetworkInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniNiIntfbase::NetworkInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniNiIntfbase::NetworkInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-instance")
        return true;
    return false;
}

OcniNiIntfbase::NetworkInstances::NetworkInstance::NetworkInstance()
    :
    name{YType::str, "name"}
        ,
    interfaces(std::make_shared<OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "network-instance"; yang_parent_name = "network-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

OcniNiIntfbase::NetworkInstances::NetworkInstance::~NetworkInstance()
{
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string OcniNiIntfbase::NetworkInstances::NetworkInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-intfbase-oper:ocni-ni-intfbase/network-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string OcniNiIntfbase::NetworkInstances::NetworkInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-instance";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniNiIntfbase::NetworkInstances::NetworkInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniNiIntfbase::NetworkInstances::NetworkInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniNiIntfbase::NetworkInstances::NetworkInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void OcniNiIntfbase::NetworkInstances::NetworkInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void OcniNiIntfbase::NetworkInstances::NetworkInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "name")
        return true;
    return false;
}

OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interfaces()
    :
    interface(this, {"id"})
{

    yang_name = "interfaces"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::~Interfaces()
{
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::Interface()
    :
    id{YType::str, "id"}
        ,
    state(std::make_shared<OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State>())
{
    state->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::~Interface()
{
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (state !=  nullptr && state->has_data());
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "id")
        return true;
    return false;
}

OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State::State()
    :
    id{YType::str, "id"},
    interface{YType::str, "interface"},
    subinterface{YType::uint32, "subinterface"},
    associated_address_family{YType::str, "associated-address-family"}
{

    yang_name = "state"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State::~State()
{
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : associated_address_family.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| interface.is_set
	|| subinterface.is_set;
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State::has_operation() const
{
    for (auto const & leaf : associated_address_family.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter)
	|| ydk::is_set(associated_address_family.yfilter);
}

std::string OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    auto associated_address_family_name_datas = associated_address_family.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), associated_address_family_name_datas.begin(), associated_address_family_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "associated-address-family")
    {
        associated_address_family.append(value);
    }
}

void OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
    if(value_path == "associated-address-family")
    {
        associated_address_family.yfilter = yfilter;
    }
}

bool OcniNiIntfbase::NetworkInstances::NetworkInstance::Interfaces::Interface::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "interface" || name == "subinterface" || name == "associated-address-family")
        return true;
    return false;
}


}
}

