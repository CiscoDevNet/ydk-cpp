
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_routing.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_routing {

AddressFamily::AddressFamily()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-routing", "ietf-routing", "ietf-routing:address-family")
{

}

AddressFamily::~AddressFamily()
{
}

RoutingInstance::RoutingInstance()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-routing", "ietf-routing", "ietf-routing:routing-instance")
{

}

RoutingInstance::~RoutingInstance()
{
}

RoutingProtocol::RoutingProtocol()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-routing", "ietf-routing", "ietf-routing:routing-protocol")
{

}

RoutingProtocol::~RoutingProtocol()
{
}

RoutingState::RoutingState()
{

    yang_name = "routing-state"; yang_parent_name = "ietf-routing"; is_top_level_class = true; has_list_ancestor = false;
}

RoutingState::~RoutingState()
{
}

bool RoutingState::has_data() const
{
    for (std::size_t index=0; index<routing_instance.size(); index++)
    {
        if(routing_instance[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingState::has_operation() const
{
    for (std::size_t index=0; index<routing_instance.size(); index++)
    {
        if(routing_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:routing-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routing-instance")
    {
        for(auto const & c : routing_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance>();
        c->parent = this;
        routing_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : routing_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RoutingState::clone_ptr() const
{
    return std::make_shared<RoutingState>();
}

std::string RoutingState::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string RoutingState::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function RoutingState::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RoutingState::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool RoutingState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routing-instance")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingInstance()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    router_id{YType::str, "router-id"}
    	,
    interfaces(std::make_shared<RoutingState::RoutingInstance::Interfaces>())
	,routing_protocols(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols>())
	,ribs(std::make_shared<RoutingState::RoutingInstance::Ribs>())
{
    interfaces->parent = this;
    routing_protocols->parent = this;
    ribs->parent = this;

    yang_name = "routing-instance"; yang_parent_name = "routing-state"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingState::RoutingInstance::~RoutingInstance()
{
}

bool RoutingState::RoutingInstance::has_data() const
{
    return name.is_set
	|| type.is_set
	|| router_id.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (routing_protocols !=  nullptr && routing_protocols->has_data())
	|| (ribs !=  nullptr && ribs->has_data());
}

bool RoutingState::RoutingInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (routing_protocols !=  nullptr && routing_protocols->has_operation())
	|| (ribs !=  nullptr && ribs->has_operation());
}

std::string RoutingState::RoutingInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:routing-state/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingState::RoutingInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-instance" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<RoutingState::RoutingInstance::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "routing-protocols")
    {
        if(routing_protocols == nullptr)
        {
            routing_protocols = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols>();
        }
        return routing_protocols;
    }

    if(child_yang_name == "ribs")
    {
        if(ribs == nullptr)
        {
            ribs = std::make_shared<RoutingState::RoutingInstance::Ribs>();
        }
        return ribs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(routing_protocols != nullptr)
    {
        children["routing-protocols"] = routing_protocols;
    }

    if(ribs != nullptr)
    {
        children["ribs"] = ribs;
    }

    return children;
}

void RoutingState::RoutingInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "routing-protocols" || name == "ribs" || name == "name" || name == "type" || name == "router-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::Interfaces::Interfaces()
    :
    interface{YType::str, "interface"}
{

    yang_name = "interfaces"; yang_parent_name = "routing-instance"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::Interfaces::~Interfaces()
{
}

bool RoutingState::RoutingInstance::Interfaces::has_data() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingState::RoutingInstance::Interfaces::has_operation() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string RoutingState::RoutingInstance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

void RoutingState::RoutingInstance::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocols()
{

    yang_name = "routing-protocols"; yang_parent_name = "routing-instance"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::~RoutingProtocols()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::has_data() const
{
    for (std::size_t index=0; index<routing_protocol.size(); index++)
    {
        if(routing_protocol[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingState::RoutingInstance::RoutingProtocols::has_operation() const
{
    for (std::size_t index=0; index<routing_protocol.size(); index++)
    {
        if(routing_protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routing-protocol")
    {
        for(auto const & c : routing_protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol>();
        c->parent = this;
        routing_protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : routing_protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routing-protocol")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::RoutingProtocol()
    :
    type{YType::identityref, "type"},
    name{YType::str, "name"}
    	,
    ospf(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf>())
{
    ospf->parent = this;

    yang_name = "routing-protocol"; yang_parent_name = "routing-protocols"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::~RoutingProtocol()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::has_data() const
{
    return type.is_set
	|| name.is_set
	|| (ospf !=  nullptr && ospf->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-protocol" <<"[type='" <<type <<"']" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf" || name == "type" || name == "name")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Ospf()
    :
    operation_mode{YType::identityref, "operation-mode"}
{

    yang_name = "ospf"; yang_parent_name = "routing-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::~Ospf()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return operation_mode.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(operation_mode.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ospf:ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_mode.is_set || is_set(operation_mode.yfilter)) leaf_name_data.push_back(operation_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-mode")
    {
        operation_mode = value;
        operation_mode.value_namespace = name_space;
        operation_mode.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-mode")
    {
        operation_mode.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "operation-mode")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Instance()
    :
    af{YType::identityref, "af"},
    router_id{YType::str, "router-id"}
{

    yang_name = "instance"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::~Instance()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<as_scope_lsas.size(); index++)
    {
        if(as_scope_lsas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return af.is_set
	|| router_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<as_scope_lsas.size(); index++)
    {
        if(as_scope_lsas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[af='" <<af <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "as-scope-lsas")
    {
        for(auto const & c : as_scope_lsas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas>();
        c->parent = this;
        as_scope_lsas.push_back(c);
        return c;
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : as_scope_lsas)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "as-scope-lsas" || name == "topology" || name == "af" || name == "router-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Area()
    :
    area_id{YType::str, "area-id"}
{

    yang_name = "area"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::~Area()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::has_data() const
{
    for (std::size_t index=0; index<interfaces.size(); index++)
    {
        if(interfaces[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area_scope_lsas.size(); index++)
    {
        if(area_scope_lsas[index]->has_data())
            return true;
    }
    return area_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::has_operation() const
{
    for (std::size_t index=0; index<interfaces.size(); index++)
    {
        if(interfaces[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area_scope_lsas.size(); index++)
    {
        if(area_scope_lsas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        for(auto const & c : interfaces)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces>();
        c->parent = this;
        interfaces.push_back(c);
        return c;
    }

    if(child_yang_name == "area-scope-lsas")
    {
        for(auto const & c : area_scope_lsas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas>();
        c->parent = this;
        area_scope_lsas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interfaces)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : area_scope_lsas)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "area-scope-lsas" || name == "area-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Interfaces()
    :
    interface{YType::str, "interface"},
    network_type{YType::enumeration, "network-type"},
    passive{YType::boolean, "passive"},
    demand_circuit{YType::boolean, "demand-circuit"},
    node_flag{YType::boolean, "node-flag"},
    cost{YType::uint16, "cost"},
    hello_interval{YType::uint16, "hello-interval"},
    dead_interval{YType::uint16, "dead-interval"},
    retransmit_interval{YType::uint16, "retransmit-interval"},
    transmit_delay{YType::uint16, "transmit-delay"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    lls{YType::boolean, "lls"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    bfd{YType::boolean, "bfd"},
    enable{YType::boolean, "enable"},
    state{YType::str, "state"},
    hello_timer{YType::uint32, "hello-timer"},
    wait_timer{YType::uint32, "wait-timer"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"}
    	,
    multi_area(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea>())
	,static_neighbors(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors>())
	,fast_reroute(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute>())
	,ttl_security(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity>())
	,authentication(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication>())
{
    multi_area->parent = this;
    static_neighbors->parent = this;
    fast_reroute->parent = this;
    ttl_security->parent = this;
    authentication->parent = this;

    yang_name = "interfaces"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::~Interfaces()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_scope_lsas.size(); index++)
    {
        if(link_scope_lsas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return interface.is_set
	|| network_type.is_set
	|| passive.is_set
	|| demand_circuit.is_set
	|| node_flag.is_set
	|| cost.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| mtu_ignore.is_set
	|| lls.is_set
	|| prefix_suppression.is_set
	|| bfd.is_set
	|| enable.is_set
	|| state.is_set
	|| hello_timer.is_set
	|| wait_timer.is_set
	|| dr.is_set
	|| bdr.is_set
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (static_neighbors !=  nullptr && static_neighbors->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_scope_lsas.size(); index++)
    {
        if(link_scope_lsas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(node_flag.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(lls.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(hello_timer.yfilter)
	|| ydk::is_set(wait_timer.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (static_neighbors !=  nullptr && static_neighbors->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (node_flag.is_set || is_set(node_flag.yfilter)) leaf_name_data.push_back(node_flag.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (lls.is_set || is_set(lls.yfilter)) leaf_name_data.push_back(lls.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (hello_timer.is_set || is_set(hello_timer.yfilter)) leaf_name_data.push_back(hello_timer.get_name_leafdata());
    if (wait_timer.is_set || is_set(wait_timer.yfilter)) leaf_name_data.push_back(wait_timer.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "static-neighbors")
    {
        if(static_neighbors == nullptr)
        {
            static_neighbors = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors>();
        }
        return static_neighbors;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "link-scope-lsas")
    {
        for(auto const & c : link_scope_lsas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas>();
        c->parent = this;
        link_scope_lsas.push_back(c);
        return c;
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    if(static_neighbors != nullptr)
    {
        children["static-neighbors"] = static_neighbors;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : link_scope_lsas)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-flag")
    {
        node_flag = value;
        node_flag.value_namespace = name_space;
        node_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lls")
    {
        lls = value;
        lls.value_namespace = name_space;
        lls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timer")
    {
        hello_timer = value;
        hello_timer.value_namespace = name_space;
        hello_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-timer")
    {
        wait_timer = value;
        wait_timer.value_namespace = name_space;
        wait_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "node-flag")
    {
        node_flag.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "lls")
    {
        lls.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "hello-timer")
    {
        hello_timer.yfilter = yfilter;
    }
    if(value_path == "wait-timer")
    {
        wait_timer.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-area" || name == "static-neighbors" || name == "fast-reroute" || name == "ttl-security" || name == "authentication" || name == "neighbor" || name == "link-scope-lsas" || name == "topology" || name == "interface" || name == "network-type" || name == "passive" || name == "demand-circuit" || name == "node-flag" || name == "cost" || name == "hello-interval" || name == "dead-interval" || name == "retransmit-interval" || name == "transmit-delay" || name == "mtu-ignore" || name == "lls" || name == "prefix-suppression" || name == "bfd" || name == "enable" || name == "state" || name == "hello-timer" || name == "wait-timer" || name == "dr" || name == "bdr")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::MultiArea()
    :
    multi_area_id{YType::str, "multi-area-id"},
    cost{YType::uint16, "cost"}
{

    yang_name = "multi-area"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::~MultiArea()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::has_data() const
{
    return multi_area_id.is_set
	|| cost.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_area_id.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_area_id.is_set || is_set(multi_area_id.yfilter)) leaf_name_data.push_back(multi_area_id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-area-id")
    {
        multi_area_id = value;
        multi_area_id.value_namespace = name_space;
        multi_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-area-id")
    {
        multi_area_id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-area-id" || name == "cost")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::StaticNeighbors()
{

    yang_name = "static-neighbors"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::~StaticNeighbors()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::Neighbor()
    :
    address{YType::str, "address"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint16, "poll-interval"},
    priority{YType::uint8, "priority"}
{

    yang_name = "neighbor"; yang_parent_name = "static-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::~Neighbor()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::has_data() const
{
    return address.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::FastReroute()
    :
    lfa(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa>())
{
    lfa->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::~FastReroute()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::has_data() const
{
    return (lfa !=  nullptr && lfa->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (lfa !=  nullptr && lfa->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa")
    {
        if(lfa == nullptr)
        {
            lfa = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa>();
        }
        return lfa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lfa != nullptr)
    {
        children["lfa"] = lfa;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::Lfa()
    :
    candidate_disabled{YType::boolean, "candidate-disabled"},
    enabled{YType::boolean, "enabled"}
    	,
    remote_lfa(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa>())
{
    remote_lfa->parent = this;

    yang_name = "lfa"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::~Lfa()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::has_data() const
{
    return candidate_disabled.is_set
	|| enabled.is_set
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate_disabled.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_disabled.is_set || is_set(candidate_disabled.yfilter)) leaf_name_data.push_back(candidate_disabled.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa>();
        }
        return remote_lfa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate-disabled")
    {
        candidate_disabled = value;
        candidate_disabled.value_namespace = name_space;
        candidate_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate-disabled")
    {
        candidate_disabled.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-lfa" || name == "candidate-disabled" || name == "enabled")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::RemoteLfa()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "remote-lfa"; yang_parent_name = "lfa"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::~RemoteLfa()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::has_data() const
{
    return enabled.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::TtlSecurity()
    :
    enable{YType::boolean, "enable"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::~TtlSecurity()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::has_data() const
{
    return enable.is_set
	|| hops.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "hops")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::Authentication()
    :
    sa{YType::str, "sa"},
    key_chain{YType::str, "key-chain"},
    key{YType::str, "key"}
    	,
    crypto_algorithm(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm>())
{
    crypto_algorithm->parent = this;

    yang_name = "authentication"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::~Authentication()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::has_data() const
{
    return sa.is_set
	|| key_chain.is_set
	|| key.is_set
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(key.yfilter)
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa.is_set || is_set(sa.yfilter)) leaf_name_data.push_back(sa.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crypto-algorithm")
    {
        if(crypto_algorithm == nullptr)
        {
            crypto_algorithm = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm>();
        }
        return crypto_algorithm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crypto_algorithm != nullptr)
    {
        children["crypto-algorithm"] = crypto_algorithm;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa")
    {
        sa = value;
        sa.value_namespace = name_space;
        sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa")
    {
        sa.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto-algorithm" || name == "sa" || name == "key-chain" || name == "key")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::CryptoAlgorithm()
    :
    hmac_sha1_12{YType::empty, "hmac-sha1-12"},
    hmac_sha1_20{YType::empty, "hmac-sha1-20"},
    md5{YType::empty, "md5"},
    sha_1{YType::empty, "sha-1"},
    hmac_sha_1{YType::empty, "hmac-sha-1"},
    hmac_sha_256{YType::empty, "hmac-sha-256"},
    hmac_sha_384{YType::empty, "hmac-sha-384"},
    hmac_sha_512{YType::empty, "hmac-sha-512"}
{

    yang_name = "crypto-algorithm"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::~CryptoAlgorithm()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::has_data() const
{
    return hmac_sha1_12.is_set
	|| hmac_sha1_20.is_set
	|| md5.is_set
	|| sha_1.is_set
	|| hmac_sha_1.is_set
	|| hmac_sha_256.is_set
	|| hmac_sha_384.is_set
	|| hmac_sha_512.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hmac_sha1_12.yfilter)
	|| ydk::is_set(hmac_sha1_20.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha_1.yfilter)
	|| ydk::is_set(hmac_sha_1.yfilter)
	|| ydk::is_set(hmac_sha_256.yfilter)
	|| ydk::is_set(hmac_sha_384.yfilter)
	|| ydk::is_set(hmac_sha_512.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha1_12.is_set || is_set(hmac_sha1_12.yfilter)) leaf_name_data.push_back(hmac_sha1_12.get_name_leafdata());
    if (hmac_sha1_20.is_set || is_set(hmac_sha1_20.yfilter)) leaf_name_data.push_back(hmac_sha1_20.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha_1.is_set || is_set(sha_1.yfilter)) leaf_name_data.push_back(sha_1.get_name_leafdata());
    if (hmac_sha_1.is_set || is_set(hmac_sha_1.yfilter)) leaf_name_data.push_back(hmac_sha_1.get_name_leafdata());
    if (hmac_sha_256.is_set || is_set(hmac_sha_256.yfilter)) leaf_name_data.push_back(hmac_sha_256.get_name_leafdata());
    if (hmac_sha_384.is_set || is_set(hmac_sha_384.yfilter)) leaf_name_data.push_back(hmac_sha_384.get_name_leafdata());
    if (hmac_sha_512.is_set || is_set(hmac_sha_512.yfilter)) leaf_name_data.push_back(hmac_sha_512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12 = value;
        hmac_sha1_12.value_namespace = name_space;
        hmac_sha1_12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20 = value;
        hmac_sha1_20.value_namespace = name_space;
        hmac_sha1_20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha-1")
    {
        sha_1 = value;
        sha_1.value_namespace = name_space;
        sha_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1 = value;
        hmac_sha_1.value_namespace = name_space;
        hmac_sha_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256 = value;
        hmac_sha_256.value_namespace = name_space;
        hmac_sha_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384 = value;
        hmac_sha_384.value_namespace = name_space;
        hmac_sha_384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512 = value;
        hmac_sha_512.value_namespace = name_space;
        hmac_sha_512.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12.yfilter = yfilter;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha-1")
    {
        sha_1.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha1-12" || name == "hmac-sha1-20" || name == "md5" || name == "sha-1" || name == "hmac-sha-1" || name == "hmac-sha-256" || name == "hmac-sha-384" || name == "hmac-sha-512")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"},
    address{YType::str, "address"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    state{YType::enumeration, "state"}
{

    yang_name = "neighbor"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::~Neighbor()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| address.is_set
	|| dr.is_set
	|| bdr.is_set
	|| state.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-id='" <<neighbor_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-id" || name == "address" || name == "dr" || name == "bdr" || name == "state")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsas()
    :
    lsa_type{YType::uint8, "lsa-type"}
{

    yang_name = "link-scope-lsas"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::~LinkScopeLsas()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::has_data() const
{
    for (std::size_t index=0; index<link_scope_lsa.size(); index++)
    {
        if(link_scope_lsa[index]->has_data())
            return true;
    }
    return lsa_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::has_operation() const
{
    for (std::size_t index=0; index<link_scope_lsa.size(); index++)
    {
        if(link_scope_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-scope-lsas" <<"[lsa-type='" <<lsa_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-scope-lsa")
    {
        for(auto const & c : link_scope_lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa>();
        c->parent = this;
        link_scope_lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_scope_lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-scope-lsa" || name == "lsa-type")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::LinkScopeLsa()
    :
    lsa_id{YType::str, "lsa-id"},
    adv_router{YType::str, "adv-router"},
    decoded_completed{YType::boolean, "decoded-completed"},
    raw_data{YType::str, "raw-data"}
    	,
    ospfv2(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2>())
	,ospfv3(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3>())
{
    ospfv2->parent = this;
    ospfv3->parent = this;

    yang_name = "link-scope-lsa"; yang_parent_name = "link-scope-lsas"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::~LinkScopeLsa()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::has_data() const
{
    return lsa_id.is_set
	|| adv_router.is_set
	|| decoded_completed.is_set
	|| raw_data.is_set
	|| (ospfv2 !=  nullptr && ospfv2->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(decoded_completed.yfilter)
	|| ydk::is_set(raw_data.yfilter)
	|| (ospfv2 !=  nullptr && ospfv2->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-scope-lsa" <<"[lsa-id='" <<lsa_id <<"']" <<"[adv-router='" <<adv_router <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (decoded_completed.is_set || is_set(decoded_completed.yfilter)) leaf_name_data.push_back(decoded_completed.get_name_leafdata());
    if (raw_data.is_set || is_set(raw_data.yfilter)) leaf_name_data.push_back(raw_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2")
    {
        if(ospfv2 == nullptr)
        {
            ospfv2 = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2>();
        }
        return ospfv2;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3>();
        }
        return ospfv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospfv2 != nullptr)
    {
        children["ospfv2"] = ospfv2;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed = value;
        decoded_completed.value_namespace = name_space;
        decoded_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-data")
    {
        raw_data = value;
        raw_data.value_namespace = name_space;
        raw_data.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed.yfilter = yfilter;
    }
    if(value_path == "raw-data")
    {
        raw_data.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2" || name == "ospfv3" || name == "lsa-id" || name == "adv-router" || name == "decoded-completed" || name == "raw-data")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Ospfv2()
    :
    header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header>())
	,body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body>())
{
    header->parent = this;
    body->parent = this;

    yang_name = "ospfv2"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::~Ospfv2()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (body !=  nullptr && body->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (body !=  nullptr && body->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header>();
        }
        return header;
    }

    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body>();
        }
        return body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(body != nullptr)
    {
        children["body"] = body;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "body")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::Header()
    :
    options{YType::bits, "options"},
    lsa_id{YType::str, "lsa-id"},
    opaque_type{YType::uint8, "opaque-type"},
    opaque_id{YType::uint32, "opaque-id"},
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::str, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"}
{

    yang_name = "header"; yang_parent_name = "ospfv2"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::has_data() const
{
    return options.is_set
	|| lsa_id.is_set
	|| opaque_type.is_set
	|| opaque_id.is_set
	|| age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(opaque_type.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (opaque_type.is_set || is_set(opaque_type.yfilter)) leaf_name_data.push_back(opaque_type.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-type")
    {
        opaque_type = value;
        opaque_type.value_namespace = name_space;
        opaque_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "opaque-type")
    {
        opaque_type.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "lsa-id" || name == "opaque-type" || name == "opaque-id" || name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Body()
    :
    router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network>())
	,summary(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary>())
	,external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External>())
	,opaque(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque>())
{
    router->parent = this;
    network->parent = this;
    summary->parent = this;
    external->parent = this;
    opaque->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv2"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::has_data() const
{
    return (router !=  nullptr && router->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (opaque !=  nullptr && opaque->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::has_operation() const
{
    return is_set(yfilter)
	|| (router !=  nullptr && router->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (opaque !=  nullptr && opaque->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router>();
        }
        return router;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External>();
        }
        return external;
    }

    if(child_yang_name == "opaque")
    {
        if(opaque == nullptr)
        {
            opaque = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque>();
        }
        return opaque;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(opaque != nullptr)
    {
        children["opaque"] = opaque;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router" || name == "network" || name == "summary" || name == "external" || name == "opaque")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    num_of_links{YType::uint16, "num-of-links"}
{

    yang_name = "router"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::~Router()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return flags.is_set
	|| num_of_links.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(num_of_links.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (num_of_links.is_set || is_set(num_of_links.yfilter)) leaf_name_data.push_back(num_of_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "num-of-links")
    {
        num_of_links = value;
        num_of_links.value_namespace = name_space;
        num_of_links.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "num-of-links")
    {
        num_of_links.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "flags" || name == "num-of-links")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Link()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    type{YType::uint8, "type"}
{

    yang_name = "link"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[link-id='" <<link_id <<"']" <<"[link-data='" <<link_data <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "link-id" || name == "link-data" || name == "type")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "topology"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::has_data() const
{
    return mt_id.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::Network()
    :
    network_mask{YType::str, "network-mask"},
    attached_router{YType::str, "attached-router"}
{

    yang_name = "network"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::~Network()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::has_data() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_mask.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter)
	|| ydk::is_set(attached_router.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-mask" || name == "attached-router")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Summary()
    :
    network_mask{YType::str, "network-mask"}
{

    yang_name = "summary"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::~Summary()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return network_mask.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "network-mask")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint32, "metric"}
{

    yang_name = "topology"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::has_data() const
{
    return mt_id.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::External()
    :
    network_mask{YType::str, "network-mask"}
{

    yang_name = "external"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::~External()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return network_mask.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "network-mask")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    flags{YType::bits, "flags"},
    metric{YType::uint32, "metric"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"}
{

    yang_name = "topology"; yang_parent_name = "external"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::has_data() const
{
    return mt_id.is_set
	|| flags.is_set
	|| metric.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "flags" || name == "metric" || name == "forwarding-address" || name == "external-route-tag")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::Opaque()
    :
    router_address_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>())
	,link_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv>())
{
    router_address_tlv->parent = this;
    link_tlv->parent = this;

    yang_name = "opaque"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::~Opaque()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::has_data() const
{
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_data())
            return true;
    }
    return (router_address_tlv !=  nullptr && router_address_tlv->has_data())
	|| (link_tlv !=  nullptr && link_tlv->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::has_operation() const
{
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (router_address_tlv !=  nullptr && router_address_tlv->has_operation())
	|| (link_tlv !=  nullptr && link_tlv->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-tlv")
    {
        for(auto const & c : unknown_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv>();
        c->parent = this;
        unknown_tlv.push_back(c);
        return c;
    }

    if(child_yang_name == "router-address-tlv")
    {
        if(router_address_tlv == nullptr)
        {
            router_address_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>();
        }
        return router_address_tlv;
    }

    if(child_yang_name == "link-tlv")
    {
        if(link_tlv == nullptr)
        {
            link_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv>();
        }
        return link_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    if(router_address_tlv != nullptr)
    {
        children["router-address-tlv"] = router_address_tlv;
    }

    if(link_tlv != nullptr)
    {
        children["link-tlv"] = link_tlv;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-tlv" || name == "router-address-tlv" || name == "link-tlv")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::UnknownTlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{

    yang_name = "unknown-tlv"; yang_parent_name = "opaque"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::~UnknownTlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::has_data() const
{
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::RouterAddressTlv()
    :
    router_address{YType::str, "router-address"}
{

    yang_name = "router-address-tlv"; yang_parent_name = "opaque"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::~RouterAddressTlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::has_data() const
{
    return router_address.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_address.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-address-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_address.is_set || is_set(router_address.yfilter)) leaf_name_data.push_back(router_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-address")
    {
        router_address = value;
        router_address.value_namespace = name_space;
        router_address.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-address")
    {
        router_address.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-address")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::LinkTlv()
    :
    link_type{YType::uint8, "link-type"},
    link_id{YType::str, "link-id"},
    local_if_ipv4_addr{YType::str, "local-if-ipv4-addr"},
    local_remote_ipv4_addr{YType::str, "local-remote-ipv4-addr"},
    te_metric{YType::uint32, "te-metric"},
    max_bandwidth{YType::str, "max-bandwidth"},
    max_reservable_bandwidth{YType::str, "max-reservable-bandwidth"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"},
    admin_group{YType::uint32, "admin-group"}
{

    yang_name = "link-tlv"; yang_parent_name = "opaque"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::~LinkTlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::has_data() const
{
    for (std::size_t index=0; index<unknown_subtlv.size(); index++)
    {
        if(unknown_subtlv[index]->has_data())
            return true;
    }
    for (auto const & leaf : local_if_ipv4_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_type.is_set
	|| link_id.is_set
	|| te_metric.is_set
	|| max_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| unreserved_bandwidth.is_set
	|| admin_group.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::has_operation() const
{
    for (std::size_t index=0; index<unknown_subtlv.size(); index++)
    {
        if(unknown_subtlv[index]->has_operation())
            return true;
    }
    for (auto const & leaf : local_if_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(local_if_ipv4_addr.yfilter)
	|| ydk::is_set(local_remote_ipv4_addr.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter)
	|| ydk::is_set(admin_group.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());
    if (admin_group.is_set || is_set(admin_group.yfilter)) leaf_name_data.push_back(admin_group.get_name_leafdata());

    auto local_if_ipv4_addr_name_datas = local_if_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_if_ipv4_addr_name_datas.begin(), local_if_ipv4_addr_name_datas.end());
    auto local_remote_ipv4_addr_name_datas = local_remote_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_remote_ipv4_addr_name_datas.begin(), local_remote_ipv4_addr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-subtlv")
    {
        for(auto const & c : unknown_subtlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv>();
        c->parent = this;
        unknown_subtlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_subtlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.append(value);
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.append(value);
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-group")
    {
        admin_group = value;
        admin_group.value_namespace = name_space;
        admin_group.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-subtlv" || name == "link-type" || name == "link-id" || name == "local-if-ipv4-addr" || name == "local-remote-ipv4-addr" || name == "te-metric" || name == "max-bandwidth" || name == "max-reservable-bandwidth" || name == "unreserved-bandwidth" || name == "admin-group")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::UnknownSubtlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{

    yang_name = "unknown-subtlv"; yang_parent_name = "link-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::~UnknownSubtlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::has_data() const
{
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-subtlv" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Ospfv3()
    :
    header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header>())
	,body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body>())
{
    header->parent = this;
    body->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::~Ospfv3()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (body !=  nullptr && body->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (body !=  nullptr && body->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header>();
        }
        return header;
    }

    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body>();
        }
        return body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(body != nullptr)
    {
        children["body"] = body;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "body")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::Header()
    :
    lsa_id{YType::uint32, "lsa-id"},
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::str, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    options{YType::bits, "options"}
{

    yang_name = "header"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::has_data() const
{
    return lsa_id.is_set
	|| age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set
	|| options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length" || name == "options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Body()
    :
    router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network>())
	,inter_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix>())
	,inter_area_router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter>())
	,as_external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal>())
	,nssa(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa>())
	,link(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link>())
	,intra_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix>())
{
    router->parent = this;
    network->parent = this;
    inter_area_prefix->parent = this;
    inter_area_router->parent = this;
    as_external->parent = this;
    nssa->parent = this;
    link->parent = this;
    intra_area_prefix->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::has_data() const
{
    return (router !=  nullptr && router->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_data())
	|| (inter_area_router !=  nullptr && inter_area_router->has_data())
	|| (as_external !=  nullptr && as_external->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::has_operation() const
{
    return is_set(yfilter)
	|| (router !=  nullptr && router->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_operation())
	|| (inter_area_router !=  nullptr && inter_area_router->has_operation())
	|| (as_external !=  nullptr && as_external->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router>();
        }
        return router;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "inter-area-prefix")
    {
        if(inter_area_prefix == nullptr)
        {
            inter_area_prefix = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix>();
        }
        return inter_area_prefix;
    }

    if(child_yang_name == "inter-area-router")
    {
        if(inter_area_router == nullptr)
        {
            inter_area_router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter>();
        }
        return inter_area_router;
    }

    if(child_yang_name == "as-external")
    {
        if(as_external == nullptr)
        {
            as_external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal>();
        }
        return as_external;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link>();
        }
        return link;
    }

    if(child_yang_name == "intra-area-prefix")
    {
        if(intra_area_prefix == nullptr)
        {
            intra_area_prefix = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix>();
        }
        return intra_area_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(inter_area_prefix != nullptr)
    {
        children["inter-area-prefix"] = inter_area_prefix;
    }

    if(inter_area_router != nullptr)
    {
        children["inter-area-router"] = inter_area_router;
    }

    if(as_external != nullptr)
    {
        children["as-external"] = as_external;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    if(intra_area_prefix != nullptr)
    {
        children["intra-area-prefix"] = intra_area_prefix;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router" || name == "network" || name == "inter-area-prefix" || name == "inter-area-router" || name == "as-external" || name == "nssa" || name == "link" || name == "intra-area-prefix")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    options{YType::bits, "options"}
{

    yang_name = "router"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::~Router()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return flags.is_set
	|| options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "flags" || name == "options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::Link()
    :
    interface_id{YType::uint32, "interface-id"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_router_id{YType::str, "neighbor-router-id"},
    type{YType::uint8, "type"},
    metric{YType::uint16, "metric"}
{

    yang_name = "link"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::has_data() const
{
    return interface_id.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_router_id.is_set
	|| type.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_router_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-id='" <<interface_id <<"']" <<"[neighbor-interface-id='" <<neighbor_interface_id <<"']" <<"[neighbor-router-id='" <<neighbor_router_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.yfilter)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
        neighbor_router_id.value_namespace = name_space;
        neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "neighbor-interface-id" || name == "neighbor-router-id" || name == "type" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::Network()
    :
    options{YType::bits, "options"},
    attached_router{YType::str, "attached-router"}
{

    yang_name = "network"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::~Network()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::has_data() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(attached_router.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "attached-router")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::InterAreaPrefix()
    :
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "inter-area-prefix"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::~InterAreaPrefix()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::has_data() const
{
    return metric.is_set
	|| prefix.is_set
	|| prefix_options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::InterAreaRouter()
    :
    options{YType::bits, "options"},
    metric{YType::uint32, "metric"},
    destination_router_id{YType::str, "destination-router-id"}
{

    yang_name = "inter-area-router"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::~InterAreaRouter()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::has_data() const
{
    return options.is_set
	|| metric.is_set
	|| destination_router_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination_router_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (destination_router_id.is_set || is_set(destination_router_id.yfilter)) leaf_name_data.push_back(destination_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id = value;
        destination_router_id.value_namespace = name_space;
        destination_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "metric" || name == "destination-router-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::AsExternal()
    :
    metric{YType::uint32, "metric"},
    flags{YType::bits, "flags"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
{

    yang_name = "as-external"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::~AsExternal()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::has_data() const
{
    return metric.is_set
	|| flags.is_set
	|| referenced_ls_type.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags" || name == "referenced-ls-type" || name == "prefix" || name == "prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::Nssa()
    :
    metric{YType::uint32, "metric"},
    flags{YType::bits, "flags"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
{

    yang_name = "nssa"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::~Nssa()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::has_data() const
{
    return metric.is_set
	|| flags.is_set
	|| referenced_ls_type.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags" || name == "referenced-ls-type" || name == "prefix" || name == "prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::Link()
    :
    rtr_priority{YType::uint8, "rtr-priority"},
    options{YType::bits, "options"},
    link_local_interface_address{YType::str, "link-local-interface-address"},
    num_of_prefixes{YType::uint32, "num-of-prefixes"}
{

    yang_name = "link"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return rtr_priority.is_set
	|| options.is_set
	|| link_local_interface_address.is_set
	|| num_of_prefixes.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rtr_priority.yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(link_local_interface_address.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_priority.is_set || is_set(rtr_priority.yfilter)) leaf_name_data.push_back(rtr_priority.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (link_local_interface_address.is_set || is_set(link_local_interface_address.yfilter)) leaf_name_data.push_back(link_local_interface_address.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority = value;
        rtr_priority.value_namespace = name_space;
        rtr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address = value;
        link_local_interface_address.value_namespace = name_space;
        link_local_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "rtr-priority" || name == "options" || name == "link-local-interface-address" || name == "num-of-prefixes")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "prefix-list"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::~PrefixList()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::has_data() const
{
    return prefix.is_set
	|| prefix_options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::IntraAreaPrefix()
    :
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_adv_router{YType::str, "referenced-adv-router"},
    num_of_prefixes{YType::uint16, "num-of-prefixes"}
{

    yang_name = "intra-area-prefix"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::~IntraAreaPrefix()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return referenced_ls_type.is_set
	|| referenced_link_state_id.is_set
	|| referenced_adv_router.is_set
	|| num_of_prefixes.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| ydk::is_set(referenced_adv_router.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_adv_router.is_set || is_set(referenced_adv_router.yfilter)) leaf_name_data.push_back(referenced_adv_router.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router = value;
        referenced_adv_router.value_namespace = name_space;
        referenced_adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "referenced-ls-type" || name == "referenced-link-state-id" || name == "referenced-adv-router" || name == "num-of-prefixes")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    metric{YType::uint32, "metric"}
{

    yang_name = "prefix-list"; yang_parent_name = "intra-area-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::~PrefixList()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_data() const
{
    return prefix.is_set
	|| prefix_options.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::Topology()
    :
    name{YType::str, "name"}
{

    yang_name = "topology"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::has_data() const
{
    return name.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsas()
    :
    lsa_type{YType::uint8, "lsa-type"}
{

    yang_name = "area-scope-lsas"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::~AreaScopeLsas()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::has_data() const
{
    for (std::size_t index=0; index<area_scope_lsa.size(); index++)
    {
        if(area_scope_lsa[index]->has_data())
            return true;
    }
    return lsa_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::has_operation() const
{
    for (std::size_t index=0; index<area_scope_lsa.size(); index++)
    {
        if(area_scope_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope-lsas" <<"[lsa-type='" <<lsa_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-scope-lsa")
    {
        for(auto const & c : area_scope_lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa>();
        c->parent = this;
        area_scope_lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_scope_lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-scope-lsa" || name == "lsa-type")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::AreaScopeLsa()
    :
    lsa_id{YType::str, "lsa-id"},
    adv_router{YType::str, "adv-router"},
    decoded_completed{YType::boolean, "decoded-completed"},
    raw_data{YType::str, "raw-data"}
    	,
    ospfv2(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2>())
	,ospfv3(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3>())
{
    ospfv2->parent = this;
    ospfv3->parent = this;

    yang_name = "area-scope-lsa"; yang_parent_name = "area-scope-lsas"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::~AreaScopeLsa()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::has_data() const
{
    return lsa_id.is_set
	|| adv_router.is_set
	|| decoded_completed.is_set
	|| raw_data.is_set
	|| (ospfv2 !=  nullptr && ospfv2->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(decoded_completed.yfilter)
	|| ydk::is_set(raw_data.yfilter)
	|| (ospfv2 !=  nullptr && ospfv2->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope-lsa" <<"[lsa-id='" <<lsa_id <<"']" <<"[adv-router='" <<adv_router <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (decoded_completed.is_set || is_set(decoded_completed.yfilter)) leaf_name_data.push_back(decoded_completed.get_name_leafdata());
    if (raw_data.is_set || is_set(raw_data.yfilter)) leaf_name_data.push_back(raw_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2")
    {
        if(ospfv2 == nullptr)
        {
            ospfv2 = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2>();
        }
        return ospfv2;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3>();
        }
        return ospfv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospfv2 != nullptr)
    {
        children["ospfv2"] = ospfv2;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed = value;
        decoded_completed.value_namespace = name_space;
        decoded_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-data")
    {
        raw_data = value;
        raw_data.value_namespace = name_space;
        raw_data.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed.yfilter = yfilter;
    }
    if(value_path == "raw-data")
    {
        raw_data.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2" || name == "ospfv3" || name == "lsa-id" || name == "adv-router" || name == "decoded-completed" || name == "raw-data")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Ospfv2()
    :
    header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header>())
	,body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body>())
{
    header->parent = this;
    body->parent = this;

    yang_name = "ospfv2"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::~Ospfv2()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (body !=  nullptr && body->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (body !=  nullptr && body->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header>();
        }
        return header;
    }

    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body>();
        }
        return body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(body != nullptr)
    {
        children["body"] = body;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "body")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::Header()
    :
    options{YType::bits, "options"},
    lsa_id{YType::str, "lsa-id"},
    opaque_type{YType::uint8, "opaque-type"},
    opaque_id{YType::uint32, "opaque-id"},
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::str, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"}
{

    yang_name = "header"; yang_parent_name = "ospfv2"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::has_data() const
{
    return options.is_set
	|| lsa_id.is_set
	|| opaque_type.is_set
	|| opaque_id.is_set
	|| age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(opaque_type.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (opaque_type.is_set || is_set(opaque_type.yfilter)) leaf_name_data.push_back(opaque_type.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-type")
    {
        opaque_type = value;
        opaque_type.value_namespace = name_space;
        opaque_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "opaque-type")
    {
        opaque_type.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "lsa-id" || name == "opaque-type" || name == "opaque-id" || name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Body()
    :
    router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network>())
	,summary(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary>())
	,external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External>())
	,opaque(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque>())
{
    router->parent = this;
    network->parent = this;
    summary->parent = this;
    external->parent = this;
    opaque->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv2"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::has_data() const
{
    return (router !=  nullptr && router->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (opaque !=  nullptr && opaque->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::has_operation() const
{
    return is_set(yfilter)
	|| (router !=  nullptr && router->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (opaque !=  nullptr && opaque->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router>();
        }
        return router;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External>();
        }
        return external;
    }

    if(child_yang_name == "opaque")
    {
        if(opaque == nullptr)
        {
            opaque = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque>();
        }
        return opaque;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(opaque != nullptr)
    {
        children["opaque"] = opaque;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router" || name == "network" || name == "summary" || name == "external" || name == "opaque")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    num_of_links{YType::uint16, "num-of-links"}
{

    yang_name = "router"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::~Router()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return flags.is_set
	|| num_of_links.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(num_of_links.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (num_of_links.is_set || is_set(num_of_links.yfilter)) leaf_name_data.push_back(num_of_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "num-of-links")
    {
        num_of_links = value;
        num_of_links.value_namespace = name_space;
        num_of_links.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "num-of-links")
    {
        num_of_links.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "flags" || name == "num-of-links")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Link()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    type{YType::uint8, "type"}
{

    yang_name = "link"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[link-id='" <<link_id <<"']" <<"[link-data='" <<link_data <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "link-id" || name == "link-data" || name == "type")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "topology"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::has_data() const
{
    return mt_id.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::Network()
    :
    network_mask{YType::str, "network-mask"},
    attached_router{YType::str, "attached-router"}
{

    yang_name = "network"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::~Network()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::has_data() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_mask.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter)
	|| ydk::is_set(attached_router.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-mask" || name == "attached-router")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Summary()
    :
    network_mask{YType::str, "network-mask"}
{

    yang_name = "summary"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::~Summary()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return network_mask.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "network-mask")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint32, "metric"}
{

    yang_name = "topology"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::has_data() const
{
    return mt_id.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::External()
    :
    network_mask{YType::str, "network-mask"}
{

    yang_name = "external"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::~External()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return network_mask.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "network-mask")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    flags{YType::bits, "flags"},
    metric{YType::uint32, "metric"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"}
{

    yang_name = "topology"; yang_parent_name = "external"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::has_data() const
{
    return mt_id.is_set
	|| flags.is_set
	|| metric.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "flags" || name == "metric" || name == "forwarding-address" || name == "external-route-tag")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::Opaque()
    :
    router_address_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>())
	,link_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv>())
{
    router_address_tlv->parent = this;
    link_tlv->parent = this;

    yang_name = "opaque"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::~Opaque()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::has_data() const
{
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_data())
            return true;
    }
    return (router_address_tlv !=  nullptr && router_address_tlv->has_data())
	|| (link_tlv !=  nullptr && link_tlv->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::has_operation() const
{
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (router_address_tlv !=  nullptr && router_address_tlv->has_operation())
	|| (link_tlv !=  nullptr && link_tlv->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-tlv")
    {
        for(auto const & c : unknown_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv>();
        c->parent = this;
        unknown_tlv.push_back(c);
        return c;
    }

    if(child_yang_name == "router-address-tlv")
    {
        if(router_address_tlv == nullptr)
        {
            router_address_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>();
        }
        return router_address_tlv;
    }

    if(child_yang_name == "link-tlv")
    {
        if(link_tlv == nullptr)
        {
            link_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv>();
        }
        return link_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    if(router_address_tlv != nullptr)
    {
        children["router-address-tlv"] = router_address_tlv;
    }

    if(link_tlv != nullptr)
    {
        children["link-tlv"] = link_tlv;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-tlv" || name == "router-address-tlv" || name == "link-tlv")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::UnknownTlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{

    yang_name = "unknown-tlv"; yang_parent_name = "opaque"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::~UnknownTlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::has_data() const
{
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::RouterAddressTlv()
    :
    router_address{YType::str, "router-address"}
{

    yang_name = "router-address-tlv"; yang_parent_name = "opaque"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::~RouterAddressTlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::has_data() const
{
    return router_address.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_address.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-address-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_address.is_set || is_set(router_address.yfilter)) leaf_name_data.push_back(router_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-address")
    {
        router_address = value;
        router_address.value_namespace = name_space;
        router_address.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-address")
    {
        router_address.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-address")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::LinkTlv()
    :
    link_type{YType::uint8, "link-type"},
    link_id{YType::str, "link-id"},
    local_if_ipv4_addr{YType::str, "local-if-ipv4-addr"},
    local_remote_ipv4_addr{YType::str, "local-remote-ipv4-addr"},
    te_metric{YType::uint32, "te-metric"},
    max_bandwidth{YType::str, "max-bandwidth"},
    max_reservable_bandwidth{YType::str, "max-reservable-bandwidth"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"},
    admin_group{YType::uint32, "admin-group"}
{

    yang_name = "link-tlv"; yang_parent_name = "opaque"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::~LinkTlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::has_data() const
{
    for (std::size_t index=0; index<unknown_subtlv.size(); index++)
    {
        if(unknown_subtlv[index]->has_data())
            return true;
    }
    for (auto const & leaf : local_if_ipv4_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_type.is_set
	|| link_id.is_set
	|| te_metric.is_set
	|| max_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| unreserved_bandwidth.is_set
	|| admin_group.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::has_operation() const
{
    for (std::size_t index=0; index<unknown_subtlv.size(); index++)
    {
        if(unknown_subtlv[index]->has_operation())
            return true;
    }
    for (auto const & leaf : local_if_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(local_if_ipv4_addr.yfilter)
	|| ydk::is_set(local_remote_ipv4_addr.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter)
	|| ydk::is_set(admin_group.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());
    if (admin_group.is_set || is_set(admin_group.yfilter)) leaf_name_data.push_back(admin_group.get_name_leafdata());

    auto local_if_ipv4_addr_name_datas = local_if_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_if_ipv4_addr_name_datas.begin(), local_if_ipv4_addr_name_datas.end());
    auto local_remote_ipv4_addr_name_datas = local_remote_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_remote_ipv4_addr_name_datas.begin(), local_remote_ipv4_addr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-subtlv")
    {
        for(auto const & c : unknown_subtlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv>();
        c->parent = this;
        unknown_subtlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_subtlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.append(value);
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.append(value);
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-group")
    {
        admin_group = value;
        admin_group.value_namespace = name_space;
        admin_group.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-subtlv" || name == "link-type" || name == "link-id" || name == "local-if-ipv4-addr" || name == "local-remote-ipv4-addr" || name == "te-metric" || name == "max-bandwidth" || name == "max-reservable-bandwidth" || name == "unreserved-bandwidth" || name == "admin-group")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::UnknownSubtlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{

    yang_name = "unknown-subtlv"; yang_parent_name = "link-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::~UnknownSubtlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::has_data() const
{
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-subtlv" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Ospfv3()
    :
    header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header>())
	,body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body>())
{
    header->parent = this;
    body->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::~Ospfv3()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (body !=  nullptr && body->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (body !=  nullptr && body->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header>();
        }
        return header;
    }

    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body>();
        }
        return body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(body != nullptr)
    {
        children["body"] = body;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "body")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::Header()
    :
    lsa_id{YType::uint32, "lsa-id"},
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::str, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    options{YType::bits, "options"}
{

    yang_name = "header"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::has_data() const
{
    return lsa_id.is_set
	|| age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set
	|| options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length" || name == "options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Body()
    :
    router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network>())
	,inter_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix>())
	,inter_area_router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter>())
	,as_external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal>())
	,nssa(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa>())
	,link(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link>())
	,intra_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix>())
{
    router->parent = this;
    network->parent = this;
    inter_area_prefix->parent = this;
    inter_area_router->parent = this;
    as_external->parent = this;
    nssa->parent = this;
    link->parent = this;
    intra_area_prefix->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::has_data() const
{
    return (router !=  nullptr && router->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_data())
	|| (inter_area_router !=  nullptr && inter_area_router->has_data())
	|| (as_external !=  nullptr && as_external->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::has_operation() const
{
    return is_set(yfilter)
	|| (router !=  nullptr && router->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_operation())
	|| (inter_area_router !=  nullptr && inter_area_router->has_operation())
	|| (as_external !=  nullptr && as_external->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router>();
        }
        return router;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "inter-area-prefix")
    {
        if(inter_area_prefix == nullptr)
        {
            inter_area_prefix = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix>();
        }
        return inter_area_prefix;
    }

    if(child_yang_name == "inter-area-router")
    {
        if(inter_area_router == nullptr)
        {
            inter_area_router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter>();
        }
        return inter_area_router;
    }

    if(child_yang_name == "as-external")
    {
        if(as_external == nullptr)
        {
            as_external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal>();
        }
        return as_external;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link>();
        }
        return link;
    }

    if(child_yang_name == "intra-area-prefix")
    {
        if(intra_area_prefix == nullptr)
        {
            intra_area_prefix = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix>();
        }
        return intra_area_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(inter_area_prefix != nullptr)
    {
        children["inter-area-prefix"] = inter_area_prefix;
    }

    if(inter_area_router != nullptr)
    {
        children["inter-area-router"] = inter_area_router;
    }

    if(as_external != nullptr)
    {
        children["as-external"] = as_external;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    if(intra_area_prefix != nullptr)
    {
        children["intra-area-prefix"] = intra_area_prefix;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router" || name == "network" || name == "inter-area-prefix" || name == "inter-area-router" || name == "as-external" || name == "nssa" || name == "link" || name == "intra-area-prefix")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    options{YType::bits, "options"}
{

    yang_name = "router"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::~Router()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return flags.is_set
	|| options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "flags" || name == "options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::Link()
    :
    interface_id{YType::uint32, "interface-id"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_router_id{YType::str, "neighbor-router-id"},
    type{YType::uint8, "type"},
    metric{YType::uint16, "metric"}
{

    yang_name = "link"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::has_data() const
{
    return interface_id.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_router_id.is_set
	|| type.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_router_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-id='" <<interface_id <<"']" <<"[neighbor-interface-id='" <<neighbor_interface_id <<"']" <<"[neighbor-router-id='" <<neighbor_router_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.yfilter)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
        neighbor_router_id.value_namespace = name_space;
        neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "neighbor-interface-id" || name == "neighbor-router-id" || name == "type" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::Network()
    :
    options{YType::bits, "options"},
    attached_router{YType::str, "attached-router"}
{

    yang_name = "network"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::~Network()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::has_data() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(attached_router.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "attached-router")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::InterAreaPrefix()
    :
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "inter-area-prefix"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::~InterAreaPrefix()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::has_data() const
{
    return metric.is_set
	|| prefix.is_set
	|| prefix_options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::InterAreaRouter()
    :
    options{YType::bits, "options"},
    metric{YType::uint32, "metric"},
    destination_router_id{YType::str, "destination-router-id"}
{

    yang_name = "inter-area-router"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::~InterAreaRouter()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::has_data() const
{
    return options.is_set
	|| metric.is_set
	|| destination_router_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination_router_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (destination_router_id.is_set || is_set(destination_router_id.yfilter)) leaf_name_data.push_back(destination_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id = value;
        destination_router_id.value_namespace = name_space;
        destination_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "metric" || name == "destination-router-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::AsExternal()
    :
    metric{YType::uint32, "metric"},
    flags{YType::bits, "flags"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
{

    yang_name = "as-external"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::~AsExternal()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::has_data() const
{
    return metric.is_set
	|| flags.is_set
	|| referenced_ls_type.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags" || name == "referenced-ls-type" || name == "prefix" || name == "prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::Nssa()
    :
    metric{YType::uint32, "metric"},
    flags{YType::bits, "flags"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
{

    yang_name = "nssa"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::~Nssa()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::has_data() const
{
    return metric.is_set
	|| flags.is_set
	|| referenced_ls_type.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags" || name == "referenced-ls-type" || name == "prefix" || name == "prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::Link()
    :
    rtr_priority{YType::uint8, "rtr-priority"},
    options{YType::bits, "options"},
    link_local_interface_address{YType::str, "link-local-interface-address"},
    num_of_prefixes{YType::uint32, "num-of-prefixes"}
{

    yang_name = "link"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return rtr_priority.is_set
	|| options.is_set
	|| link_local_interface_address.is_set
	|| num_of_prefixes.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rtr_priority.yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(link_local_interface_address.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_priority.is_set || is_set(rtr_priority.yfilter)) leaf_name_data.push_back(rtr_priority.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (link_local_interface_address.is_set || is_set(link_local_interface_address.yfilter)) leaf_name_data.push_back(link_local_interface_address.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority = value;
        rtr_priority.value_namespace = name_space;
        rtr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address = value;
        link_local_interface_address.value_namespace = name_space;
        link_local_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "rtr-priority" || name == "options" || name == "link-local-interface-address" || name == "num-of-prefixes")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "prefix-list"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::~PrefixList()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::has_data() const
{
    return prefix.is_set
	|| prefix_options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::IntraAreaPrefix()
    :
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_adv_router{YType::str, "referenced-adv-router"},
    num_of_prefixes{YType::uint16, "num-of-prefixes"}
{

    yang_name = "intra-area-prefix"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::~IntraAreaPrefix()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return referenced_ls_type.is_set
	|| referenced_link_state_id.is_set
	|| referenced_adv_router.is_set
	|| num_of_prefixes.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| ydk::is_set(referenced_adv_router.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_adv_router.is_set || is_set(referenced_adv_router.yfilter)) leaf_name_data.push_back(referenced_adv_router.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router = value;
        referenced_adv_router.value_namespace = name_space;
        referenced_adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "referenced-ls-type" || name == "referenced-link-state-id" || name == "referenced-adv-router" || name == "num-of-prefixes")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    metric{YType::uint32, "metric"}
{

    yang_name = "prefix-list"; yang_parent_name = "intra-area-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::~PrefixList()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_data() const
{
    return prefix.is_set
	|| prefix_options.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsas()
    :
    lsa_type{YType::uint8, "lsa-type"}
{

    yang_name = "as-scope-lsas"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::~AsScopeLsas()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::has_data() const
{
    for (std::size_t index=0; index<as_scope_lsa.size(); index++)
    {
        if(as_scope_lsa[index]->has_data())
            return true;
    }
    return lsa_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::has_operation() const
{
    for (std::size_t index=0; index<as_scope_lsa.size(); index++)
    {
        if(as_scope_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-scope-lsas" <<"[lsa-type='" <<lsa_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-scope-lsa")
    {
        for(auto const & c : as_scope_lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa>();
        c->parent = this;
        as_scope_lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as_scope_lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-scope-lsa" || name == "lsa-type")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::AsScopeLsa()
    :
    lsa_id{YType::str, "lsa-id"},
    adv_router{YType::str, "adv-router"},
    decoded_completed{YType::boolean, "decoded-completed"},
    raw_data{YType::str, "raw-data"}
    	,
    ospfv2(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2>())
	,ospfv3(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3>())
{
    ospfv2->parent = this;
    ospfv3->parent = this;

    yang_name = "as-scope-lsa"; yang_parent_name = "as-scope-lsas"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::~AsScopeLsa()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::has_data() const
{
    return lsa_id.is_set
	|| adv_router.is_set
	|| decoded_completed.is_set
	|| raw_data.is_set
	|| (ospfv2 !=  nullptr && ospfv2->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(decoded_completed.yfilter)
	|| ydk::is_set(raw_data.yfilter)
	|| (ospfv2 !=  nullptr && ospfv2->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-scope-lsa" <<"[lsa-id='" <<lsa_id <<"']" <<"[adv-router='" <<adv_router <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (decoded_completed.is_set || is_set(decoded_completed.yfilter)) leaf_name_data.push_back(decoded_completed.get_name_leafdata());
    if (raw_data.is_set || is_set(raw_data.yfilter)) leaf_name_data.push_back(raw_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2")
    {
        if(ospfv2 == nullptr)
        {
            ospfv2 = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2>();
        }
        return ospfv2;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3>();
        }
        return ospfv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospfv2 != nullptr)
    {
        children["ospfv2"] = ospfv2;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed = value;
        decoded_completed.value_namespace = name_space;
        decoded_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-data")
    {
        raw_data = value;
        raw_data.value_namespace = name_space;
        raw_data.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed.yfilter = yfilter;
    }
    if(value_path == "raw-data")
    {
        raw_data.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2" || name == "ospfv3" || name == "lsa-id" || name == "adv-router" || name == "decoded-completed" || name == "raw-data")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Ospfv2()
    :
    header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header>())
	,body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body>())
{
    header->parent = this;
    body->parent = this;

    yang_name = "ospfv2"; yang_parent_name = "as-scope-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::~Ospfv2()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (body !=  nullptr && body->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (body !=  nullptr && body->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header>();
        }
        return header;
    }

    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body>();
        }
        return body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(body != nullptr)
    {
        children["body"] = body;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "body")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::Header()
    :
    options{YType::bits, "options"},
    lsa_id{YType::str, "lsa-id"},
    opaque_type{YType::uint8, "opaque-type"},
    opaque_id{YType::uint32, "opaque-id"},
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::str, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"}
{

    yang_name = "header"; yang_parent_name = "ospfv2"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::has_data() const
{
    return options.is_set
	|| lsa_id.is_set
	|| opaque_type.is_set
	|| opaque_id.is_set
	|| age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(opaque_type.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (opaque_type.is_set || is_set(opaque_type.yfilter)) leaf_name_data.push_back(opaque_type.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-type")
    {
        opaque_type = value;
        opaque_type.value_namespace = name_space;
        opaque_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "opaque-type")
    {
        opaque_type.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "lsa-id" || name == "opaque-type" || name == "opaque-id" || name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Body()
    :
    router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network>())
	,summary(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary>())
	,external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External>())
	,opaque(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque>())
{
    router->parent = this;
    network->parent = this;
    summary->parent = this;
    external->parent = this;
    opaque->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv2"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::has_data() const
{
    return (router !=  nullptr && router->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (opaque !=  nullptr && opaque->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::has_operation() const
{
    return is_set(yfilter)
	|| (router !=  nullptr && router->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (opaque !=  nullptr && opaque->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router>();
        }
        return router;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External>();
        }
        return external;
    }

    if(child_yang_name == "opaque")
    {
        if(opaque == nullptr)
        {
            opaque = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque>();
        }
        return opaque;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(opaque != nullptr)
    {
        children["opaque"] = opaque;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router" || name == "network" || name == "summary" || name == "external" || name == "opaque")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    num_of_links{YType::uint16, "num-of-links"}
{

    yang_name = "router"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::~Router()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return flags.is_set
	|| num_of_links.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(num_of_links.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (num_of_links.is_set || is_set(num_of_links.yfilter)) leaf_name_data.push_back(num_of_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "num-of-links")
    {
        num_of_links = value;
        num_of_links.value_namespace = name_space;
        num_of_links.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "num-of-links")
    {
        num_of_links.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "flags" || name == "num-of-links")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Link()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    type{YType::uint8, "type"}
{

    yang_name = "link"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[link-id='" <<link_id <<"']" <<"[link-data='" <<link_data <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "link-id" || name == "link-data" || name == "type")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "topology"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::has_data() const
{
    return mt_id.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::Network()
    :
    network_mask{YType::str, "network-mask"},
    attached_router{YType::str, "attached-router"}
{

    yang_name = "network"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::~Network()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::has_data() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_mask.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter)
	|| ydk::is_set(attached_router.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-mask" || name == "attached-router")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Summary()
    :
    network_mask{YType::str, "network-mask"}
{

    yang_name = "summary"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::~Summary()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return network_mask.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "network-mask")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint32, "metric"}
{

    yang_name = "topology"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::has_data() const
{
    return mt_id.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::External()
    :
    network_mask{YType::str, "network-mask"}
{

    yang_name = "external"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::~External()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return network_mask.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "network-mask")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    flags{YType::bits, "flags"},
    metric{YType::uint32, "metric"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"}
{

    yang_name = "topology"; yang_parent_name = "external"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::has_data() const
{
    return mt_id.is_set
	|| flags.is_set
	|| metric.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "flags" || name == "metric" || name == "forwarding-address" || name == "external-route-tag")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::Opaque()
    :
    router_address_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>())
	,link_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv>())
{
    router_address_tlv->parent = this;
    link_tlv->parent = this;

    yang_name = "opaque"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::~Opaque()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::has_data() const
{
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_data())
            return true;
    }
    return (router_address_tlv !=  nullptr && router_address_tlv->has_data())
	|| (link_tlv !=  nullptr && link_tlv->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::has_operation() const
{
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (router_address_tlv !=  nullptr && router_address_tlv->has_operation())
	|| (link_tlv !=  nullptr && link_tlv->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-tlv")
    {
        for(auto const & c : unknown_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv>();
        c->parent = this;
        unknown_tlv.push_back(c);
        return c;
    }

    if(child_yang_name == "router-address-tlv")
    {
        if(router_address_tlv == nullptr)
        {
            router_address_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>();
        }
        return router_address_tlv;
    }

    if(child_yang_name == "link-tlv")
    {
        if(link_tlv == nullptr)
        {
            link_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv>();
        }
        return link_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    if(router_address_tlv != nullptr)
    {
        children["router-address-tlv"] = router_address_tlv;
    }

    if(link_tlv != nullptr)
    {
        children["link-tlv"] = link_tlv;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-tlv" || name == "router-address-tlv" || name == "link-tlv")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::UnknownTlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{

    yang_name = "unknown-tlv"; yang_parent_name = "opaque"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::~UnknownTlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::has_data() const
{
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::RouterAddressTlv()
    :
    router_address{YType::str, "router-address"}
{

    yang_name = "router-address-tlv"; yang_parent_name = "opaque"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::~RouterAddressTlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::has_data() const
{
    return router_address.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_address.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-address-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_address.is_set || is_set(router_address.yfilter)) leaf_name_data.push_back(router_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-address")
    {
        router_address = value;
        router_address.value_namespace = name_space;
        router_address.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-address")
    {
        router_address.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-address")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::LinkTlv()
    :
    link_type{YType::uint8, "link-type"},
    link_id{YType::str, "link-id"},
    local_if_ipv4_addr{YType::str, "local-if-ipv4-addr"},
    local_remote_ipv4_addr{YType::str, "local-remote-ipv4-addr"},
    te_metric{YType::uint32, "te-metric"},
    max_bandwidth{YType::str, "max-bandwidth"},
    max_reservable_bandwidth{YType::str, "max-reservable-bandwidth"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"},
    admin_group{YType::uint32, "admin-group"}
{

    yang_name = "link-tlv"; yang_parent_name = "opaque"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::~LinkTlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::has_data() const
{
    for (std::size_t index=0; index<unknown_subtlv.size(); index++)
    {
        if(unknown_subtlv[index]->has_data())
            return true;
    }
    for (auto const & leaf : local_if_ipv4_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_type.is_set
	|| link_id.is_set
	|| te_metric.is_set
	|| max_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| unreserved_bandwidth.is_set
	|| admin_group.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::has_operation() const
{
    for (std::size_t index=0; index<unknown_subtlv.size(); index++)
    {
        if(unknown_subtlv[index]->has_operation())
            return true;
    }
    for (auto const & leaf : local_if_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(local_if_ipv4_addr.yfilter)
	|| ydk::is_set(local_remote_ipv4_addr.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter)
	|| ydk::is_set(admin_group.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());
    if (admin_group.is_set || is_set(admin_group.yfilter)) leaf_name_data.push_back(admin_group.get_name_leafdata());

    auto local_if_ipv4_addr_name_datas = local_if_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_if_ipv4_addr_name_datas.begin(), local_if_ipv4_addr_name_datas.end());
    auto local_remote_ipv4_addr_name_datas = local_remote_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_remote_ipv4_addr_name_datas.begin(), local_remote_ipv4_addr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-subtlv")
    {
        for(auto const & c : unknown_subtlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv>();
        c->parent = this;
        unknown_subtlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_subtlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.append(value);
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.append(value);
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-group")
    {
        admin_group = value;
        admin_group.value_namespace = name_space;
        admin_group.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-subtlv" || name == "link-type" || name == "link-id" || name == "local-if-ipv4-addr" || name == "local-remote-ipv4-addr" || name == "te-metric" || name == "max-bandwidth" || name == "max-reservable-bandwidth" || name == "unreserved-bandwidth" || name == "admin-group")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::UnknownSubtlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{

    yang_name = "unknown-subtlv"; yang_parent_name = "link-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::~UnknownSubtlv()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::has_data() const
{
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-subtlv" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Ospfv3()
    :
    header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header>())
	,body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body>())
{
    header->parent = this;
    body->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "as-scope-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::~Ospfv3()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (body !=  nullptr && body->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (body !=  nullptr && body->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header>();
        }
        return header;
    }

    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body>();
        }
        return body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(body != nullptr)
    {
        children["body"] = body;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "body")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::Header()
    :
    lsa_id{YType::uint32, "lsa-id"},
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::str, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    options{YType::bits, "options"}
{

    yang_name = "header"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::has_data() const
{
    return lsa_id.is_set
	|| age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set
	|| options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length" || name == "options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Body()
    :
    router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network>())
	,inter_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix>())
	,inter_area_router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter>())
	,as_external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal>())
	,nssa(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa>())
	,link(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link>())
	,intra_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix>())
{
    router->parent = this;
    network->parent = this;
    inter_area_prefix->parent = this;
    inter_area_router->parent = this;
    as_external->parent = this;
    nssa->parent = this;
    link->parent = this;
    intra_area_prefix->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::has_data() const
{
    return (router !=  nullptr && router->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_data())
	|| (inter_area_router !=  nullptr && inter_area_router->has_data())
	|| (as_external !=  nullptr && as_external->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::has_operation() const
{
    return is_set(yfilter)
	|| (router !=  nullptr && router->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_operation())
	|| (inter_area_router !=  nullptr && inter_area_router->has_operation())
	|| (as_external !=  nullptr && as_external->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router>();
        }
        return router;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "inter-area-prefix")
    {
        if(inter_area_prefix == nullptr)
        {
            inter_area_prefix = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix>();
        }
        return inter_area_prefix;
    }

    if(child_yang_name == "inter-area-router")
    {
        if(inter_area_router == nullptr)
        {
            inter_area_router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter>();
        }
        return inter_area_router;
    }

    if(child_yang_name == "as-external")
    {
        if(as_external == nullptr)
        {
            as_external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal>();
        }
        return as_external;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link>();
        }
        return link;
    }

    if(child_yang_name == "intra-area-prefix")
    {
        if(intra_area_prefix == nullptr)
        {
            intra_area_prefix = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix>();
        }
        return intra_area_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(inter_area_prefix != nullptr)
    {
        children["inter-area-prefix"] = inter_area_prefix;
    }

    if(inter_area_router != nullptr)
    {
        children["inter-area-router"] = inter_area_router;
    }

    if(as_external != nullptr)
    {
        children["as-external"] = as_external;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    if(intra_area_prefix != nullptr)
    {
        children["intra-area-prefix"] = intra_area_prefix;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router" || name == "network" || name == "inter-area-prefix" || name == "inter-area-router" || name == "as-external" || name == "nssa" || name == "link" || name == "intra-area-prefix")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    options{YType::bits, "options"}
{

    yang_name = "router"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::~Router()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return flags.is_set
	|| options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "flags" || name == "options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::Link()
    :
    interface_id{YType::uint32, "interface-id"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_router_id{YType::str, "neighbor-router-id"},
    type{YType::uint8, "type"},
    metric{YType::uint16, "metric"}
{

    yang_name = "link"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::has_data() const
{
    return interface_id.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_router_id.is_set
	|| type.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_router_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-id='" <<interface_id <<"']" <<"[neighbor-interface-id='" <<neighbor_interface_id <<"']" <<"[neighbor-router-id='" <<neighbor_router_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.yfilter)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
        neighbor_router_id.value_namespace = name_space;
        neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "neighbor-interface-id" || name == "neighbor-router-id" || name == "type" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::Network()
    :
    options{YType::bits, "options"},
    attached_router{YType::str, "attached-router"}
{

    yang_name = "network"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::~Network()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::has_data() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(attached_router.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "attached-router")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::InterAreaPrefix()
    :
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "inter-area-prefix"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::~InterAreaPrefix()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::has_data() const
{
    return metric.is_set
	|| prefix.is_set
	|| prefix_options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::InterAreaRouter()
    :
    options{YType::bits, "options"},
    metric{YType::uint32, "metric"},
    destination_router_id{YType::str, "destination-router-id"}
{

    yang_name = "inter-area-router"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::~InterAreaRouter()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::has_data() const
{
    return options.is_set
	|| metric.is_set
	|| destination_router_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination_router_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (destination_router_id.is_set || is_set(destination_router_id.yfilter)) leaf_name_data.push_back(destination_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id = value;
        destination_router_id.value_namespace = name_space;
        destination_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "metric" || name == "destination-router-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::AsExternal()
    :
    metric{YType::uint32, "metric"},
    flags{YType::bits, "flags"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
{

    yang_name = "as-external"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::~AsExternal()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::has_data() const
{
    return metric.is_set
	|| flags.is_set
	|| referenced_ls_type.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags" || name == "referenced-ls-type" || name == "prefix" || name == "prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::Nssa()
    :
    metric{YType::uint32, "metric"},
    flags{YType::bits, "flags"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
{

    yang_name = "nssa"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::~Nssa()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::has_data() const
{
    return metric.is_set
	|| flags.is_set
	|| referenced_ls_type.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags" || name == "referenced-ls-type" || name == "prefix" || name == "prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::Link()
    :
    rtr_priority{YType::uint8, "rtr-priority"},
    options{YType::bits, "options"},
    link_local_interface_address{YType::str, "link-local-interface-address"},
    num_of_prefixes{YType::uint32, "num-of-prefixes"}
{

    yang_name = "link"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return rtr_priority.is_set
	|| options.is_set
	|| link_local_interface_address.is_set
	|| num_of_prefixes.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rtr_priority.yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(link_local_interface_address.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_priority.is_set || is_set(rtr_priority.yfilter)) leaf_name_data.push_back(rtr_priority.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (link_local_interface_address.is_set || is_set(link_local_interface_address.yfilter)) leaf_name_data.push_back(link_local_interface_address.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority = value;
        rtr_priority.value_namespace = name_space;
        rtr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address = value;
        link_local_interface_address.value_namespace = name_space;
        link_local_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "rtr-priority" || name == "options" || name == "link-local-interface-address" || name == "num-of-prefixes")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "prefix-list"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::~PrefixList()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::has_data() const
{
    return prefix.is_set
	|| prefix_options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::IntraAreaPrefix()
    :
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_adv_router{YType::str, "referenced-adv-router"},
    num_of_prefixes{YType::uint16, "num-of-prefixes"}
{

    yang_name = "intra-area-prefix"; yang_parent_name = "body"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::~IntraAreaPrefix()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return referenced_ls_type.is_set
	|| referenced_link_state_id.is_set
	|| referenced_adv_router.is_set
	|| num_of_prefixes.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| ydk::is_set(referenced_adv_router.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_adv_router.is_set || is_set(referenced_adv_router.yfilter)) leaf_name_data.push_back(referenced_adv_router.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router = value;
        referenced_adv_router.value_namespace = name_space;
        referenced_adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "referenced-ls-type" || name == "referenced-link-state-id" || name == "referenced-adv-router" || name == "num-of-prefixes")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    metric{YType::uint32, "metric"}
{

    yang_name = "prefix-list"; yang_parent_name = "intra-area-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::~PrefixList()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_data() const
{
    return prefix.is_set
	|| prefix_options.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options" || name == "metric")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Topology()
    :
    name{YType::str, "name"}
{

    yang_name = "topology"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "name")
        return true;
    return false;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Area()
    :
    area_id{YType::str, "area-id"}
{

    yang_name = "area"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::~Area()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::has_data() const
{
    return area_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id")
        return true;
    return false;
}

RoutingState::RoutingInstance::Ribs::Ribs()
{

    yang_name = "ribs"; yang_parent_name = "routing-instance"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::Ribs::~Ribs()
{
}

bool RoutingState::RoutingInstance::Ribs::has_data() const
{
    for (std::size_t index=0; index<rib.size(); index++)
    {
        if(rib[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingState::RoutingInstance::Ribs::has_operation() const
{
    for (std::size_t index=0; index<rib.size(); index++)
    {
        if(rib[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingState::RoutingInstance::Ribs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::Ribs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::Ribs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib")
    {
        for(auto const & c : rib)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::Ribs::Rib>();
        c->parent = this;
        rib.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::Ribs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rib)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::Ribs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::Ribs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::Ribs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib")
        return true;
    return false;
}

RoutingState::RoutingInstance::Ribs::Rib::Rib()
    :
    name{YType::str, "name"},
    address_family{YType::identityref, "address-family"},
    default_rib{YType::boolean, "default-rib"}
    	,
    routes(std::make_shared<RoutingState::RoutingInstance::Ribs::Rib::Routes>())
{
    routes->parent = this;

    yang_name = "rib"; yang_parent_name = "ribs"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::Ribs::Rib::~Rib()
{
}

bool RoutingState::RoutingInstance::Ribs::Rib::has_data() const
{
    return name.is_set
	|| address_family.is_set
	|| default_rib.is_set
	|| (routes !=  nullptr && routes->has_data());
}

bool RoutingState::RoutingInstance::Ribs::Rib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(default_rib.yfilter)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string RoutingState::RoutingInstance::Ribs::Rib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::Ribs::Rib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (default_rib.is_set || is_set(default_rib.yfilter)) leaf_name_data.push_back(default_rib.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::Ribs::Rib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<RoutingState::RoutingInstance::Ribs::Rib::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::Ribs::Rib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void RoutingState::RoutingInstance::Ribs::Rib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-rib")
    {
        default_rib = value;
        default_rib.value_namespace = name_space;
        default_rib.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::Ribs::Rib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "default-rib")
    {
        default_rib.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::Ribs::Rib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "name" || name == "address-family" || name == "default-rib")
        return true;
    return false;
}

RoutingState::RoutingInstance::Ribs::Rib::Routes::Routes()
{

    yang_name = "routes"; yang_parent_name = "rib"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::Ribs::Rib::Routes::~Routes()
{
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingState::RoutingInstance::Ribs::Rib::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::Ribs::Rib::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::Ribs::Rib::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingState::RoutingInstance::Ribs::Rib::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::Ribs::Rib::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::Ribs::Rib::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingState::RoutingInstance::Ribs::Rib::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::Route()
    :
    destination_prefix{YType::str, "destination-prefix"},
    route_preference{YType::uint32, "route-preference"},
    metric{YType::uint32, "metric"},
    source_protocol{YType::identityref, "source-protocol"},
    active{YType::empty, "active"},
    last_updated{YType::str, "last-updated"},
    update_source{YType::str, "update-source"},
    tag{YType::uint32, "ietf-ospf:tag"},
    route_type{YType::enumeration, "ietf-ospf:route-type"}
    	,
    next_hop(std::make_shared<RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop>())
{
    next_hop->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::~Route()
{
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::has_data() const
{
    return destination_prefix.is_set
	|| route_preference.is_set
	|| metric.is_set
	|| source_protocol.is_set
	|| active.is_set
	|| last_updated.is_set
	|| update_source.is_set
	|| tag.is_set
	|| route_type.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(route_preference.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(last_updated.yfilter)
	|| ydk::is_set(update_source.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route" <<"[destination-prefix='" <<destination_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (route_preference.is_set || is_set(route_preference.yfilter)) leaf_name_data.push_back(route_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (last_updated.is_set || is_set(last_updated.yfilter)) leaf_name_data.push_back(last_updated.get_name_leafdata());
    if (update_source.is_set || is_set(update_source.yfilter)) leaf_name_data.push_back(update_source.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-preference")
    {
        route_preference = value;
        route_preference.value_namespace = name_space;
        route_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-updated")
    {
        last_updated = value;
        last_updated.value_namespace = name_space;
        last_updated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source")
    {
        update_source = value;
        update_source.value_namespace = name_space;
        update_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "route-preference")
    {
        route_preference.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "last-updated")
    {
        last_updated.yfilter = yfilter;
    }
    if(value_path == "update-source")
    {
        update_source.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "destination-prefix" || name == "route-preference" || name == "metric" || name == "source-protocol" || name == "active" || name == "last-updated" || name == "update-source" || name == "tag" || name == "route-type")
        return true;
    return false;
}

RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::NextHop()
    :
    outgoing_interface{YType::str, "outgoing-interface"},
    next_hop_address{YType::str, "next-hop-address"},
    special_next_hop{YType::enumeration, "special-next-hop"}
{

    yang_name = "next-hop"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::~NextHop()
{
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::has_data() const
{
    return outgoing_interface.is_set
	|| next_hop_address.is_set
	|| special_next_hop.is_set;
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(special_next_hop.yfilter);
}

std::string RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (special_next_hop.is_set || is_set(special_next_hop.yfilter)) leaf_name_data.push_back(special_next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop = value;
        special_next_hop.value_namespace = name_space;
        special_next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop.yfilter = yfilter;
    }
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-interface" || name == "next-hop-address" || name == "special-next-hop")
        return true;
    return false;
}

Routing::Routing()
{

    yang_name = "routing"; yang_parent_name = "ietf-routing"; is_top_level_class = true; has_list_ancestor = false;
}

Routing::~Routing()
{
}

bool Routing::has_data() const
{
    for (std::size_t index=0; index<routing_instance.size(); index++)
    {
        if(routing_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Routing::has_operation() const
{
    for (std::size_t index=0; index<routing_instance.size(); index++)
    {
        if(routing_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routing-instance")
    {
        for(auto const & c : routing_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance>();
        c->parent = this;
        routing_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : routing_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Routing::clone_ptr() const
{
    return std::make_shared<Routing>();
}

std::string Routing::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Routing::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Routing::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Routing::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routing-instance")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingInstance()
    :
    name{YType::str, "name"},
    type{YType::identityref, "type"},
    enabled{YType::boolean, "enabled"},
    router_id{YType::str, "router-id"},
    description{YType::str, "description"}
    	,
    interfaces(std::make_shared<Routing::RoutingInstance::Interfaces>())
	,routing_protocols(std::make_shared<Routing::RoutingInstance::RoutingProtocols>())
	,ribs(std::make_shared<Routing::RoutingInstance::Ribs>())
{
    interfaces->parent = this;
    routing_protocols->parent = this;
    ribs->parent = this;

    yang_name = "routing-instance"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = false;
}

Routing::RoutingInstance::~RoutingInstance()
{
}

bool Routing::RoutingInstance::has_data() const
{
    return name.is_set
	|| type.is_set
	|| enabled.is_set
	|| router_id.is_set
	|| description.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (routing_protocols !=  nullptr && routing_protocols->has_data())
	|| (ribs !=  nullptr && ribs->has_data());
}

bool Routing::RoutingInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (routing_protocols !=  nullptr && routing_protocols->has_operation())
	|| (ribs !=  nullptr && ribs->has_operation());
}

std::string Routing::RoutingInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Routing::RoutingInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-instance" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Routing::RoutingInstance::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "routing-protocols")
    {
        if(routing_protocols == nullptr)
        {
            routing_protocols = std::make_shared<Routing::RoutingInstance::RoutingProtocols>();
        }
        return routing_protocols;
    }

    if(child_yang_name == "ribs")
    {
        if(ribs == nullptr)
        {
            ribs = std::make_shared<Routing::RoutingInstance::Ribs>();
        }
        return ribs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(routing_protocols != nullptr)
    {
        children["routing-protocols"] = routing_protocols;
    }

    if(ribs != nullptr)
    {
        children["ribs"] = ribs;
    }

    return children;
}

void Routing::RoutingInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "routing-protocols" || name == "ribs" || name == "name" || name == "type" || name == "enabled" || name == "router-id" || name == "description")
        return true;
    return false;
}

Routing::RoutingInstance::Interfaces::Interfaces()
    :
    interface{YType::str, "interface"}
{

    yang_name = "interfaces"; yang_parent_name = "routing-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::Interfaces::~Interfaces()
{
}

bool Routing::RoutingInstance::Interfaces::has_data() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Routing::RoutingInstance::Interfaces::has_operation() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Routing::RoutingInstance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

void Routing::RoutingInstance::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocols()
{

    yang_name = "routing-protocols"; yang_parent_name = "routing-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::~RoutingProtocols()
{
}

bool Routing::RoutingInstance::RoutingProtocols::has_data() const
{
    for (std::size_t index=0; index<routing_protocol.size(); index++)
    {
        if(routing_protocol[index]->has_data())
            return true;
    }
    return false;
}

bool Routing::RoutingInstance::RoutingProtocols::has_operation() const
{
    for (std::size_t index=0; index<routing_protocol.size(); index++)
    {
        if(routing_protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routing-protocol")
    {
        for(auto const & c : routing_protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol>();
        c->parent = this;
        routing_protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : routing_protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routing-protocol")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::RoutingProtocol()
    :
    type{YType::identityref, "type"},
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    static_routes(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes>())
	,ospf(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf>())
{
    static_routes->parent = this;
    ospf->parent = this;

    yang_name = "routing-protocol"; yang_parent_name = "routing-protocols"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::~RoutingProtocol()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::has_data() const
{
    return type.is_set
	|| name.is_set
	|| description.is_set
	|| (static_routes !=  nullptr && static_routes->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (static_routes !=  nullptr && static_routes->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-protocol" <<"[type='" <<type <<"']" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-routes")
    {
        if(static_routes == nullptr)
        {
            static_routes = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes>();
        }
        return static_routes;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(static_routes != nullptr)
    {
        children["static-routes"] = static_routes;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-routes" || name == "ospf" || name == "type" || name == "name" || name == "description")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::StaticRoutes()
    :
    ipv4(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4>())
	,ipv6(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "static-routes"; yang_parent_name = "routing-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::~StaticRoutes()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Ipv4()
{

    yang_name = "ipv4"; yang_parent_name = "static-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::~Ipv4()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ipv4-unicast-routing:ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::Route()
    :
    destination_prefix{YType::str, "destination-prefix"},
    description{YType::str, "description"}
    	,
    next_hop(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop>())
{
    next_hop->parent = this;

    yang_name = "route"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::~Route()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::has_data() const
{
    return destination_prefix.is_set
	|| description.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route" <<"[destination-prefix='" <<destination_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "destination-prefix" || name == "description")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::NextHop()
    :
    outgoing_interface{YType::str, "outgoing-interface"},
    special_next_hop{YType::enumeration, "special-next-hop"},
    next_hop_address{YType::str, "next-hop-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::~NextHop()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::has_data() const
{
    return outgoing_interface.is_set
	|| special_next_hop.is_set
	|| next_hop_address.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(special_next_hop.yfilter)
	|| ydk::is_set(next_hop_address.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (special_next_hop.is_set || is_set(special_next_hop.yfilter)) leaf_name_data.push_back(special_next_hop.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop = value;
        special_next_hop.value_namespace = name_space;
        special_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-interface" || name == "special-next-hop" || name == "next-hop-address")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Ipv6()
{

    yang_name = "ipv6"; yang_parent_name = "static-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::~Ipv6()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ipv6-unicast-routing:ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::Route()
    :
    destination_prefix{YType::str, "destination-prefix"},
    description{YType::str, "description"}
    	,
    next_hop(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop>())
{
    next_hop->parent = this;

    yang_name = "route"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::~Route()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::has_data() const
{
    return destination_prefix.is_set
	|| description.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route" <<"[destination-prefix='" <<destination_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "destination-prefix" || name == "description")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::NextHop()
    :
    outgoing_interface{YType::str, "outgoing-interface"},
    special_next_hop{YType::enumeration, "special-next-hop"},
    next_hop_address{YType::str, "next-hop-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::~NextHop()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::has_data() const
{
    return outgoing_interface.is_set
	|| special_next_hop.is_set
	|| next_hop_address.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(special_next_hop.yfilter)
	|| ydk::is_set(next_hop_address.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (special_next_hop.is_set || is_set(special_next_hop.yfilter)) leaf_name_data.push_back(special_next_hop.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop = value;
        special_next_hop.value_namespace = name_space;
        special_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-interface" || name == "special-next-hop" || name == "next-hop-address")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Ospf()
    :
    operation_mode{YType::identityref, "operation-mode"}
    	,
    all_instances_inherit(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit>())
{
    all_instances_inherit->parent = this;

    yang_name = "ospf"; yang_parent_name = "routing-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::~Ospf()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return operation_mode.is_set
	|| (all_instances_inherit !=  nullptr && all_instances_inherit->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(operation_mode.yfilter)
	|| (all_instances_inherit !=  nullptr && all_instances_inherit->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ospf:ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_mode.is_set || is_set(operation_mode.yfilter)) leaf_name_data.push_back(operation_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-instances-inherit")
    {
        if(all_instances_inherit == nullptr)
        {
            all_instances_inherit = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit>();
        }
        return all_instances_inherit;
    }

    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_instances_inherit != nullptr)
    {
        children["all-instances-inherit"] = all_instances_inherit;
    }

    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-mode")
    {
        operation_mode = value;
        operation_mode.value_namespace = name_space;
        operation_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-mode")
    {
        operation_mode.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-instances-inherit" || name == "instance" || name == "operation-mode")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::AllInstancesInherit()
    :
    area(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area>())
	,interface(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface>())
{
    area->parent = this;
    interface->parent = this;

    yang_name = "all-instances-inherit"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::~AllInstancesInherit()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::has_data() const
{
    return (area !=  nullptr && area->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::has_operation() const
{
    return is_set(yfilter)
	|| (area !=  nullptr && area->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-instances-inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        if(area == nullptr)
        {
            area = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area>();
        }
        return area;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area != nullptr)
    {
        children["area"] = area;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "interface")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::Area()
{

    yang_name = "area"; yang_parent_name = "all-instances-inherit"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::~Area()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::has_data() const
{
    return false;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::has_operation() const
{
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::Interface()
{

    yang_name = "interface"; yang_parent_name = "all-instances-inherit"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::~Interface()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::has_data() const
{
    return false;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::has_operation() const
{
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Instance()
    :
    af{YType::identityref, "af"},
    router_id{YType::str, "router-id"},
    enable{YType::boolean, "enable"}
    	,
    admin_distance(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance>())
	,nsr(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr>())
	,graceful_restart(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart>())
	,auto_cost(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost>())
	,spf_control(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl>())
	,database_control(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl>())
	,reload_control(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl>())
	,mpls(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls>())
	,fast_reroute(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute>())
	,all_areas_inherit(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit>())
{
    admin_distance->parent = this;
    nsr->parent = this;
    graceful_restart->parent = this;
    auto_cost->parent = this;
    spf_control->parent = this;
    database_control->parent = this;
    reload_control->parent = this;
    mpls->parent = this;
    fast_reroute->parent = this;
    all_areas_inherit->parent = this;

    yang_name = "instance"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::~Instance()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return af.is_set
	|| router_id.is_set
	|| enable.is_set
	|| (admin_distance !=  nullptr && admin_distance->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (auto_cost !=  nullptr && auto_cost->has_data())
	|| (spf_control !=  nullptr && spf_control->has_data())
	|| (database_control !=  nullptr && database_control->has_data())
	|| (reload_control !=  nullptr && reload_control->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (all_areas_inherit !=  nullptr && all_areas_inherit->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (admin_distance !=  nullptr && admin_distance->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (auto_cost !=  nullptr && auto_cost->has_operation())
	|| (spf_control !=  nullptr && spf_control->has_operation())
	|| (database_control !=  nullptr && database_control->has_operation())
	|| (reload_control !=  nullptr && reload_control->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (all_areas_inherit !=  nullptr && all_areas_inherit->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[af='" <<af <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-distance")
    {
        if(admin_distance == nullptr)
        {
            admin_distance = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance>();
        }
        return admin_distance;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost == nullptr)
        {
            auto_cost = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost>();
        }
        return auto_cost;
    }

    if(child_yang_name == "spf-control")
    {
        if(spf_control == nullptr)
        {
            spf_control = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl>();
        }
        return spf_control;
    }

    if(child_yang_name == "database-control")
    {
        if(database_control == nullptr)
        {
            database_control = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl>();
        }
        return database_control;
    }

    if(child_yang_name == "reload-control")
    {
        if(reload_control == nullptr)
        {
            reload_control = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl>();
        }
        return reload_control;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "all-areas-inherit")
    {
        if(all_areas_inherit == nullptr)
        {
            all_areas_inherit = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit>();
        }
        return all_areas_inherit;
    }

    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admin_distance != nullptr)
    {
        children["admin-distance"] = admin_distance;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(auto_cost != nullptr)
    {
        children["auto-cost"] = auto_cost;
    }

    if(spf_control != nullptr)
    {
        children["spf-control"] = spf_control;
    }

    if(database_control != nullptr)
    {
        children["database-control"] = database_control;
    }

    if(reload_control != nullptr)
    {
        children["reload-control"] = reload_control;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(all_areas_inherit != nullptr)
    {
        children["all-areas-inherit"] = all_areas_inherit;
    }

    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-distance" || name == "nsr" || name == "graceful-restart" || name == "auto-cost" || name == "spf-control" || name == "database-control" || name == "reload-control" || name == "mpls" || name == "fast-reroute" || name == "all-areas-inherit" || name == "area" || name == "topology" || name == "af" || name == "router-id" || name == "enable")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::AdminDistance()
    :
    intra_area{YType::uint8, "intra-area"},
    inter_area{YType::uint8, "inter-area"},
    internal{YType::uint8, "internal"},
    external{YType::uint8, "external"}
{

    yang_name = "admin-distance"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::~AdminDistance()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::has_data() const
{
    return intra_area.is_set
	|| inter_area.is_set
	|| internal.is_set
	|| external.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intra_area.yfilter)
	|| ydk::is_set(inter_area.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(external.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intra_area.is_set || is_set(intra_area.yfilter)) leaf_name_data.push_back(intra_area.get_name_leafdata());
    if (inter_area.is_set || is_set(inter_area.yfilter)) leaf_name_data.push_back(inter_area.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intra-area")
    {
        intra_area = value;
        intra_area.value_namespace = name_space;
        intra_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area")
    {
        inter_area = value;
        inter_area.value_namespace = name_space;
        inter_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intra-area")
    {
        intra_area.yfilter = yfilter;
    }
    if(value_path == "inter-area")
    {
        inter_area.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intra-area" || name == "inter-area" || name == "internal" || name == "external")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::Nsr()
    :
    enable{YType::boolean, "enable"}
{

    yang_name = "nsr"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::~Nsr()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::has_data() const
{
    return enable.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::GracefulRestart()
    :
    enable{YType::boolean, "enable"},
    helper_enable{YType::boolean, "helper-enable"},
    restart_interval{YType::uint16, "restart-interval"},
    helper_strict_lsa_checking{YType::boolean, "helper-strict-lsa-checking"}
{

    yang_name = "graceful-restart"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::~GracefulRestart()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::has_data() const
{
    return enable.is_set
	|| helper_enable.is_set
	|| restart_interval.is_set
	|| helper_strict_lsa_checking.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(helper_enable.yfilter)
	|| ydk::is_set(restart_interval.yfilter)
	|| ydk::is_set(helper_strict_lsa_checking.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (helper_enable.is_set || is_set(helper_enable.yfilter)) leaf_name_data.push_back(helper_enable.get_name_leafdata());
    if (restart_interval.is_set || is_set(restart_interval.yfilter)) leaf_name_data.push_back(restart_interval.get_name_leafdata());
    if (helper_strict_lsa_checking.is_set || is_set(helper_strict_lsa_checking.yfilter)) leaf_name_data.push_back(helper_strict_lsa_checking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-enable")
    {
        helper_enable = value;
        helper_enable.value_namespace = name_space;
        helper_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-interval")
    {
        restart_interval = value;
        restart_interval.value_namespace = name_space;
        restart_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-strict-lsa-checking")
    {
        helper_strict_lsa_checking = value;
        helper_strict_lsa_checking.value_namespace = name_space;
        helper_strict_lsa_checking.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "helper-enable")
    {
        helper_enable.yfilter = yfilter;
    }
    if(value_path == "restart-interval")
    {
        restart_interval.yfilter = yfilter;
    }
    if(value_path == "helper-strict-lsa-checking")
    {
        helper_strict_lsa_checking.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "helper-enable" || name == "restart-interval" || name == "helper-strict-lsa-checking")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::AutoCost()
    :
    enable{YType::boolean, "enable"},
    reference_bandwidth{YType::uint32, "reference-bandwidth"}
{

    yang_name = "auto-cost"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::~AutoCost()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::has_data() const
{
    return enable.is_set
	|| reference_bandwidth.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(reference_bandwidth.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (reference_bandwidth.is_set || is_set(reference_bandwidth.yfilter)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
        reference_bandwidth.value_namespace = name_space;
        reference_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "reference-bandwidth")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::SpfControl()
    :
    paths{YType::uint16, "paths"}
{

    yang_name = "spf-control"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::~SpfControl()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::has_data() const
{
    return paths.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paths.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths.is_set || is_set(paths.yfilter)) leaf_name_data.push_back(paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paths")
    {
        paths = value;
        paths.value_namespace = name_space;
        paths.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paths")
    {
        paths.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::DatabaseControl()
    :
    max_lsa{YType::uint32, "max-lsa"}
{

    yang_name = "database-control"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::~DatabaseControl()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::has_data() const
{
    return max_lsa.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_lsa.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_lsa.is_set || is_set(max_lsa.yfilter)) leaf_name_data.push_back(max_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-lsa")
    {
        max_lsa = value;
        max_lsa.value_namespace = name_space;
        max_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-lsa")
    {
        max_lsa.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-lsa")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::ReloadControl()
{

    yang_name = "reload-control"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::~ReloadControl()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::has_data() const
{
    return false;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::has_operation() const
{
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Mpls()
    :
    te_rid(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid>())
	,ldp(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp>())
{
    te_rid->parent = this;
    ldp->parent = this;

    yang_name = "mpls"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::~Mpls()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::has_data() const
{
    return (te_rid !=  nullptr && te_rid->has_data())
	|| (ldp !=  nullptr && ldp->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (te_rid !=  nullptr && te_rid->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-rid")
    {
        if(te_rid == nullptr)
        {
            te_rid = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid>();
        }
        return te_rid;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp>();
        }
        return ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_rid != nullptr)
    {
        children["te-rid"] = te_rid;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-rid" || name == "ldp")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::TeRid()
    :
    interface{YType::str, "interface"},
    router_id{YType::str, "router-id"}
{

    yang_name = "te-rid"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::~TeRid()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::has_data() const
{
    return interface.is_set
	|| router_id.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-rid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "router-id")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::Ldp()
    :
    igp_sync{YType::boolean, "igp-sync"},
    autoconfig{YType::boolean, "autoconfig"}
{

    yang_name = "ldp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::~Ldp()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::has_data() const
{
    return igp_sync.is_set
	|| autoconfig.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_sync.yfilter)
	|| ydk::is_set(autoconfig.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_sync.is_set || is_set(igp_sync.yfilter)) leaf_name_data.push_back(igp_sync.get_name_leafdata());
    if (autoconfig.is_set || is_set(autoconfig.yfilter)) leaf_name_data.push_back(autoconfig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-sync")
    {
        igp_sync = value;
        igp_sync.value_namespace = name_space;
        igp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoconfig")
    {
        autoconfig = value;
        autoconfig.value_namespace = name_space;
        autoconfig.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-sync")
    {
        igp_sync.yfilter = yfilter;
    }
    if(value_path == "autoconfig")
    {
        autoconfig.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-sync" || name == "autoconfig")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::FastReroute()
    :
    lfa(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa>())
{
    lfa->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::~FastReroute()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::has_data() const
{
    return (lfa !=  nullptr && lfa->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (lfa !=  nullptr && lfa->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa")
    {
        if(lfa == nullptr)
        {
            lfa = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa>();
        }
        return lfa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lfa != nullptr)
    {
        children["lfa"] = lfa;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::Lfa()
{

    yang_name = "lfa"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::~Lfa()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::has_data() const
{
    return false;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::has_operation() const
{
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::AllAreasInherit()
    :
    area(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area>())
	,interface(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface>())
{
    area->parent = this;
    interface->parent = this;

    yang_name = "all-areas-inherit"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::~AllAreasInherit()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::has_data() const
{
    return (area !=  nullptr && area->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::has_operation() const
{
    return is_set(yfilter)
	|| (area !=  nullptr && area->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-areas-inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        if(area == nullptr)
        {
            area = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area>();
        }
        return area;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area != nullptr)
    {
        children["area"] = area;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "interface")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::Area()
{

    yang_name = "area"; yang_parent_name = "all-areas-inherit"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::~Area()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::has_data() const
{
    return false;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::has_operation() const
{
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::Interface()
{

    yang_name = "interface"; yang_parent_name = "all-areas-inherit"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::~Interface()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::has_data() const
{
    return false;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::has_operation() const
{
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Area()
    :
    area_id{YType::str, "area-id"},
    area_type{YType::identityref, "area-type"},
    summary{YType::boolean, "summary"},
    default_cost{YType::uint32, "default-cost"}
    	,
    all_interfaces_inherit(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit>())
{
    all_interfaces_inherit->parent = this;

    yang_name = "area"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::~Area()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| area_type.is_set
	|| summary.is_set
	|| default_cost.is_set
	|| (all_interfaces_inherit !=  nullptr && all_interfaces_inherit->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_type.yfilter)
	|| ydk::is_set(summary.yfilter)
	|| ydk::is_set(default_cost.yfilter)
	|| (all_interfaces_inherit !=  nullptr && all_interfaces_inherit->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_type.is_set || is_set(area_type.yfilter)) leaf_name_data.push_back(area_type.get_name_leafdata());
    if (summary.is_set || is_set(summary.yfilter)) leaf_name_data.push_back(summary.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    if(child_yang_name == "all-interfaces-inherit")
    {
        if(all_interfaces_inherit == nullptr)
        {
            all_interfaces_inherit = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit>();
        }
        return all_interfaces_inherit;
    }

    if(child_yang_name == "virtual-link")
    {
        for(auto const & c : virtual_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    if(child_yang_name == "sham-link")
    {
        for(auto const & c : sham_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink>();
        c->parent = this;
        sham_link.push_back(c);
        return c;
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    if(all_interfaces_inherit != nullptr)
    {
        children["all-interfaces-inherit"] = all_interfaces_inherit;
    }

    for (auto const & c : virtual_link)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sham_link)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-type")
    {
        area_type = value;
        area_type.value_namespace = name_space;
        area_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary")
    {
        summary = value;
        summary.value_namespace = name_space;
        summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
        default_cost.value_namespace = name_space;
        default_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-type")
    {
        area_type.yfilter = yfilter;
    }
    if(value_path == "summary")
    {
        summary.yfilter = yfilter;
    }
    if(value_path == "default-cost")
    {
        default_cost.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "all-interfaces-inherit" || name == "virtual-link" || name == "sham-link" || name == "interface" || name == "area-id" || name == "area-type" || name == "summary" || name == "default-cost")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::Range()
    :
    prefix{YType::str, "prefix"},
    advertise{YType::boolean, "advertise"},
    cost{YType::uint32, "cost"}
{

    yang_name = "range"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::~Range()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::has_data() const
{
    return prefix.is_set
	|| advertise.is_set
	|| cost.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "advertise" || name == "cost")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::AllInterfacesInherit()
    :
    interface(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface>())
{
    interface->parent = this;

    yang_name = "all-interfaces-inherit"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::~AllInterfacesInherit()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-interfaces-inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::Interface()
{

    yang_name = "interface"; yang_parent_name = "all-interfaces-inherit"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::~Interface()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::has_data() const
{
    return false;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::has_operation() const
{
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::VirtualLink()
    :
    router_id{YType::str, "router-id"},
    cost{YType::uint16, "cost"},
    hello_interval{YType::uint16, "hello-interval"},
    dead_interval{YType::uint16, "dead-interval"},
    retransmit_interval{YType::uint16, "retransmit-interval"},
    transmit_delay{YType::uint16, "transmit-delay"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    lls{YType::boolean, "lls"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    bfd{YType::boolean, "bfd"},
    enable{YType::boolean, "enable"}
    	,
    ttl_security(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity>())
	,authentication(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication>())
{
    ttl_security->parent = this;
    authentication->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::~VirtualLink()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::has_data() const
{
    return router_id.is_set
	|| cost.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| mtu_ignore.is_set
	|| lls.is_set
	|| prefix_suppression.is_set
	|| bfd.is_set
	|| enable.is_set
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(lls.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[router-id='" <<router_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (lls.is_set || is_set(lls.yfilter)) leaf_name_data.push_back(lls.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lls")
    {
        lls = value;
        lls.value_namespace = name_space;
        lls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "lls")
    {
        lls.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl-security" || name == "authentication" || name == "router-id" || name == "cost" || name == "hello-interval" || name == "dead-interval" || name == "retransmit-interval" || name == "transmit-delay" || name == "mtu-ignore" || name == "lls" || name == "prefix-suppression" || name == "bfd" || name == "enable")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::TtlSecurity()
    :
    enable{YType::boolean, "enable"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::~TtlSecurity()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::has_data() const
{
    return enable.is_set
	|| hops.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "hops")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::Authentication()
    :
    sa{YType::str, "sa"},
    key_chain{YType::str, "key-chain"},
    key{YType::str, "key"}
    	,
    crypto_algorithm(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm>())
{
    crypto_algorithm->parent = this;

    yang_name = "authentication"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::~Authentication()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::has_data() const
{
    return sa.is_set
	|| key_chain.is_set
	|| key.is_set
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(key.yfilter)
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa.is_set || is_set(sa.yfilter)) leaf_name_data.push_back(sa.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crypto-algorithm")
    {
        if(crypto_algorithm == nullptr)
        {
            crypto_algorithm = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm>();
        }
        return crypto_algorithm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crypto_algorithm != nullptr)
    {
        children["crypto-algorithm"] = crypto_algorithm;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa")
    {
        sa = value;
        sa.value_namespace = name_space;
        sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa")
    {
        sa.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto-algorithm" || name == "sa" || name == "key-chain" || name == "key")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::CryptoAlgorithm()
    :
    hmac_sha1_12{YType::empty, "hmac-sha1-12"},
    hmac_sha1_20{YType::empty, "hmac-sha1-20"},
    md5{YType::empty, "md5"},
    sha_1{YType::empty, "sha-1"},
    hmac_sha_1{YType::empty, "hmac-sha-1"},
    hmac_sha_256{YType::empty, "hmac-sha-256"},
    hmac_sha_384{YType::empty, "hmac-sha-384"},
    hmac_sha_512{YType::empty, "hmac-sha-512"}
{

    yang_name = "crypto-algorithm"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::~CryptoAlgorithm()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::has_data() const
{
    return hmac_sha1_12.is_set
	|| hmac_sha1_20.is_set
	|| md5.is_set
	|| sha_1.is_set
	|| hmac_sha_1.is_set
	|| hmac_sha_256.is_set
	|| hmac_sha_384.is_set
	|| hmac_sha_512.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hmac_sha1_12.yfilter)
	|| ydk::is_set(hmac_sha1_20.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha_1.yfilter)
	|| ydk::is_set(hmac_sha_1.yfilter)
	|| ydk::is_set(hmac_sha_256.yfilter)
	|| ydk::is_set(hmac_sha_384.yfilter)
	|| ydk::is_set(hmac_sha_512.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha1_12.is_set || is_set(hmac_sha1_12.yfilter)) leaf_name_data.push_back(hmac_sha1_12.get_name_leafdata());
    if (hmac_sha1_20.is_set || is_set(hmac_sha1_20.yfilter)) leaf_name_data.push_back(hmac_sha1_20.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha_1.is_set || is_set(sha_1.yfilter)) leaf_name_data.push_back(sha_1.get_name_leafdata());
    if (hmac_sha_1.is_set || is_set(hmac_sha_1.yfilter)) leaf_name_data.push_back(hmac_sha_1.get_name_leafdata());
    if (hmac_sha_256.is_set || is_set(hmac_sha_256.yfilter)) leaf_name_data.push_back(hmac_sha_256.get_name_leafdata());
    if (hmac_sha_384.is_set || is_set(hmac_sha_384.yfilter)) leaf_name_data.push_back(hmac_sha_384.get_name_leafdata());
    if (hmac_sha_512.is_set || is_set(hmac_sha_512.yfilter)) leaf_name_data.push_back(hmac_sha_512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12 = value;
        hmac_sha1_12.value_namespace = name_space;
        hmac_sha1_12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20 = value;
        hmac_sha1_20.value_namespace = name_space;
        hmac_sha1_20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha-1")
    {
        sha_1 = value;
        sha_1.value_namespace = name_space;
        sha_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1 = value;
        hmac_sha_1.value_namespace = name_space;
        hmac_sha_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256 = value;
        hmac_sha_256.value_namespace = name_space;
        hmac_sha_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384 = value;
        hmac_sha_384.value_namespace = name_space;
        hmac_sha_384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512 = value;
        hmac_sha_512.value_namespace = name_space;
        hmac_sha_512.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12.yfilter = yfilter;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha-1")
    {
        sha_1.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha1-12" || name == "hmac-sha1-20" || name == "md5" || name == "sha-1" || name == "hmac-sha-1" || name == "hmac-sha-256" || name == "hmac-sha-384" || name == "hmac-sha-512")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::ShamLink()
    :
    local_id{YType::str, "local-id"},
    remote_id{YType::str, "remote-id"},
    cost{YType::uint16, "cost"},
    hello_interval{YType::uint16, "hello-interval"},
    dead_interval{YType::uint16, "dead-interval"},
    retransmit_interval{YType::uint16, "retransmit-interval"},
    transmit_delay{YType::uint16, "transmit-delay"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    lls{YType::boolean, "lls"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    bfd{YType::boolean, "bfd"},
    enable{YType::boolean, "enable"}
    	,
    ttl_security(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity>())
	,authentication(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication>())
{
    ttl_security->parent = this;
    authentication->parent = this;

    yang_name = "sham-link"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::~ShamLink()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::has_data() const
{
    return local_id.is_set
	|| remote_id.is_set
	|| cost.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| mtu_ignore.is_set
	|| lls.is_set
	|| prefix_suppression.is_set
	|| bfd.is_set
	|| enable.is_set
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(lls.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[local-id='" <<local_id <<"']" <<"[remote-id='" <<remote_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (lls.is_set || is_set(lls.yfilter)) leaf_name_data.push_back(lls.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lls")
    {
        lls = value;
        lls.value_namespace = name_space;
        lls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "lls")
    {
        lls.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl-security" || name == "authentication" || name == "local-id" || name == "remote-id" || name == "cost" || name == "hello-interval" || name == "dead-interval" || name == "retransmit-interval" || name == "transmit-delay" || name == "mtu-ignore" || name == "lls" || name == "prefix-suppression" || name == "bfd" || name == "enable")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::TtlSecurity()
    :
    enable{YType::boolean, "enable"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::~TtlSecurity()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::has_data() const
{
    return enable.is_set
	|| hops.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "hops")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::Authentication()
    :
    sa{YType::str, "sa"},
    key_chain{YType::str, "key-chain"},
    key{YType::str, "key"}
    	,
    crypto_algorithm(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm>())
{
    crypto_algorithm->parent = this;

    yang_name = "authentication"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::~Authentication()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::has_data() const
{
    return sa.is_set
	|| key_chain.is_set
	|| key.is_set
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(key.yfilter)
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa.is_set || is_set(sa.yfilter)) leaf_name_data.push_back(sa.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crypto-algorithm")
    {
        if(crypto_algorithm == nullptr)
        {
            crypto_algorithm = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm>();
        }
        return crypto_algorithm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crypto_algorithm != nullptr)
    {
        children["crypto-algorithm"] = crypto_algorithm;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa")
    {
        sa = value;
        sa.value_namespace = name_space;
        sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa")
    {
        sa.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto-algorithm" || name == "sa" || name == "key-chain" || name == "key")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::CryptoAlgorithm()
    :
    hmac_sha1_12{YType::empty, "hmac-sha1-12"},
    hmac_sha1_20{YType::empty, "hmac-sha1-20"},
    md5{YType::empty, "md5"},
    sha_1{YType::empty, "sha-1"},
    hmac_sha_1{YType::empty, "hmac-sha-1"},
    hmac_sha_256{YType::empty, "hmac-sha-256"},
    hmac_sha_384{YType::empty, "hmac-sha-384"},
    hmac_sha_512{YType::empty, "hmac-sha-512"}
{

    yang_name = "crypto-algorithm"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::~CryptoAlgorithm()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::has_data() const
{
    return hmac_sha1_12.is_set
	|| hmac_sha1_20.is_set
	|| md5.is_set
	|| sha_1.is_set
	|| hmac_sha_1.is_set
	|| hmac_sha_256.is_set
	|| hmac_sha_384.is_set
	|| hmac_sha_512.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hmac_sha1_12.yfilter)
	|| ydk::is_set(hmac_sha1_20.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha_1.yfilter)
	|| ydk::is_set(hmac_sha_1.yfilter)
	|| ydk::is_set(hmac_sha_256.yfilter)
	|| ydk::is_set(hmac_sha_384.yfilter)
	|| ydk::is_set(hmac_sha_512.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha1_12.is_set || is_set(hmac_sha1_12.yfilter)) leaf_name_data.push_back(hmac_sha1_12.get_name_leafdata());
    if (hmac_sha1_20.is_set || is_set(hmac_sha1_20.yfilter)) leaf_name_data.push_back(hmac_sha1_20.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha_1.is_set || is_set(sha_1.yfilter)) leaf_name_data.push_back(sha_1.get_name_leafdata());
    if (hmac_sha_1.is_set || is_set(hmac_sha_1.yfilter)) leaf_name_data.push_back(hmac_sha_1.get_name_leafdata());
    if (hmac_sha_256.is_set || is_set(hmac_sha_256.yfilter)) leaf_name_data.push_back(hmac_sha_256.get_name_leafdata());
    if (hmac_sha_384.is_set || is_set(hmac_sha_384.yfilter)) leaf_name_data.push_back(hmac_sha_384.get_name_leafdata());
    if (hmac_sha_512.is_set || is_set(hmac_sha_512.yfilter)) leaf_name_data.push_back(hmac_sha_512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12 = value;
        hmac_sha1_12.value_namespace = name_space;
        hmac_sha1_12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20 = value;
        hmac_sha1_20.value_namespace = name_space;
        hmac_sha1_20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha-1")
    {
        sha_1 = value;
        sha_1.value_namespace = name_space;
        sha_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1 = value;
        hmac_sha_1.value_namespace = name_space;
        hmac_sha_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256 = value;
        hmac_sha_256.value_namespace = name_space;
        hmac_sha_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384 = value;
        hmac_sha_384.value_namespace = name_space;
        hmac_sha_384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512 = value;
        hmac_sha_512.value_namespace = name_space;
        hmac_sha_512.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12.yfilter = yfilter;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha-1")
    {
        sha_1.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha1-12" || name == "hmac-sha1-20" || name == "md5" || name == "sha-1" || name == "hmac-sha-1" || name == "hmac-sha-256" || name == "hmac-sha-384" || name == "hmac-sha-512")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Interface()
    :
    interface{YType::str, "interface"},
    network_type{YType::enumeration, "network-type"},
    passive{YType::boolean, "passive"},
    demand_circuit{YType::boolean, "demand-circuit"},
    node_flag{YType::boolean, "node-flag"},
    cost{YType::uint16, "cost"},
    hello_interval{YType::uint16, "hello-interval"},
    dead_interval{YType::uint16, "dead-interval"},
    retransmit_interval{YType::uint16, "retransmit-interval"},
    transmit_delay{YType::uint16, "transmit-delay"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    lls{YType::boolean, "lls"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    bfd{YType::boolean, "bfd"},
    enable{YType::boolean, "enable"}
    	,
    multi_area(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea>())
	,static_neighbors(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors>())
	,fast_reroute(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute>())
	,ttl_security(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity>())
	,authentication(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication>())
{
    multi_area->parent = this;
    static_neighbors->parent = this;
    fast_reroute->parent = this;
    ttl_security->parent = this;
    authentication->parent = this;

    yang_name = "interface"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::~Interface()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return interface.is_set
	|| network_type.is_set
	|| passive.is_set
	|| demand_circuit.is_set
	|| node_flag.is_set
	|| cost.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| mtu_ignore.is_set
	|| lls.is_set
	|| prefix_suppression.is_set
	|| bfd.is_set
	|| enable.is_set
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (static_neighbors !=  nullptr && static_neighbors->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(node_flag.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(lls.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (static_neighbors !=  nullptr && static_neighbors->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (node_flag.is_set || is_set(node_flag.yfilter)) leaf_name_data.push_back(node_flag.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (lls.is_set || is_set(lls.yfilter)) leaf_name_data.push_back(lls.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "static-neighbors")
    {
        if(static_neighbors == nullptr)
        {
            static_neighbors = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors>();
        }
        return static_neighbors;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    if(static_neighbors != nullptr)
    {
        children["static-neighbors"] = static_neighbors;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-flag")
    {
        node_flag = value;
        node_flag.value_namespace = name_space;
        node_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lls")
    {
        lls = value;
        lls.value_namespace = name_space;
        lls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "node-flag")
    {
        node_flag.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "lls")
    {
        lls.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-area" || name == "static-neighbors" || name == "fast-reroute" || name == "ttl-security" || name == "authentication" || name == "topology" || name == "interface" || name == "network-type" || name == "passive" || name == "demand-circuit" || name == "node-flag" || name == "cost" || name == "hello-interval" || name == "dead-interval" || name == "retransmit-interval" || name == "transmit-delay" || name == "mtu-ignore" || name == "lls" || name == "prefix-suppression" || name == "bfd" || name == "enable")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::MultiArea()
    :
    multi_area_id{YType::str, "multi-area-id"},
    cost{YType::uint16, "cost"}
{

    yang_name = "multi-area"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::~MultiArea()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::has_data() const
{
    return multi_area_id.is_set
	|| cost.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_area_id.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_area_id.is_set || is_set(multi_area_id.yfilter)) leaf_name_data.push_back(multi_area_id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-area-id")
    {
        multi_area_id = value;
        multi_area_id.value_namespace = name_space;
        multi_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-area-id")
    {
        multi_area_id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-area-id" || name == "cost")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::StaticNeighbors()
{

    yang_name = "static-neighbors"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::~StaticNeighbors()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::Neighbor()
    :
    address{YType::str, "address"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint16, "poll-interval"},
    priority{YType::uint8, "priority"}
{

    yang_name = "neighbor"; yang_parent_name = "static-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::~Neighbor()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::has_data() const
{
    return address.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::FastReroute()
    :
    lfa(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa>())
{
    lfa->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::~FastReroute()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::has_data() const
{
    return (lfa !=  nullptr && lfa->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (lfa !=  nullptr && lfa->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa")
    {
        if(lfa == nullptr)
        {
            lfa = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa>();
        }
        return lfa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lfa != nullptr)
    {
        children["lfa"] = lfa;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::Lfa()
    :
    candidate_disabled{YType::boolean, "candidate-disabled"},
    enabled{YType::boolean, "enabled"}
    	,
    remote_lfa(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa>())
{
    remote_lfa->parent = this;

    yang_name = "lfa"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::~Lfa()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::has_data() const
{
    return candidate_disabled.is_set
	|| enabled.is_set
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate_disabled.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_disabled.is_set || is_set(candidate_disabled.yfilter)) leaf_name_data.push_back(candidate_disabled.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa>();
        }
        return remote_lfa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate-disabled")
    {
        candidate_disabled = value;
        candidate_disabled.value_namespace = name_space;
        candidate_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate-disabled")
    {
        candidate_disabled.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-lfa" || name == "candidate-disabled" || name == "enabled")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::RemoteLfa()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "remote-lfa"; yang_parent_name = "lfa"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::~RemoteLfa()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::has_data() const
{
    return enabled.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::TtlSecurity()
    :
    enable{YType::boolean, "enable"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::~TtlSecurity()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::has_data() const
{
    return enable.is_set
	|| hops.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "hops")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::Authentication()
    :
    sa{YType::str, "sa"},
    key_chain{YType::str, "key-chain"},
    key{YType::str, "key"}
    	,
    crypto_algorithm(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm>())
{
    crypto_algorithm->parent = this;

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::~Authentication()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::has_data() const
{
    return sa.is_set
	|| key_chain.is_set
	|| key.is_set
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(key.yfilter)
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa.is_set || is_set(sa.yfilter)) leaf_name_data.push_back(sa.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crypto-algorithm")
    {
        if(crypto_algorithm == nullptr)
        {
            crypto_algorithm = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm>();
        }
        return crypto_algorithm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crypto_algorithm != nullptr)
    {
        children["crypto-algorithm"] = crypto_algorithm;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa")
    {
        sa = value;
        sa.value_namespace = name_space;
        sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa")
    {
        sa.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto-algorithm" || name == "sa" || name == "key-chain" || name == "key")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::CryptoAlgorithm()
    :
    hmac_sha1_12{YType::empty, "hmac-sha1-12"},
    hmac_sha1_20{YType::empty, "hmac-sha1-20"},
    md5{YType::empty, "md5"},
    sha_1{YType::empty, "sha-1"},
    hmac_sha_1{YType::empty, "hmac-sha-1"},
    hmac_sha_256{YType::empty, "hmac-sha-256"},
    hmac_sha_384{YType::empty, "hmac-sha-384"},
    hmac_sha_512{YType::empty, "hmac-sha-512"}
{

    yang_name = "crypto-algorithm"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::~CryptoAlgorithm()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::has_data() const
{
    return hmac_sha1_12.is_set
	|| hmac_sha1_20.is_set
	|| md5.is_set
	|| sha_1.is_set
	|| hmac_sha_1.is_set
	|| hmac_sha_256.is_set
	|| hmac_sha_384.is_set
	|| hmac_sha_512.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hmac_sha1_12.yfilter)
	|| ydk::is_set(hmac_sha1_20.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha_1.yfilter)
	|| ydk::is_set(hmac_sha_1.yfilter)
	|| ydk::is_set(hmac_sha_256.yfilter)
	|| ydk::is_set(hmac_sha_384.yfilter)
	|| ydk::is_set(hmac_sha_512.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha1_12.is_set || is_set(hmac_sha1_12.yfilter)) leaf_name_data.push_back(hmac_sha1_12.get_name_leafdata());
    if (hmac_sha1_20.is_set || is_set(hmac_sha1_20.yfilter)) leaf_name_data.push_back(hmac_sha1_20.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha_1.is_set || is_set(sha_1.yfilter)) leaf_name_data.push_back(sha_1.get_name_leafdata());
    if (hmac_sha_1.is_set || is_set(hmac_sha_1.yfilter)) leaf_name_data.push_back(hmac_sha_1.get_name_leafdata());
    if (hmac_sha_256.is_set || is_set(hmac_sha_256.yfilter)) leaf_name_data.push_back(hmac_sha_256.get_name_leafdata());
    if (hmac_sha_384.is_set || is_set(hmac_sha_384.yfilter)) leaf_name_data.push_back(hmac_sha_384.get_name_leafdata());
    if (hmac_sha_512.is_set || is_set(hmac_sha_512.yfilter)) leaf_name_data.push_back(hmac_sha_512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12 = value;
        hmac_sha1_12.value_namespace = name_space;
        hmac_sha1_12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20 = value;
        hmac_sha1_20.value_namespace = name_space;
        hmac_sha1_20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha-1")
    {
        sha_1 = value;
        sha_1.value_namespace = name_space;
        sha_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1 = value;
        hmac_sha_1.value_namespace = name_space;
        hmac_sha_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256 = value;
        hmac_sha_256.value_namespace = name_space;
        hmac_sha_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384 = value;
        hmac_sha_384.value_namespace = name_space;
        hmac_sha_384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512 = value;
        hmac_sha_512.value_namespace = name_space;
        hmac_sha_512.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12.yfilter = yfilter;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha-1")
    {
        sha_1.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha1-12" || name == "hmac-sha1-20" || name == "md5" || name == "sha-1" || name == "hmac-sha-1" || name == "hmac-sha-256" || name == "hmac-sha-384" || name == "hmac-sha-512")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::Topology()
    :
    name{YType::str, "name"},
    cost{YType::uint32, "cost"}
{

    yang_name = "topology"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::~Topology()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::has_data() const
{
    return name.is_set
	|| cost.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "cost")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Topology()
    :
    name{YType::str, "name"}
{

    yang_name = "topology"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::~Topology()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "name")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Area()
    :
    area_id{YType::str, "area-id"},
    area_type{YType::identityref, "area-type"},
    summary{YType::boolean, "summary"},
    default_cost{YType::uint32, "default-cost"}
{

    yang_name = "area"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::~Area()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| area_type.is_set
	|| summary.is_set
	|| default_cost.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_type.yfilter)
	|| ydk::is_set(summary.yfilter)
	|| ydk::is_set(default_cost.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_type.is_set || is_set(area_type.yfilter)) leaf_name_data.push_back(area_type.get_name_leafdata());
    if (summary.is_set || is_set(summary.yfilter)) leaf_name_data.push_back(summary.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-type")
    {
        area_type = value;
        area_type.value_namespace = name_space;
        area_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary")
    {
        summary = value;
        summary.value_namespace = name_space;
        summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
        default_cost.value_namespace = name_space;
        default_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-type")
    {
        area_type.yfilter = yfilter;
    }
    if(value_path == "summary")
    {
        summary.yfilter = yfilter;
    }
    if(value_path == "default-cost")
    {
        default_cost.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "area-id" || name == "area-type" || name == "summary" || name == "default-cost")
        return true;
    return false;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::Range()
    :
    prefix{YType::str, "prefix"},
    advertise{YType::boolean, "advertise"},
    cost{YType::uint32, "cost"}
{

    yang_name = "range"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::~Range()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::has_data() const
{
    return prefix.is_set
	|| advertise.is_set
	|| cost.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "advertise" || name == "cost")
        return true;
    return false;
}

Routing::RoutingInstance::Ribs::Ribs()
{

    yang_name = "ribs"; yang_parent_name = "routing-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::Ribs::~Ribs()
{
}

bool Routing::RoutingInstance::Ribs::has_data() const
{
    for (std::size_t index=0; index<rib.size(); index++)
    {
        if(rib[index]->has_data())
            return true;
    }
    return false;
}

bool Routing::RoutingInstance::Ribs::has_operation() const
{
    for (std::size_t index=0; index<rib.size(); index++)
    {
        if(rib[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Routing::RoutingInstance::Ribs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::Ribs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::Ribs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib")
    {
        for(auto const & c : rib)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Routing::RoutingInstance::Ribs::Rib>();
        c->parent = this;
        rib.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::Ribs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rib)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::Ribs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Routing::RoutingInstance::Ribs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Routing::RoutingInstance::Ribs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib")
        return true;
    return false;
}

Routing::RoutingInstance::Ribs::Rib::Rib()
    :
    name{YType::str, "name"},
    address_family{YType::identityref, "address-family"},
    description{YType::str, "description"}
{

    yang_name = "rib"; yang_parent_name = "ribs"; is_top_level_class = false; has_list_ancestor = true;
}

Routing::RoutingInstance::Ribs::Rib::~Rib()
{
}

bool Routing::RoutingInstance::Ribs::Rib::has_data() const
{
    return name.is_set
	|| address_family.is_set
	|| description.is_set;
}

bool Routing::RoutingInstance::Ribs::Rib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Routing::RoutingInstance::Ribs::Rib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Routing::RoutingInstance::Ribs::Rib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Routing::RoutingInstance::Ribs::Rib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::Ribs::Rib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Routing::RoutingInstance::Ribs::Rib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Routing::RoutingInstance::Ribs::Rib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Routing::RoutingInstance::Ribs::Rib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address-family" || name == "description")
        return true;
    return false;
}

FibRoute::FibRoute()
    :
    input(std::make_shared<FibRoute::Input>())
	,output(std::make_shared<FibRoute::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "fib-route"; yang_parent_name = "ietf-routing"; is_top_level_class = true; has_list_ancestor = false;
}

FibRoute::~FibRoute()
{
}

bool FibRoute::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool FibRoute::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string FibRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:fib-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FibRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FibRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<FibRoute::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<FibRoute::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void FibRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FibRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> FibRoute::clone_ptr() const
{
    return std::make_shared<FibRoute>();
}

std::string FibRoute::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string FibRoute::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function FibRoute::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FibRoute::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool FibRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

FibRoute::Input::Input()
    :
    routing_instance_name{YType::str, "routing-instance-name"}
    	,
    destination_address(std::make_shared<FibRoute::Input::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "input"; yang_parent_name = "fib-route"; is_top_level_class = false; has_list_ancestor = false;
}

FibRoute::Input::~Input()
{
}

bool FibRoute::Input::has_data() const
{
    return routing_instance_name.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool FibRoute::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routing_instance_name.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string FibRoute::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:fib-route/" << get_segment_path();
    return path_buffer.str();
}

std::string FibRoute::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FibRoute::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routing_instance_name.is_set || is_set(routing_instance_name.yfilter)) leaf_name_data.push_back(routing_instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FibRoute::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<FibRoute::Input::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRoute::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void FibRoute::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routing-instance-name")
    {
        routing_instance_name = value;
        routing_instance_name.value_namespace = name_space;
        routing_instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void FibRoute::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routing-instance-name")
    {
        routing_instance_name.yfilter = yfilter;
    }
}

bool FibRoute::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "routing-instance-name")
        return true;
    return false;
}

FibRoute::Input::DestinationAddress::DestinationAddress()
    :
    address_family{YType::identityref, "address-family"},
    ietf_ipv4_unicast_routing_address{YType::str, "ietf-ipv4-unicast-routing:ietf-ipv4-unicast-routing_address"},
    ietf_ipv6_unicast_routing_address{YType::str, "ietf-ipv6-unicast-routing:ietf-ipv6-unicast-routing_address"}
{

    yang_name = "destination-address"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

FibRoute::Input::DestinationAddress::~DestinationAddress()
{
}

bool FibRoute::Input::DestinationAddress::has_data() const
{
    return address_family.is_set
	|| ietf_ipv4_unicast_routing_address.is_set
	|| ietf_ipv6_unicast_routing_address.is_set;
}

bool FibRoute::Input::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ietf_ipv4_unicast_routing_address.yfilter)
	|| ydk::is_set(ietf_ipv6_unicast_routing_address.yfilter);
}

std::string FibRoute::Input::DestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:fib-route/input/" << get_segment_path();
    return path_buffer.str();
}

std::string FibRoute::Input::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FibRoute::Input::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ietf_ipv4_unicast_routing_address.is_set || is_set(ietf_ipv4_unicast_routing_address.yfilter)) leaf_name_data.push_back(ietf_ipv4_unicast_routing_address.get_name_leafdata());
    if (ietf_ipv6_unicast_routing_address.is_set || is_set(ietf_ipv6_unicast_routing_address.yfilter)) leaf_name_data.push_back(ietf_ipv6_unicast_routing_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FibRoute::Input::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRoute::Input::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FibRoute::Input::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-ipv4-unicast-routing_address")
    {
        ietf_ipv4_unicast_routing_address = value;
        ietf_ipv4_unicast_routing_address.value_namespace = name_space;
        ietf_ipv4_unicast_routing_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-ipv6-unicast-routing_address")
    {
        ietf_ipv6_unicast_routing_address = value;
        ietf_ipv6_unicast_routing_address.value_namespace = name_space;
        ietf_ipv6_unicast_routing_address.value_namespace_prefix = name_space_prefix;
    }
}

void FibRoute::Input::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ietf-ipv4-unicast-routing_address")
    {
        ietf_ipv4_unicast_routing_address.yfilter = yfilter;
    }
    if(value_path == "ietf-ipv6-unicast-routing_address")
    {
        ietf_ipv6_unicast_routing_address.yfilter = yfilter;
    }
}

bool FibRoute::Input::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ietf-ipv4-unicast-routing_address" || name == "ietf-ipv6-unicast-routing_address")
        return true;
    return false;
}

FibRoute::Output::Output()
    :
    route(std::make_shared<FibRoute::Output::Route>())
{
    route->parent = this;

    yang_name = "output"; yang_parent_name = "fib-route"; is_top_level_class = false; has_list_ancestor = false;
}

FibRoute::Output::~Output()
{
}

bool FibRoute::Output::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool FibRoute::Output::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string FibRoute::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:fib-route/" << get_segment_path();
    return path_buffer.str();
}

std::string FibRoute::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FibRoute::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FibRoute::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<FibRoute::Output::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRoute::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void FibRoute::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FibRoute::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FibRoute::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

FibRoute::Output::Route::Route()
    :
    address_family{YType::identityref, "address-family"},
    source_protocol{YType::identityref, "source-protocol"},
    active{YType::empty, "active"},
    last_updated{YType::str, "last-updated"},
    ietf_ipv4_unicast_routing_destination_prefix{YType::str, "ietf-ipv4-unicast-routing:ietf-ipv4-unicast-routing_destination-prefix"},
    ietf_ipv6_unicast_routing_destination_prefix{YType::str, "ietf-ipv6-unicast-routing:ietf-ipv6-unicast-routing_destination-prefix"}
    	,
    next_hop(std::make_shared<FibRoute::Output::Route::NextHop>())
{
    next_hop->parent = this;

    yang_name = "route"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = false;
}

FibRoute::Output::Route::~Route()
{
}

bool FibRoute::Output::Route::has_data() const
{
    return address_family.is_set
	|| source_protocol.is_set
	|| active.is_set
	|| last_updated.is_set
	|| ietf_ipv4_unicast_routing_destination_prefix.is_set
	|| ietf_ipv6_unicast_routing_destination_prefix.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool FibRoute::Output::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(last_updated.yfilter)
	|| ydk::is_set(ietf_ipv4_unicast_routing_destination_prefix.yfilter)
	|| ydk::is_set(ietf_ipv6_unicast_routing_destination_prefix.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string FibRoute::Output::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:fib-route/output/" << get_segment_path();
    return path_buffer.str();
}

std::string FibRoute::Output::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FibRoute::Output::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (last_updated.is_set || is_set(last_updated.yfilter)) leaf_name_data.push_back(last_updated.get_name_leafdata());
    if (ietf_ipv4_unicast_routing_destination_prefix.is_set || is_set(ietf_ipv4_unicast_routing_destination_prefix.yfilter)) leaf_name_data.push_back(ietf_ipv4_unicast_routing_destination_prefix.get_name_leafdata());
    if (ietf_ipv6_unicast_routing_destination_prefix.is_set || is_set(ietf_ipv6_unicast_routing_destination_prefix.yfilter)) leaf_name_data.push_back(ietf_ipv6_unicast_routing_destination_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FibRoute::Output::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<FibRoute::Output::Route::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRoute::Output::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void FibRoute::Output::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-updated")
    {
        last_updated = value;
        last_updated.value_namespace = name_space;
        last_updated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-ipv4-unicast-routing_destination-prefix")
    {
        ietf_ipv4_unicast_routing_destination_prefix = value;
        ietf_ipv4_unicast_routing_destination_prefix.value_namespace = name_space;
        ietf_ipv4_unicast_routing_destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-ipv6-unicast-routing_destination-prefix")
    {
        ietf_ipv6_unicast_routing_destination_prefix = value;
        ietf_ipv6_unicast_routing_destination_prefix.value_namespace = name_space;
        ietf_ipv6_unicast_routing_destination_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void FibRoute::Output::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "last-updated")
    {
        last_updated.yfilter = yfilter;
    }
    if(value_path == "ietf-ipv4-unicast-routing_destination-prefix")
    {
        ietf_ipv4_unicast_routing_destination_prefix.yfilter = yfilter;
    }
    if(value_path == "ietf-ipv6-unicast-routing_destination-prefix")
    {
        ietf_ipv6_unicast_routing_destination_prefix.yfilter = yfilter;
    }
}

bool FibRoute::Output::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "address-family" || name == "source-protocol" || name == "active" || name == "last-updated" || name == "ietf-ipv4-unicast-routing_destination-prefix" || name == "ietf-ipv6-unicast-routing_destination-prefix")
        return true;
    return false;
}

FibRoute::Output::Route::NextHop::NextHop()
    :
    outgoing_interface{YType::str, "outgoing-interface"},
    ietf_routing_next_hop_address{YType::str, "ietf-routing_next-hop-address"},
    ietf_ipv4_unicast_routing_next_hop_address{YType::str, "ietf-ipv4-unicast-routing:ietf-ipv4-unicast-routing_next-hop-address"},
    ietf_ipv6_unicast_routing_next_hop_address{YType::str, "ietf-ipv6-unicast-routing:ietf-ipv6-unicast-routing_next-hop-address"},
    special_next_hop{YType::enumeration, "special-next-hop"}
{

    yang_name = "next-hop"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

FibRoute::Output::Route::NextHop::~NextHop()
{
}

bool FibRoute::Output::Route::NextHop::has_data() const
{
    return outgoing_interface.is_set
	|| ietf_routing_next_hop_address.is_set
	|| ietf_ipv4_unicast_routing_next_hop_address.is_set
	|| ietf_ipv6_unicast_routing_next_hop_address.is_set
	|| special_next_hop.is_set;
}

bool FibRoute::Output::Route::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(ietf_routing_next_hop_address.yfilter)
	|| ydk::is_set(ietf_ipv4_unicast_routing_next_hop_address.yfilter)
	|| ydk::is_set(ietf_ipv6_unicast_routing_next_hop_address.yfilter)
	|| ydk::is_set(special_next_hop.yfilter);
}

std::string FibRoute::Output::Route::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:fib-route/output/route/" << get_segment_path();
    return path_buffer.str();
}

std::string FibRoute::Output::Route::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FibRoute::Output::Route::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (ietf_routing_next_hop_address.is_set || is_set(ietf_routing_next_hop_address.yfilter)) leaf_name_data.push_back(ietf_routing_next_hop_address.get_name_leafdata());
    if (ietf_ipv4_unicast_routing_next_hop_address.is_set || is_set(ietf_ipv4_unicast_routing_next_hop_address.yfilter)) leaf_name_data.push_back(ietf_ipv4_unicast_routing_next_hop_address.get_name_leafdata());
    if (ietf_ipv6_unicast_routing_next_hop_address.is_set || is_set(ietf_ipv6_unicast_routing_next_hop_address.yfilter)) leaf_name_data.push_back(ietf_ipv6_unicast_routing_next_hop_address.get_name_leafdata());
    if (special_next_hop.is_set || is_set(special_next_hop.yfilter)) leaf_name_data.push_back(special_next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FibRoute::Output::Route::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRoute::Output::Route::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FibRoute::Output::Route::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-routing_next-hop-address")
    {
        ietf_routing_next_hop_address = value;
        ietf_routing_next_hop_address.value_namespace = name_space;
        ietf_routing_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-ipv4-unicast-routing_next-hop-address")
    {
        ietf_ipv4_unicast_routing_next_hop_address = value;
        ietf_ipv4_unicast_routing_next_hop_address.value_namespace = name_space;
        ietf_ipv4_unicast_routing_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-ipv6-unicast-routing_next-hop-address")
    {
        ietf_ipv6_unicast_routing_next_hop_address = value;
        ietf_ipv6_unicast_routing_next_hop_address.value_namespace = name_space;
        ietf_ipv6_unicast_routing_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop = value;
        special_next_hop.value_namespace = name_space;
        special_next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void FibRoute::Output::Route::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "ietf-routing_next-hop-address")
    {
        ietf_routing_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "ietf-ipv4-unicast-routing_next-hop-address")
    {
        ietf_ipv4_unicast_routing_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "ietf-ipv6-unicast-routing_next-hop-address")
    {
        ietf_ipv6_unicast_routing_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop.yfilter = yfilter;
    }
}

bool FibRoute::Output::Route::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-interface" || name == "ietf-routing_next-hop-address" || name == "ietf-ipv4-unicast-routing_next-hop-address" || name == "ietf-ipv6-unicast-routing_next-hop-address" || name == "special-next-hop")
        return true;
    return false;
}

Ipv4::Ipv4()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-routing", "ietf-routing", "ietf-routing:ipv4")
{

}

Ipv4::~Ipv4()
{
}

Ipv6::Ipv6()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-routing", "ietf-routing", "ietf-routing:ipv6")
{

}

Ipv6::~Ipv6()
{
}

DefaultRoutingInstance::DefaultRoutingInstance()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-routing", "ietf-routing", "ietf-routing:default-routing-instance")
{

}

DefaultRoutingInstance::~DefaultRoutingInstance()
{
}

VrfRoutingInstance::VrfRoutingInstance()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-routing", "ietf-routing", "ietf-routing:vrf-routing-instance")
{

}

VrfRoutingInstance::~VrfRoutingInstance()
{
}

Direct::Direct()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-routing", "ietf-routing", "ietf-routing:direct")
{

}

Direct::~Direct()
{
}

Static_::Static_()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-routing", "ietf-routing", "ietf-routing:static")
{

}

Static_::~Static_()
{
}

const Enum::YLeaf RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::NetworkType::broadcast {0, "broadcast"};
const Enum::YLeaf RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::NetworkType::non_broadcast {1, "non-broadcast"};
const Enum::YLeaf RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::NetworkType::point_to_multipoint {2, "point-to-multipoint"};
const Enum::YLeaf RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::NetworkType::point_to_point {3, "point-to-point"};

const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteType::intra_area {0, "intra-area"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteType::inter_area {1, "inter-area"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteType::external_1 {2, "external-1"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteType::external_2 {3, "external-2"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteType::nssa_1 {4, "nssa-1"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteType::nssa_2 {5, "nssa-2"};

const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::SpecialNextHop::blackhole {0, "blackhole"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::SpecialNextHop::unreachable {1, "unreachable"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::SpecialNextHop::prohibit {2, "prohibit"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::SpecialNextHop::receive {3, "receive"};

const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::SpecialNextHop::blackhole {0, "blackhole"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::SpecialNextHop::unreachable {1, "unreachable"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::SpecialNextHop::prohibit {2, "prohibit"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::SpecialNextHop::receive {3, "receive"};

const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::SpecialNextHop::blackhole {0, "blackhole"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::SpecialNextHop::unreachable {1, "unreachable"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::SpecialNextHop::prohibit {2, "prohibit"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::SpecialNextHop::receive {3, "receive"};

const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::NetworkType::broadcast {0, "broadcast"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::NetworkType::non_broadcast {1, "non-broadcast"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::NetworkType::point_to_multipoint {2, "point-to-multipoint"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::NetworkType::point_to_point {3, "point-to-point"};

const Enum::YLeaf FibRoute::Output::Route::NextHop::SpecialNextHop::blackhole {0, "blackhole"};
const Enum::YLeaf FibRoute::Output::Route::NextHop::SpecialNextHop::unreachable {1, "unreachable"};
const Enum::YLeaf FibRoute::Output::Route::NextHop::SpecialNextHop::prohibit {2, "prohibit"};
const Enum::YLeaf FibRoute::Output::Route::NextHop::SpecialNextHop::receive {3, "receive"};


}
}

