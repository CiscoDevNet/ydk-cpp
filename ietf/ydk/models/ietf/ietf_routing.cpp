
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_routing.hpp"

namespace ydk {
namespace ietf_routing {

RoutingProtocolIdentity::RoutingProtocolIdentity()
     : Identity("ietf-routing:routing-protocol")
{
}

RoutingProtocolIdentity::~RoutingProtocolIdentity()
{
}

RoutingInstanceIdentity::RoutingInstanceIdentity()
     : Identity("ietf-routing:routing-instance")
{
}

RoutingInstanceIdentity::~RoutingInstanceIdentity()
{
}

AddressFamilyIdentity::AddressFamilyIdentity()
     : Identity("ietf-routing:address-family")
{
}

AddressFamilyIdentity::~AddressFamilyIdentity()
{
}

RoutingState::RoutingState()
{
    yang_name = "routing-state"; yang_parent_name = "ietf-routing";
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
    return is_set(operation);
}

std::string RoutingState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:routing-state";

    return path_buffer.str();

}

const EntityPath RoutingState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::set_value(const std::string & value_path, std::string value)
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

RoutingState::RoutingInstance::RoutingInstance()
    :
    name{YType::str, "name"},
    router_id{YType::str, "router-id"},
    type{YType::identityref, "type"}
    	,
    interfaces(std::make_shared<RoutingState::RoutingInstance::Interfaces>())
	,ribs(std::make_shared<RoutingState::RoutingInstance::Ribs>())
	,routing_protocols(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols>())
{
    interfaces->parent = this;

    ribs->parent = this;

    routing_protocols->parent = this;

    yang_name = "routing-instance"; yang_parent_name = "routing-state";
}

RoutingState::RoutingInstance::~RoutingInstance()
{
}

bool RoutingState::RoutingInstance::has_data() const
{
    return name.is_set
	|| router_id.is_set
	|| type.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (ribs !=  nullptr && ribs->has_data())
	|| (routing_protocols !=  nullptr && routing_protocols->has_data());
}

bool RoutingState::RoutingInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(router_id.operation)
	|| is_set(type.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (ribs !=  nullptr && ribs->has_operation())
	|| (routing_protocols !=  nullptr && routing_protocols->has_operation());
}

std::string RoutingState::RoutingInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-instance" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-routing:routing-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    if(child_yang_name == "ribs")
    {
        if(ribs == nullptr)
        {
            ribs = std::make_shared<RoutingState::RoutingInstance::Ribs>();
        }
        return ribs;
    }

    if(child_yang_name == "routing-protocols")
    {
        if(routing_protocols == nullptr)
        {
            routing_protocols = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols>();
        }
        return routing_protocols;
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

    if(ribs != nullptr)
    {
        children["ribs"] = ribs;
    }

    if(routing_protocols != nullptr)
    {
        children["routing-protocols"] = routing_protocols;
    }

    return children;
}

void RoutingState::RoutingInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::Interfaces::Interfaces()
    :
    interface{YType::str, "interface"}
{
    yang_name = "interfaces"; yang_parent_name = "routing-instance";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string RoutingState::RoutingInstance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::Interfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocols()
{
    yang_name = "routing-protocols"; yang_parent_name = "routing-instance";
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
    return is_set(operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-protocols";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutingProtocols' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::RoutingProtocol()
    :
    type{YType::identityref, "type"},
    name{YType::str, "name"}
    	,
    ospf(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf>())
{
    ospf->parent = this;

    yang_name = "routing-protocol"; yang_parent_name = "routing-protocols";
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
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(name.operation)
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-protocol" <<"[type='" <<type <<"']" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutingProtocol' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Ospf()
    :
    operation_mode{YType::identityref, "operation-mode"}
{
    yang_name = "ospf"; yang_parent_name = "routing-protocol";
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
    return is_set(operation)
	|| is_set(operation_mode.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ospf:ospf";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_mode.is_set || is_set(operation_mode.operation)) leaf_name_data.push_back(operation_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operation-mode")
    {
        operation_mode = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Instance()
    :
    af{YType::identityref, "af"},
    router_id{YType::str, "router-id"}
{
    yang_name = "instance"; yang_parent_name = "ospf";
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
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(router_id.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[af='" <<af <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instance' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Area()
    :
    area_id{YType::str, "area-id"}
{
    yang_name = "area"; yang_parent_name = "instance";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::~Area()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::has_data() const
{
    for (std::size_t index=0; index<area_scope_lsas.size(); index++)
    {
        if(area_scope_lsas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interfaces.size(); index++)
    {
        if(interfaces[index]->has_data())
            return true;
    }
    return area_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::has_operation() const
{
    for (std::size_t index=0; index<area_scope_lsas.size(); index++)
    {
        if(area_scope_lsas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interfaces.size(); index++)
    {
        if(interfaces[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_scope_lsas)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interfaces)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Interfaces()
    :
    interface{YType::str, "interface"},
    bdr{YType::str, "bdr"},
    bfd{YType::boolean, "bfd"},
    cost{YType::uint16, "cost"},
    dead_interval{YType::uint16, "dead-interval"},
    demand_circuit{YType::boolean, "demand-circuit"},
    dr{YType::str, "dr"},
    enable{YType::boolean, "enable"},
    hello_interval{YType::uint16, "hello-interval"},
    hello_timer{YType::uint32, "hello-timer"},
    lls{YType::boolean, "lls"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network_type{YType::enumeration, "network-type"},
    node_flag{YType::boolean, "node-flag"},
    passive{YType::boolean, "passive"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    retransmit_interval{YType::uint16, "retransmit-interval"},
    state{YType::str, "state"},
    transmit_delay{YType::uint16, "transmit-delay"},
    wait_timer{YType::uint32, "wait-timer"}
    	,
    authentication(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication>())
	,fast_reroute(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute>())
	,multi_area(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea>())
	,static_neighbors(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors>())
	,ttl_security(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity>())
{
    authentication->parent = this;

    fast_reroute->parent = this;

    multi_area->parent = this;

    static_neighbors->parent = this;

    ttl_security->parent = this;

    yang_name = "interfaces"; yang_parent_name = "area";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::~Interfaces()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::has_data() const
{
    for (std::size_t index=0; index<link_scope_lsas.size(); index++)
    {
        if(link_scope_lsas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return interface.is_set
	|| bdr.is_set
	|| bfd.is_set
	|| cost.is_set
	|| dead_interval.is_set
	|| demand_circuit.is_set
	|| dr.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| hello_timer.is_set
	|| lls.is_set
	|| mtu_ignore.is_set
	|| network_type.is_set
	|| node_flag.is_set
	|| passive.is_set
	|| prefix_suppression.is_set
	|| retransmit_interval.is_set
	|| state.is_set
	|| transmit_delay.is_set
	|| wait_timer.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (static_neighbors !=  nullptr && static_neighbors->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<link_scope_lsas.size(); index++)
    {
        if(link_scope_lsas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(bdr.operation)
	|| is_set(bfd.operation)
	|| is_set(cost.operation)
	|| is_set(dead_interval.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(dr.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(hello_timer.operation)
	|| is_set(lls.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network_type.operation)
	|| is_set(node_flag.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(state.operation)
	|| is_set(transmit_delay.operation)
	|| is_set(wait_timer.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (static_neighbors !=  nullptr && static_neighbors->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.operation)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (dr.is_set || is_set(dr.operation)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_timer.is_set || is_set(hello_timer.operation)) leaf_name_data.push_back(hello_timer.get_name_leafdata());
    if (lls.is_set || is_set(lls.operation)) leaf_name_data.push_back(lls.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (node_flag.is_set || is_set(node_flag.operation)) leaf_name_data.push_back(node_flag.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.operation)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());
    if (wait_timer.is_set || is_set(wait_timer.operation)) leaf_name_data.push_back(wait_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute>();
        }
        return fast_reroute;
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

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea>();
        }
        return multi_area;
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

    if(child_yang_name == "static-neighbors")
    {
        if(static_neighbors == nullptr)
        {
            static_neighbors = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors>();
        }
        return static_neighbors;
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

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    for (auto const & c : link_scope_lsas)
    {
        children[c->get_segment_path()] = c;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_neighbors != nullptr)
    {
        children["static-neighbors"] = static_neighbors;
    }

    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "bdr")
    {
        bdr = value;
    }
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "dr")
    {
        dr = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "hello-timer")
    {
        hello_timer = value;
    }
    if(value_path == "lls")
    {
        lls = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "node-flag")
    {
        node_flag = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
    if(value_path == "wait-timer")
    {
        wait_timer = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::MultiArea()
    :
    cost{YType::uint16, "cost"},
    multi_area_id{YType::str, "multi-area-id"}
{
    yang_name = "multi-area"; yang_parent_name = "interfaces";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::~MultiArea()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::has_data() const
{
    return cost.is_set
	|| multi_area_id.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(multi_area_id.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (multi_area_id.is_set || is_set(multi_area_id.operation)) leaf_name_data.push_back(multi_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::MultiArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "multi-area-id")
    {
        multi_area_id = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::StaticNeighbors()
{
    yang_name = "static-neighbors"; yang_parent_name = "interfaces";
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
    return is_set(operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-neighbors";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticNeighbors' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::Neighbor()
    :
    address{YType::str, "address"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint16, "poll-interval"},
    priority{YType::uint8, "priority"}
{
    yang_name = "neighbor"; yang_parent_name = "static-neighbors";
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
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(cost.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::StaticNeighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::FastReroute()
    :
    lfa(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa>())
{
    lfa->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "interfaces";
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
    return is_set(operation)
	|| (lfa !=  nullptr && lfa->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::Lfa()
    :
    candidate_disabled{YType::boolean, "candidate-disabled"},
    enabled{YType::boolean, "enabled"}
    	,
    remote_lfa(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa>())
{
    remote_lfa->parent = this;

    yang_name = "lfa"; yang_parent_name = "fast-reroute";
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
    return is_set(operation)
	|| is_set(candidate_disabled.operation)
	|| is_set(enabled.operation)
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lfa' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_disabled.is_set || is_set(candidate_disabled.operation)) leaf_name_data.push_back(candidate_disabled.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate-disabled")
    {
        candidate_disabled = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::RemoteLfa()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "remote-lfa"; yang_parent_name = "lfa";
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
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::FastReroute::Lfa::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::TtlSecurity()
    :
    enable{YType::boolean, "enable"},
    hops{YType::uint8, "hops"}
{
    yang_name = "ttl-security"; yang_parent_name = "interfaces";
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hops.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtlSecurity' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hops.is_set || is_set(hops.operation)) leaf_name_data.push_back(hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::TtlSecurity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hops")
    {
        hops = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::Authentication()
    :
    key{YType::str, "key"},
    key_chain{YType::str, "key-chain"},
    sa{YType::str, "sa"}
    	,
    crypto_algorithm(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm>())
{
    crypto_algorithm->parent = this;

    yang_name = "authentication"; yang_parent_name = "interfaces";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::~Authentication()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::has_data() const
{
    return key.is_set
	|| key_chain.is_set
	|| sa.is_set
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(key_chain.operation)
	|| is_set(sa.operation)
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (sa.is_set || is_set(sa.operation)) leaf_name_data.push_back(sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "sa")
    {
        sa = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::CryptoAlgorithm()
    :
    hmac_sha1_12{YType::empty, "hmac-sha1-12"},
    hmac_sha1_20{YType::empty, "hmac-sha1-20"},
    hmac_sha_1{YType::empty, "hmac-sha-1"},
    hmac_sha_256{YType::empty, "hmac-sha-256"},
    hmac_sha_384{YType::empty, "hmac-sha-384"},
    hmac_sha_512{YType::empty, "hmac-sha-512"},
    md5{YType::empty, "md5"},
    sha_1{YType::empty, "sha-1"}
{
    yang_name = "crypto-algorithm"; yang_parent_name = "authentication";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::~CryptoAlgorithm()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::has_data() const
{
    return hmac_sha1_12.is_set
	|| hmac_sha1_20.is_set
	|| hmac_sha_1.is_set
	|| hmac_sha_256.is_set
	|| hmac_sha_384.is_set
	|| hmac_sha_512.is_set
	|| md5.is_set
	|| sha_1.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::has_operation() const
{
    return is_set(operation)
	|| is_set(hmac_sha1_12.operation)
	|| is_set(hmac_sha1_20.operation)
	|| is_set(hmac_sha_1.operation)
	|| is_set(hmac_sha_256.operation)
	|| is_set(hmac_sha_384.operation)
	|| is_set(hmac_sha_512.operation)
	|| is_set(md5.operation)
	|| is_set(sha_1.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-algorithm";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CryptoAlgorithm' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha1_12.is_set || is_set(hmac_sha1_12.operation)) leaf_name_data.push_back(hmac_sha1_12.get_name_leafdata());
    if (hmac_sha1_20.is_set || is_set(hmac_sha1_20.operation)) leaf_name_data.push_back(hmac_sha1_20.get_name_leafdata());
    if (hmac_sha_1.is_set || is_set(hmac_sha_1.operation)) leaf_name_data.push_back(hmac_sha_1.get_name_leafdata());
    if (hmac_sha_256.is_set || is_set(hmac_sha_256.operation)) leaf_name_data.push_back(hmac_sha_256.get_name_leafdata());
    if (hmac_sha_384.is_set || is_set(hmac_sha_384.operation)) leaf_name_data.push_back(hmac_sha_384.get_name_leafdata());
    if (hmac_sha_512.is_set || is_set(hmac_sha_512.operation)) leaf_name_data.push_back(hmac_sha_512.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha_1.is_set || is_set(sha_1.operation)) leaf_name_data.push_back(sha_1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Authentication::CryptoAlgorithm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12 = value;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20 = value;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1 = value;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256 = value;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384 = value;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512 = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
    if(value_path == "sha-1")
    {
        sha_1 = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"},
    address{YType::str, "address"},
    bdr{YType::str, "bdr"},
    dr{YType::str, "dr"},
    state{YType::enumeration, "state"}
{
    yang_name = "neighbor"; yang_parent_name = "interfaces";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::~Neighbor()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| address.is_set
	|| bdr.is_set
	|| dr.is_set
	|| state.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_id.operation)
	|| is_set(address.operation)
	|| is_set(bdr.operation)
	|| is_set(dr.operation)
	|| is_set(state.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-id='" <<neighbor_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.operation)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (dr.is_set || is_set(dr.operation)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "bdr")
    {
        bdr = value;
    }
    if(value_path == "dr")
    {
        dr = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsas()
    :
    lsa_type{YType::uint8, "lsa-type"}
{
    yang_name = "link-scope-lsas"; yang_parent_name = "interfaces";
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
    return is_set(operation)
	|| is_set(lsa_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-scope-lsas" <<"[lsa-type='" <<lsa_type <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkScopeLsas' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
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

    yang_name = "link-scope-lsa"; yang_parent_name = "link-scope-lsas";
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
    return is_set(operation)
	|| is_set(lsa_id.operation)
	|| is_set(adv_router.operation)
	|| is_set(decoded_completed.operation)
	|| is_set(raw_data.operation)
	|| (ospfv2 !=  nullptr && ospfv2->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-scope-lsa" <<"[lsa-id='" <<lsa_id <<"']" <<"[adv-router='" <<adv_router <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkScopeLsa' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.operation)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.operation)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (decoded_completed.is_set || is_set(decoded_completed.operation)) leaf_name_data.push_back(decoded_completed.get_name_leafdata());
    if (raw_data.is_set || is_set(raw_data.operation)) leaf_name_data.push_back(raw_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed = value;
    }
    if(value_path == "raw-data")
    {
        raw_data = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Ospfv2()
    :
    body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body>())
	,header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header>())
{
    body->parent = this;

    header->parent = this;

    yang_name = "ospfv2"; yang_parent_name = "link-scope-lsa";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::~Ospfv2()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::has_data() const
{
    return (body !=  nullptr && body->has_data())
	|| (header !=  nullptr && header->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::has_operation() const
{
    return is_set(operation)
	|| (body !=  nullptr && body->has_operation())
	|| (header !=  nullptr && header->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv2' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body>();
        }
        return body;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header>();
        }
        return header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(body != nullptr)
    {
        children["body"] = body;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::Header()
    :
    adv_router{YType::str, "adv-router"},
    age{YType::uint16, "age"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    lsa_id{YType::str, "lsa-id"},
    opaque_id{YType::uint32, "opaque-id"},
    opaque_type{YType::uint8, "opaque-type"},
    options{YType::bits, "options"},
    seq_num{YType::str, "seq-num"},
    type{YType::uint16, "type"}
{
    yang_name = "header"; yang_parent_name = "ospfv2";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::has_data() const
{
    return adv_router.is_set
	|| age.is_set
	|| checksum.is_set
	|| length.is_set
	|| lsa_id.is_set
	|| opaque_id.is_set
	|| opaque_type.is_set
	|| options.is_set
	|| seq_num.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_router.operation)
	|| is_set(age.operation)
	|| is_set(checksum.operation)
	|| is_set(length.operation)
	|| is_set(lsa_id.operation)
	|| is_set(opaque_id.operation)
	|| is_set(opaque_type.operation)
	|| is_set(options.operation)
	|| is_set(seq_num.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_router.is_set || is_set(adv_router.operation)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (age.is_set || is_set(age.operation)) leaf_name_data.push_back(age.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.operation)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.operation)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (opaque_type.is_set || is_set(opaque_type.operation)) leaf_name_data.push_back(opaque_type.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.operation)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-router")
    {
        adv_router = value;
    }
    if(value_path == "age")
    {
        age = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
    }
    if(value_path == "opaque-type")
    {
        opaque_type = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Body()
    :
    external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network>())
	,opaque(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque>())
	,router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router>())
	,summary(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary>())
{
    external->parent = this;

    network->parent = this;

    opaque->parent = this;

    router->parent = this;

    summary->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv2";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (opaque !=  nullptr && opaque->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (opaque !=  nullptr && opaque->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Body' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External>();
        }
        return external;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "opaque")
    {
        if(opaque == nullptr)
        {
            opaque = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque>();
        }
        return opaque;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router>();
        }
        return router;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(opaque != nullptr)
    {
        children["opaque"] = opaque;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    num_of_links{YType::uint16, "num-of-links"}
{
    yang_name = "router"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(num_of_links.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Router' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (num_of_links.is_set || is_set(num_of_links.operation)) leaf_name_data.push_back(num_of_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "num-of-links")
    {
        num_of_links = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Link()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    type{YType::uint8, "type"}
{
    yang_name = "link"; yang_parent_name = "router";
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
    return is_set(operation)
	|| is_set(link_id.operation)
	|| is_set(link_data.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[link-id='" <<link_id <<"']" <<"[link-data='" <<link_data <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.operation)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-data")
    {
        link_data = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint16, "metric"}
{
    yang_name = "topology"; yang_parent_name = "link";
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
    return is_set(operation)
	|| is_set(mt_id.operation)
	|| is_set(metric.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.operation)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Router::Link::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::Network()
    :
    attached_router{YType::str, "attached-router"},
    network_mask{YType::str, "network-mask"}
{
    yang_name = "network"; yang_parent_name = "body";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(attached_router.operation)
	|| is_set(network_mask.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.operation)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
    if(value_path == "network-mask")
    {
        network_mask = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Summary()
    :
    network_mask{YType::str, "network-mask"}
{
    yang_name = "summary"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(network_mask.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.operation)) leaf_name_data.push_back(network_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint32, "metric"}
{
    yang_name = "topology"; yang_parent_name = "summary";
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
    return is_set(operation)
	|| is_set(mt_id.operation)
	|| is_set(metric.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.operation)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Summary::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::External()
    :
    network_mask{YType::str, "network-mask"}
{
    yang_name = "external"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(network_mask.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.operation)) leaf_name_data.push_back(network_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    external_route_tag{YType::uint32, "external-route-tag"},
    flags{YType::bits, "flags"},
    forwarding_address{YType::str, "forwarding-address"},
    metric{YType::uint32, "metric"}
{
    yang_name = "topology"; yang_parent_name = "external";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::has_data() const
{
    return mt_id.is_set
	|| external_route_tag.is_set
	|| flags.is_set
	|| forwarding_address.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::has_operation() const
{
    return is_set(operation)
	|| is_set(mt_id.operation)
	|| is_set(external_route_tag.operation)
	|| is_set(flags.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(metric.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.operation)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.operation)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::External::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::Opaque()
    :
    link_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv>())
	,router_address_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>())
{
    link_tlv->parent = this;

    router_address_tlv->parent = this;

    yang_name = "opaque"; yang_parent_name = "body";
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
    return (link_tlv !=  nullptr && link_tlv->has_data())
	|| (router_address_tlv !=  nullptr && router_address_tlv->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::has_operation() const
{
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (link_tlv !=  nullptr && link_tlv->has_operation())
	|| (router_address_tlv !=  nullptr && router_address_tlv->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opaque' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tlv")
    {
        if(link_tlv == nullptr)
        {
            link_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv>();
        }
        return link_tlv;
    }

    if(child_yang_name == "router-address-tlv")
    {
        if(router_address_tlv == nullptr)
        {
            router_address_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>();
        }
        return router_address_tlv;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_tlv != nullptr)
    {
        children["link-tlv"] = link_tlv;
    }

    if(router_address_tlv != nullptr)
    {
        children["router-address-tlv"] = router_address_tlv;
    }

    for (auto const & c : unknown_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::UnknownTlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{
    yang_name = "unknown-tlv"; yang_parent_name = "opaque";
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
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(length.operation)
	|| is_set(value_.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownTlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::RouterAddressTlv()
    :
    router_address{YType::str, "router-address"}
{
    yang_name = "router-address-tlv"; yang_parent_name = "opaque";
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
    return is_set(operation)
	|| is_set(router_address.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-address-tlv";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterAddressTlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_address.is_set || is_set(router_address.operation)) leaf_name_data.push_back(router_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-address")
    {
        router_address = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::LinkTlv()
    :
    admin_group{YType::uint32, "admin-group"},
    link_id{YType::str, "link-id"},
    link_type{YType::uint8, "link-type"},
    local_if_ipv4_addr{YType::str, "local-if-ipv4-addr"},
    local_remote_ipv4_addr{YType::str, "local-remote-ipv4-addr"},
    max_bandwidth{YType::str, "max-bandwidth"},
    max_reservable_bandwidth{YType::str, "max-reservable-bandwidth"},
    te_metric{YType::uint32, "te-metric"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"}
{
    yang_name = "link-tlv"; yang_parent_name = "opaque";
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
    return admin_group.is_set
	|| link_id.is_set
	|| link_type.is_set
	|| max_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| te_metric.is_set
	|| unreserved_bandwidth.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(admin_group.operation)
	|| is_set(link_id.operation)
	|| is_set(link_type.operation)
	|| is_set(local_if_ipv4_addr.operation)
	|| is_set(local_remote_ipv4_addr.operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_reservable_bandwidth.operation)
	|| is_set(te_metric.operation)
	|| is_set(unreserved_bandwidth.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tlv";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkTlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_group.is_set || is_set(admin_group.operation)) leaf_name_data.push_back(admin_group.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.operation)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.operation)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());

    auto local_if_ipv4_addr_name_datas = local_if_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_if_ipv4_addr_name_datas.begin(), local_if_ipv4_addr_name_datas.end());
    auto local_remote_ipv4_addr_name_datas = local_remote_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_remote_ipv4_addr_name_datas.begin(), local_remote_ipv4_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-group")
    {
        admin_group = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.append(value);
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.append(value);
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::UnknownSubtlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{
    yang_name = "unknown-subtlv"; yang_parent_name = "link-tlv";
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
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(length.operation)
	|| is_set(value_.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-subtlv" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownSubtlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Ospfv3()
    :
    body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body>())
	,header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header>())
{
    body->parent = this;

    header->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "link-scope-lsa";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::~Ospfv3()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::has_data() const
{
    return (body !=  nullptr && body->has_data())
	|| (header !=  nullptr && header->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::has_operation() const
{
    return is_set(operation)
	|| (body !=  nullptr && body->has_operation())
	|| (header !=  nullptr && header->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body>();
        }
        return body;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header>();
        }
        return header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(body != nullptr)
    {
        children["body"] = body;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::Header()
    :
    adv_router{YType::str, "adv-router"},
    age{YType::uint16, "age"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    lsa_id{YType::uint32, "lsa-id"},
    options{YType::bits, "options"},
    seq_num{YType::str, "seq-num"},
    type{YType::uint16, "type"}
{
    yang_name = "header"; yang_parent_name = "ospfv3";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::has_data() const
{
    return adv_router.is_set
	|| age.is_set
	|| checksum.is_set
	|| length.is_set
	|| lsa_id.is_set
	|| options.is_set
	|| seq_num.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_router.operation)
	|| is_set(age.operation)
	|| is_set(checksum.operation)
	|| is_set(length.operation)
	|| is_set(lsa_id.operation)
	|| is_set(options.operation)
	|| is_set(seq_num.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_router.is_set || is_set(adv_router.operation)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (age.is_set || is_set(age.operation)) leaf_name_data.push_back(age.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.operation)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.operation)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-router")
    {
        adv_router = value;
    }
    if(value_path == "age")
    {
        age = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Body()
    :
    as_external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal>())
	,inter_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix>())
	,inter_area_router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter>())
	,intra_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix>())
	,link(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network>())
	,nssa(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa>())
	,router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router>())
{
    as_external->parent = this;

    inter_area_prefix->parent = this;

    inter_area_router->parent = this;

    intra_area_prefix->parent = this;

    link->parent = this;

    network->parent = this;

    nssa->parent = this;

    router->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv3";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::has_data() const
{
    return (as_external !=  nullptr && as_external->has_data())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_data())
	|| (inter_area_router !=  nullptr && inter_area_router->has_data())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (router !=  nullptr && router->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::has_operation() const
{
    return is_set(operation)
	|| (as_external !=  nullptr && as_external->has_operation())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_operation())
	|| (inter_area_router !=  nullptr && inter_area_router->has_operation())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (router !=  nullptr && router->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Body' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-external")
    {
        if(as_external == nullptr)
        {
            as_external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal>();
        }
        return as_external;
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

    if(child_yang_name == "intra-area-prefix")
    {
        if(intra_area_prefix == nullptr)
        {
            intra_area_prefix = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix>();
        }
        return intra_area_prefix;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link>();
        }
        return link;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router>();
        }
        return router;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_external != nullptr)
    {
        children["as-external"] = as_external;
    }

    if(inter_area_prefix != nullptr)
    {
        children["inter-area-prefix"] = inter_area_prefix;
    }

    if(inter_area_router != nullptr)
    {
        children["inter-area-router"] = inter_area_router;
    }

    if(intra_area_prefix != nullptr)
    {
        children["intra-area-prefix"] = intra_area_prefix;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    options{YType::bits, "options"}
{
    yang_name = "router"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Router' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::set_value(const std::string & value_path, std::string value)
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

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::Link()
    :
    interface_id{YType::uint32, "interface-id"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_router_id{YType::str, "neighbor-router-id"},
    metric{YType::uint16, "metric"},
    type{YType::uint8, "type"}
{
    yang_name = "link"; yang_parent_name = "router";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::has_data() const
{
    return interface_id.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_router_id.is_set
	|| metric.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_id.operation)
	|| is_set(neighbor_interface_id.operation)
	|| is_set(neighbor_router_id.operation)
	|| is_set(metric.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-id='" <<interface_id <<"']" <<"[neighbor-interface-id='" <<neighbor_interface_id <<"']" <<"[neighbor-router-id='" <<neighbor_router_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.operation)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.operation)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Router::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::Network()
    :
    attached_router{YType::str, "attached-router"},
    options{YType::bits, "options"}
{
    yang_name = "network"; yang_parent_name = "body";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(attached_router.operation)
	|| is_set(options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::InterAreaPrefix()
    :
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{
    yang_name = "inter-area-prefix"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaPrefix' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::InterAreaRouter()
    :
    destination_router_id{YType::str, "destination-router-id"},
    metric{YType::uint32, "metric"},
    options{YType::bits, "options"}
{
    yang_name = "inter-area-router"; yang_parent_name = "body";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::~InterAreaRouter()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::has_data() const
{
    return destination_router_id.is_set
	|| metric.is_set
	|| options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_router_id.operation)
	|| is_set(metric.operation)
	|| is_set(options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaRouter' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_router_id.is_set || is_set(destination_router_id.operation)) leaf_name_data.push_back(destination_router_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::InterAreaRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-router-id")
    {
        destination_router_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::AsExternal()
    :
    external_route_tag{YType::uint32, "external-route-tag"},
    flags{YType::bits, "flags"},
    forwarding_address{YType::str, "forwarding-address"},
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"}
{
    yang_name = "as-external"; yang_parent_name = "body";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::~AsExternal()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::has_data() const
{
    return external_route_tag.is_set
	|| flags.is_set
	|| forwarding_address.is_set
	|| metric.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| referenced_link_state_id.is_set
	|| referenced_ls_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(external_route_tag.operation)
	|| is_set(flags.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(metric.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation)
	|| is_set(referenced_link_state_id.operation)
	|| is_set(referenced_ls_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-external";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsExternal' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_tag.is_set || is_set(external_route_tag.operation)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.operation)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.operation)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::AsExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::Nssa()
    :
    external_route_tag{YType::uint32, "external-route-tag"},
    flags{YType::bits, "flags"},
    forwarding_address{YType::str, "forwarding-address"},
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"}
{
    yang_name = "nssa"; yang_parent_name = "body";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::~Nssa()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::has_data() const
{
    return external_route_tag.is_set
	|| flags.is_set
	|| forwarding_address.is_set
	|| metric.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| referenced_link_state_id.is_set
	|| referenced_ls_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::has_operation() const
{
    return is_set(operation)
	|| is_set(external_route_tag.operation)
	|| is_set(flags.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(metric.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation)
	|| is_set(referenced_link_state_id.operation)
	|| is_set(referenced_ls_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nssa' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_tag.is_set || is_set(external_route_tag.operation)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.operation)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.operation)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Nssa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::Link()
    :
    link_local_interface_address{YType::str, "link-local-interface-address"},
    num_of_prefixes{YType::uint32, "num-of-prefixes"},
    options{YType::bits, "options"},
    rtr_priority{YType::uint8, "rtr-priority"}
{
    yang_name = "link"; yang_parent_name = "body";
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
    return link_local_interface_address.is_set
	|| num_of_prefixes.is_set
	|| options.is_set
	|| rtr_priority.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(link_local_interface_address.operation)
	|| is_set(num_of_prefixes.operation)
	|| is_set(options.operation)
	|| is_set(rtr_priority.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_local_interface_address.is_set || is_set(link_local_interface_address.operation)) leaf_name_data.push_back(link_local_interface_address.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.operation)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());
    if (rtr_priority.is_set || is_set(rtr_priority.operation)) leaf_name_data.push_back(rtr_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address = value;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "rtr-priority")
    {
        rtr_priority = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{
    yang_name = "prefix-list"; yang_parent_name = "link";
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
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::Link::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::IntraAreaPrefix()
    :
    num_of_prefixes{YType::uint16, "num-of-prefixes"},
    referenced_adv_router{YType::str, "referenced-adv-router"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"}
{
    yang_name = "intra-area-prefix"; yang_parent_name = "body";
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
    return num_of_prefixes.is_set
	|| referenced_adv_router.is_set
	|| referenced_link_state_id.is_set
	|| referenced_ls_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(num_of_prefixes.operation)
	|| is_set(referenced_adv_router.operation)
	|| is_set(referenced_link_state_id.operation)
	|| is_set(referenced_ls_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IntraAreaPrefix' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_of_prefixes.is_set || is_set(num_of_prefixes.operation)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());
    if (referenced_adv_router.is_set || is_set(referenced_adv_router.operation)) leaf_name_data.push_back(referenced_adv_router.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.operation)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.operation)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router = value;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    metric{YType::uint32, "metric"},
    prefix_options{YType::str, "prefix-options"}
{
    yang_name = "prefix-list"; yang_parent_name = "intra-area-prefix";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::~PrefixList()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_data() const
{
    return prefix.is_set
	|| metric.is_set
	|| prefix_options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(metric.operation)
	|| is_set(prefix_options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::LinkScopeLsas::LinkScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::Topology()
    :
    name{YType::str, "name"}
{
    yang_name = "topology"; yang_parent_name = "interfaces";
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
    return is_set(operation)
	|| is_set(name.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsas()
    :
    lsa_type{YType::uint8, "lsa-type"}
{
    yang_name = "area-scope-lsas"; yang_parent_name = "area";
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
    return is_set(operation)
	|| is_set(lsa_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope-lsas" <<"[lsa-type='" <<lsa_type <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaScopeLsas' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
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

    yang_name = "area-scope-lsa"; yang_parent_name = "area-scope-lsas";
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
    return is_set(operation)
	|| is_set(lsa_id.operation)
	|| is_set(adv_router.operation)
	|| is_set(decoded_completed.operation)
	|| is_set(raw_data.operation)
	|| (ospfv2 !=  nullptr && ospfv2->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope-lsa" <<"[lsa-id='" <<lsa_id <<"']" <<"[adv-router='" <<adv_router <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaScopeLsa' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.operation)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.operation)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (decoded_completed.is_set || is_set(decoded_completed.operation)) leaf_name_data.push_back(decoded_completed.get_name_leafdata());
    if (raw_data.is_set || is_set(raw_data.operation)) leaf_name_data.push_back(raw_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed = value;
    }
    if(value_path == "raw-data")
    {
        raw_data = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Ospfv2()
    :
    body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body>())
	,header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header>())
{
    body->parent = this;

    header->parent = this;

    yang_name = "ospfv2"; yang_parent_name = "area-scope-lsa";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::~Ospfv2()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::has_data() const
{
    return (body !=  nullptr && body->has_data())
	|| (header !=  nullptr && header->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::has_operation() const
{
    return is_set(operation)
	|| (body !=  nullptr && body->has_operation())
	|| (header !=  nullptr && header->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv2' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body>();
        }
        return body;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header>();
        }
        return header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(body != nullptr)
    {
        children["body"] = body;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::Header()
    :
    adv_router{YType::str, "adv-router"},
    age{YType::uint16, "age"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    lsa_id{YType::str, "lsa-id"},
    opaque_id{YType::uint32, "opaque-id"},
    opaque_type{YType::uint8, "opaque-type"},
    options{YType::bits, "options"},
    seq_num{YType::str, "seq-num"},
    type{YType::uint16, "type"}
{
    yang_name = "header"; yang_parent_name = "ospfv2";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::has_data() const
{
    return adv_router.is_set
	|| age.is_set
	|| checksum.is_set
	|| length.is_set
	|| lsa_id.is_set
	|| opaque_id.is_set
	|| opaque_type.is_set
	|| options.is_set
	|| seq_num.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_router.operation)
	|| is_set(age.operation)
	|| is_set(checksum.operation)
	|| is_set(length.operation)
	|| is_set(lsa_id.operation)
	|| is_set(opaque_id.operation)
	|| is_set(opaque_type.operation)
	|| is_set(options.operation)
	|| is_set(seq_num.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_router.is_set || is_set(adv_router.operation)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (age.is_set || is_set(age.operation)) leaf_name_data.push_back(age.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.operation)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.operation)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (opaque_type.is_set || is_set(opaque_type.operation)) leaf_name_data.push_back(opaque_type.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.operation)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-router")
    {
        adv_router = value;
    }
    if(value_path == "age")
    {
        age = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
    }
    if(value_path == "opaque-type")
    {
        opaque_type = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Body()
    :
    external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network>())
	,opaque(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque>())
	,router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router>())
	,summary(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary>())
{
    external->parent = this;

    network->parent = this;

    opaque->parent = this;

    router->parent = this;

    summary->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv2";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (opaque !=  nullptr && opaque->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (opaque !=  nullptr && opaque->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Body' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External>();
        }
        return external;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "opaque")
    {
        if(opaque == nullptr)
        {
            opaque = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque>();
        }
        return opaque;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router>();
        }
        return router;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(opaque != nullptr)
    {
        children["opaque"] = opaque;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    num_of_links{YType::uint16, "num-of-links"}
{
    yang_name = "router"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(num_of_links.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Router' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (num_of_links.is_set || is_set(num_of_links.operation)) leaf_name_data.push_back(num_of_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "num-of-links")
    {
        num_of_links = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Link()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    type{YType::uint8, "type"}
{
    yang_name = "link"; yang_parent_name = "router";
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
    return is_set(operation)
	|| is_set(link_id.operation)
	|| is_set(link_data.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[link-id='" <<link_id <<"']" <<"[link-data='" <<link_data <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.operation)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-data")
    {
        link_data = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint16, "metric"}
{
    yang_name = "topology"; yang_parent_name = "link";
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
    return is_set(operation)
	|| is_set(mt_id.operation)
	|| is_set(metric.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.operation)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Router::Link::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::Network()
    :
    attached_router{YType::str, "attached-router"},
    network_mask{YType::str, "network-mask"}
{
    yang_name = "network"; yang_parent_name = "body";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(attached_router.operation)
	|| is_set(network_mask.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.operation)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
    if(value_path == "network-mask")
    {
        network_mask = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Summary()
    :
    network_mask{YType::str, "network-mask"}
{
    yang_name = "summary"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(network_mask.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.operation)) leaf_name_data.push_back(network_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint32, "metric"}
{
    yang_name = "topology"; yang_parent_name = "summary";
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
    return is_set(operation)
	|| is_set(mt_id.operation)
	|| is_set(metric.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.operation)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Summary::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::External()
    :
    network_mask{YType::str, "network-mask"}
{
    yang_name = "external"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(network_mask.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.operation)) leaf_name_data.push_back(network_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    external_route_tag{YType::uint32, "external-route-tag"},
    flags{YType::bits, "flags"},
    forwarding_address{YType::str, "forwarding-address"},
    metric{YType::uint32, "metric"}
{
    yang_name = "topology"; yang_parent_name = "external";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::has_data() const
{
    return mt_id.is_set
	|| external_route_tag.is_set
	|| flags.is_set
	|| forwarding_address.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::has_operation() const
{
    return is_set(operation)
	|| is_set(mt_id.operation)
	|| is_set(external_route_tag.operation)
	|| is_set(flags.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(metric.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.operation)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.operation)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::External::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::Opaque()
    :
    link_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv>())
	,router_address_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>())
{
    link_tlv->parent = this;

    router_address_tlv->parent = this;

    yang_name = "opaque"; yang_parent_name = "body";
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
    return (link_tlv !=  nullptr && link_tlv->has_data())
	|| (router_address_tlv !=  nullptr && router_address_tlv->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::has_operation() const
{
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (link_tlv !=  nullptr && link_tlv->has_operation())
	|| (router_address_tlv !=  nullptr && router_address_tlv->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opaque' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tlv")
    {
        if(link_tlv == nullptr)
        {
            link_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv>();
        }
        return link_tlv;
    }

    if(child_yang_name == "router-address-tlv")
    {
        if(router_address_tlv == nullptr)
        {
            router_address_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>();
        }
        return router_address_tlv;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_tlv != nullptr)
    {
        children["link-tlv"] = link_tlv;
    }

    if(router_address_tlv != nullptr)
    {
        children["router-address-tlv"] = router_address_tlv;
    }

    for (auto const & c : unknown_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::UnknownTlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{
    yang_name = "unknown-tlv"; yang_parent_name = "opaque";
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
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(length.operation)
	|| is_set(value_.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownTlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::RouterAddressTlv()
    :
    router_address{YType::str, "router-address"}
{
    yang_name = "router-address-tlv"; yang_parent_name = "opaque";
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
    return is_set(operation)
	|| is_set(router_address.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-address-tlv";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterAddressTlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_address.is_set || is_set(router_address.operation)) leaf_name_data.push_back(router_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-address")
    {
        router_address = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::LinkTlv()
    :
    admin_group{YType::uint32, "admin-group"},
    link_id{YType::str, "link-id"},
    link_type{YType::uint8, "link-type"},
    local_if_ipv4_addr{YType::str, "local-if-ipv4-addr"},
    local_remote_ipv4_addr{YType::str, "local-remote-ipv4-addr"},
    max_bandwidth{YType::str, "max-bandwidth"},
    max_reservable_bandwidth{YType::str, "max-reservable-bandwidth"},
    te_metric{YType::uint32, "te-metric"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"}
{
    yang_name = "link-tlv"; yang_parent_name = "opaque";
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
    return admin_group.is_set
	|| link_id.is_set
	|| link_type.is_set
	|| max_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| te_metric.is_set
	|| unreserved_bandwidth.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(admin_group.operation)
	|| is_set(link_id.operation)
	|| is_set(link_type.operation)
	|| is_set(local_if_ipv4_addr.operation)
	|| is_set(local_remote_ipv4_addr.operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_reservable_bandwidth.operation)
	|| is_set(te_metric.operation)
	|| is_set(unreserved_bandwidth.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tlv";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkTlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_group.is_set || is_set(admin_group.operation)) leaf_name_data.push_back(admin_group.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.operation)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.operation)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());

    auto local_if_ipv4_addr_name_datas = local_if_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_if_ipv4_addr_name_datas.begin(), local_if_ipv4_addr_name_datas.end());
    auto local_remote_ipv4_addr_name_datas = local_remote_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_remote_ipv4_addr_name_datas.begin(), local_remote_ipv4_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-group")
    {
        admin_group = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.append(value);
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.append(value);
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::UnknownSubtlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{
    yang_name = "unknown-subtlv"; yang_parent_name = "link-tlv";
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
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(length.operation)
	|| is_set(value_.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-subtlv" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownSubtlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Ospfv3()
    :
    body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body>())
	,header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header>())
{
    body->parent = this;

    header->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "area-scope-lsa";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::~Ospfv3()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::has_data() const
{
    return (body !=  nullptr && body->has_data())
	|| (header !=  nullptr && header->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::has_operation() const
{
    return is_set(operation)
	|| (body !=  nullptr && body->has_operation())
	|| (header !=  nullptr && header->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body>();
        }
        return body;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header>();
        }
        return header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(body != nullptr)
    {
        children["body"] = body;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::Header()
    :
    adv_router{YType::str, "adv-router"},
    age{YType::uint16, "age"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    lsa_id{YType::uint32, "lsa-id"},
    options{YType::bits, "options"},
    seq_num{YType::str, "seq-num"},
    type{YType::uint16, "type"}
{
    yang_name = "header"; yang_parent_name = "ospfv3";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::has_data() const
{
    return adv_router.is_set
	|| age.is_set
	|| checksum.is_set
	|| length.is_set
	|| lsa_id.is_set
	|| options.is_set
	|| seq_num.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_router.operation)
	|| is_set(age.operation)
	|| is_set(checksum.operation)
	|| is_set(length.operation)
	|| is_set(lsa_id.operation)
	|| is_set(options.operation)
	|| is_set(seq_num.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_router.is_set || is_set(adv_router.operation)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (age.is_set || is_set(age.operation)) leaf_name_data.push_back(age.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.operation)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.operation)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-router")
    {
        adv_router = value;
    }
    if(value_path == "age")
    {
        age = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Body()
    :
    as_external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal>())
	,inter_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix>())
	,inter_area_router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter>())
	,intra_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix>())
	,link(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network>())
	,nssa(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa>())
	,router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router>())
{
    as_external->parent = this;

    inter_area_prefix->parent = this;

    inter_area_router->parent = this;

    intra_area_prefix->parent = this;

    link->parent = this;

    network->parent = this;

    nssa->parent = this;

    router->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv3";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::has_data() const
{
    return (as_external !=  nullptr && as_external->has_data())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_data())
	|| (inter_area_router !=  nullptr && inter_area_router->has_data())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (router !=  nullptr && router->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::has_operation() const
{
    return is_set(operation)
	|| (as_external !=  nullptr && as_external->has_operation())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_operation())
	|| (inter_area_router !=  nullptr && inter_area_router->has_operation())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (router !=  nullptr && router->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Body' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-external")
    {
        if(as_external == nullptr)
        {
            as_external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal>();
        }
        return as_external;
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

    if(child_yang_name == "intra-area-prefix")
    {
        if(intra_area_prefix == nullptr)
        {
            intra_area_prefix = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix>();
        }
        return intra_area_prefix;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link>();
        }
        return link;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router>();
        }
        return router;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_external != nullptr)
    {
        children["as-external"] = as_external;
    }

    if(inter_area_prefix != nullptr)
    {
        children["inter-area-prefix"] = inter_area_prefix;
    }

    if(inter_area_router != nullptr)
    {
        children["inter-area-router"] = inter_area_router;
    }

    if(intra_area_prefix != nullptr)
    {
        children["intra-area-prefix"] = intra_area_prefix;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    options{YType::bits, "options"}
{
    yang_name = "router"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Router' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::set_value(const std::string & value_path, std::string value)
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

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::Link()
    :
    interface_id{YType::uint32, "interface-id"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_router_id{YType::str, "neighbor-router-id"},
    metric{YType::uint16, "metric"},
    type{YType::uint8, "type"}
{
    yang_name = "link"; yang_parent_name = "router";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::has_data() const
{
    return interface_id.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_router_id.is_set
	|| metric.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_id.operation)
	|| is_set(neighbor_interface_id.operation)
	|| is_set(neighbor_router_id.operation)
	|| is_set(metric.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-id='" <<interface_id <<"']" <<"[neighbor-interface-id='" <<neighbor_interface_id <<"']" <<"[neighbor-router-id='" <<neighbor_router_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.operation)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.operation)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Router::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::Network()
    :
    attached_router{YType::str, "attached-router"},
    options{YType::bits, "options"}
{
    yang_name = "network"; yang_parent_name = "body";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(attached_router.operation)
	|| is_set(options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::InterAreaPrefix()
    :
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{
    yang_name = "inter-area-prefix"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaPrefix' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::InterAreaRouter()
    :
    destination_router_id{YType::str, "destination-router-id"},
    metric{YType::uint32, "metric"},
    options{YType::bits, "options"}
{
    yang_name = "inter-area-router"; yang_parent_name = "body";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::~InterAreaRouter()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::has_data() const
{
    return destination_router_id.is_set
	|| metric.is_set
	|| options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_router_id.operation)
	|| is_set(metric.operation)
	|| is_set(options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaRouter' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_router_id.is_set || is_set(destination_router_id.operation)) leaf_name_data.push_back(destination_router_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::InterAreaRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-router-id")
    {
        destination_router_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::AsExternal()
    :
    external_route_tag{YType::uint32, "external-route-tag"},
    flags{YType::bits, "flags"},
    forwarding_address{YType::str, "forwarding-address"},
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"}
{
    yang_name = "as-external"; yang_parent_name = "body";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::~AsExternal()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::has_data() const
{
    return external_route_tag.is_set
	|| flags.is_set
	|| forwarding_address.is_set
	|| metric.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| referenced_link_state_id.is_set
	|| referenced_ls_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(external_route_tag.operation)
	|| is_set(flags.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(metric.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation)
	|| is_set(referenced_link_state_id.operation)
	|| is_set(referenced_ls_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-external";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsExternal' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_tag.is_set || is_set(external_route_tag.operation)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.operation)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.operation)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::AsExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::Nssa()
    :
    external_route_tag{YType::uint32, "external-route-tag"},
    flags{YType::bits, "flags"},
    forwarding_address{YType::str, "forwarding-address"},
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"}
{
    yang_name = "nssa"; yang_parent_name = "body";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::~Nssa()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::has_data() const
{
    return external_route_tag.is_set
	|| flags.is_set
	|| forwarding_address.is_set
	|| metric.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| referenced_link_state_id.is_set
	|| referenced_ls_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::has_operation() const
{
    return is_set(operation)
	|| is_set(external_route_tag.operation)
	|| is_set(flags.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(metric.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation)
	|| is_set(referenced_link_state_id.operation)
	|| is_set(referenced_ls_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nssa' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_tag.is_set || is_set(external_route_tag.operation)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.operation)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.operation)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Nssa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::Link()
    :
    link_local_interface_address{YType::str, "link-local-interface-address"},
    num_of_prefixes{YType::uint32, "num-of-prefixes"},
    options{YType::bits, "options"},
    rtr_priority{YType::uint8, "rtr-priority"}
{
    yang_name = "link"; yang_parent_name = "body";
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
    return link_local_interface_address.is_set
	|| num_of_prefixes.is_set
	|| options.is_set
	|| rtr_priority.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(link_local_interface_address.operation)
	|| is_set(num_of_prefixes.operation)
	|| is_set(options.operation)
	|| is_set(rtr_priority.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_local_interface_address.is_set || is_set(link_local_interface_address.operation)) leaf_name_data.push_back(link_local_interface_address.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.operation)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());
    if (rtr_priority.is_set || is_set(rtr_priority.operation)) leaf_name_data.push_back(rtr_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address = value;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "rtr-priority")
    {
        rtr_priority = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{
    yang_name = "prefix-list"; yang_parent_name = "link";
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
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::Link::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::IntraAreaPrefix()
    :
    num_of_prefixes{YType::uint16, "num-of-prefixes"},
    referenced_adv_router{YType::str, "referenced-adv-router"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"}
{
    yang_name = "intra-area-prefix"; yang_parent_name = "body";
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
    return num_of_prefixes.is_set
	|| referenced_adv_router.is_set
	|| referenced_link_state_id.is_set
	|| referenced_ls_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(num_of_prefixes.operation)
	|| is_set(referenced_adv_router.operation)
	|| is_set(referenced_link_state_id.operation)
	|| is_set(referenced_ls_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IntraAreaPrefix' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_of_prefixes.is_set || is_set(num_of_prefixes.operation)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());
    if (referenced_adv_router.is_set || is_set(referenced_adv_router.operation)) leaf_name_data.push_back(referenced_adv_router.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.operation)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.operation)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router = value;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    metric{YType::uint32, "metric"},
    prefix_options{YType::str, "prefix-options"}
{
    yang_name = "prefix-list"; yang_parent_name = "intra-area-prefix";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::~PrefixList()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_data() const
{
    return prefix.is_set
	|| metric.is_set
	|| prefix_options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(metric.operation)
	|| is_set(prefix_options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AreaScopeLsas::AreaScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsas()
    :
    lsa_type{YType::uint8, "lsa-type"}
{
    yang_name = "as-scope-lsas"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| is_set(lsa_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-scope-lsas" <<"[lsa-type='" <<lsa_type <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsScopeLsas' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
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

    yang_name = "as-scope-lsa"; yang_parent_name = "as-scope-lsas";
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
    return is_set(operation)
	|| is_set(lsa_id.operation)
	|| is_set(adv_router.operation)
	|| is_set(decoded_completed.operation)
	|| is_set(raw_data.operation)
	|| (ospfv2 !=  nullptr && ospfv2->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-scope-lsa" <<"[lsa-id='" <<lsa_id <<"']" <<"[adv-router='" <<adv_router <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsScopeLsa' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.operation)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.operation)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (decoded_completed.is_set || is_set(decoded_completed.operation)) leaf_name_data.push_back(decoded_completed.get_name_leafdata());
    if (raw_data.is_set || is_set(raw_data.operation)) leaf_name_data.push_back(raw_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed = value;
    }
    if(value_path == "raw-data")
    {
        raw_data = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Ospfv2()
    :
    body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body>())
	,header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header>())
{
    body->parent = this;

    header->parent = this;

    yang_name = "ospfv2"; yang_parent_name = "as-scope-lsa";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::~Ospfv2()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::has_data() const
{
    return (body !=  nullptr && body->has_data())
	|| (header !=  nullptr && header->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::has_operation() const
{
    return is_set(operation)
	|| (body !=  nullptr && body->has_operation())
	|| (header !=  nullptr && header->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv2' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body>();
        }
        return body;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header>();
        }
        return header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(body != nullptr)
    {
        children["body"] = body;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::Header()
    :
    adv_router{YType::str, "adv-router"},
    age{YType::uint16, "age"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    lsa_id{YType::str, "lsa-id"},
    opaque_id{YType::uint32, "opaque-id"},
    opaque_type{YType::uint8, "opaque-type"},
    options{YType::bits, "options"},
    seq_num{YType::str, "seq-num"},
    type{YType::uint16, "type"}
{
    yang_name = "header"; yang_parent_name = "ospfv2";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::has_data() const
{
    return adv_router.is_set
	|| age.is_set
	|| checksum.is_set
	|| length.is_set
	|| lsa_id.is_set
	|| opaque_id.is_set
	|| opaque_type.is_set
	|| options.is_set
	|| seq_num.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_router.operation)
	|| is_set(age.operation)
	|| is_set(checksum.operation)
	|| is_set(length.operation)
	|| is_set(lsa_id.operation)
	|| is_set(opaque_id.operation)
	|| is_set(opaque_type.operation)
	|| is_set(options.operation)
	|| is_set(seq_num.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_router.is_set || is_set(adv_router.operation)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (age.is_set || is_set(age.operation)) leaf_name_data.push_back(age.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.operation)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.operation)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (opaque_type.is_set || is_set(opaque_type.operation)) leaf_name_data.push_back(opaque_type.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.operation)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-router")
    {
        adv_router = value;
    }
    if(value_path == "age")
    {
        age = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
    }
    if(value_path == "opaque-type")
    {
        opaque_type = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Body()
    :
    external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network>())
	,opaque(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque>())
	,router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router>())
	,summary(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary>())
{
    external->parent = this;

    network->parent = this;

    opaque->parent = this;

    router->parent = this;

    summary->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv2";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (opaque !=  nullptr && opaque->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (opaque !=  nullptr && opaque->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Body' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External>();
        }
        return external;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "opaque")
    {
        if(opaque == nullptr)
        {
            opaque = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque>();
        }
        return opaque;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router>();
        }
        return router;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(opaque != nullptr)
    {
        children["opaque"] = opaque;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    num_of_links{YType::uint16, "num-of-links"}
{
    yang_name = "router"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(num_of_links.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Router' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (num_of_links.is_set || is_set(num_of_links.operation)) leaf_name_data.push_back(num_of_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "num-of-links")
    {
        num_of_links = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Link()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    type{YType::uint8, "type"}
{
    yang_name = "link"; yang_parent_name = "router";
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
    return is_set(operation)
	|| is_set(link_id.operation)
	|| is_set(link_data.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[link-id='" <<link_id <<"']" <<"[link-data='" <<link_data <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.operation)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-data")
    {
        link_data = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint16, "metric"}
{
    yang_name = "topology"; yang_parent_name = "link";
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
    return is_set(operation)
	|| is_set(mt_id.operation)
	|| is_set(metric.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.operation)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Router::Link::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::Network()
    :
    attached_router{YType::str, "attached-router"},
    network_mask{YType::str, "network-mask"}
{
    yang_name = "network"; yang_parent_name = "body";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(attached_router.operation)
	|| is_set(network_mask.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.operation)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
    if(value_path == "network-mask")
    {
        network_mask = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Summary()
    :
    network_mask{YType::str, "network-mask"}
{
    yang_name = "summary"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(network_mask.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.operation)) leaf_name_data.push_back(network_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    metric{YType::uint32, "metric"}
{
    yang_name = "topology"; yang_parent_name = "summary";
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
    return is_set(operation)
	|| is_set(mt_id.operation)
	|| is_set(metric.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.operation)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Summary::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::External()
    :
    network_mask{YType::str, "network-mask"}
{
    yang_name = "external"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(network_mask.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.operation)) leaf_name_data.push_back(network_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::Topology()
    :
    mt_id{YType::uint8, "mt-id"},
    external_route_tag{YType::uint32, "external-route-tag"},
    flags{YType::bits, "flags"},
    forwarding_address{YType::str, "forwarding-address"},
    metric{YType::uint32, "metric"}
{
    yang_name = "topology"; yang_parent_name = "external";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::~Topology()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::has_data() const
{
    return mt_id.is_set
	|| external_route_tag.is_set
	|| flags.is_set
	|| forwarding_address.is_set
	|| metric.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::has_operation() const
{
    return is_set(operation)
	|| is_set(mt_id.operation)
	|| is_set(external_route_tag.operation)
	|| is_set(flags.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(metric.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[mt-id='" <<mt_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.operation)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.operation)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::External::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::Opaque()
    :
    link_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv>())
	,router_address_tlv(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>())
{
    link_tlv->parent = this;

    router_address_tlv->parent = this;

    yang_name = "opaque"; yang_parent_name = "body";
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
    return (link_tlv !=  nullptr && link_tlv->has_data())
	|| (router_address_tlv !=  nullptr && router_address_tlv->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::has_operation() const
{
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (link_tlv !=  nullptr && link_tlv->has_operation())
	|| (router_address_tlv !=  nullptr && router_address_tlv->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opaque' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tlv")
    {
        if(link_tlv == nullptr)
        {
            link_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv>();
        }
        return link_tlv;
    }

    if(child_yang_name == "router-address-tlv")
    {
        if(router_address_tlv == nullptr)
        {
            router_address_tlv = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv>();
        }
        return router_address_tlv;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_tlv != nullptr)
    {
        children["link-tlv"] = link_tlv;
    }

    if(router_address_tlv != nullptr)
    {
        children["router-address-tlv"] = router_address_tlv;
    }

    for (auto const & c : unknown_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::UnknownTlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{
    yang_name = "unknown-tlv"; yang_parent_name = "opaque";
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
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(length.operation)
	|| is_set(value_.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownTlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::UnknownTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::RouterAddressTlv()
    :
    router_address{YType::str, "router-address"}
{
    yang_name = "router-address-tlv"; yang_parent_name = "opaque";
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
    return is_set(operation)
	|| is_set(router_address.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-address-tlv";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterAddressTlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_address.is_set || is_set(router_address.operation)) leaf_name_data.push_back(router_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::RouterAddressTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-address")
    {
        router_address = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::LinkTlv()
    :
    admin_group{YType::uint32, "admin-group"},
    link_id{YType::str, "link-id"},
    link_type{YType::uint8, "link-type"},
    local_if_ipv4_addr{YType::str, "local-if-ipv4-addr"},
    local_remote_ipv4_addr{YType::str, "local-remote-ipv4-addr"},
    max_bandwidth{YType::str, "max-bandwidth"},
    max_reservable_bandwidth{YType::str, "max-reservable-bandwidth"},
    te_metric{YType::uint32, "te-metric"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"}
{
    yang_name = "link-tlv"; yang_parent_name = "opaque";
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
    return admin_group.is_set
	|| link_id.is_set
	|| link_type.is_set
	|| max_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| te_metric.is_set
	|| unreserved_bandwidth.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(admin_group.operation)
	|| is_set(link_id.operation)
	|| is_set(link_type.operation)
	|| is_set(local_if_ipv4_addr.operation)
	|| is_set(local_remote_ipv4_addr.operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_reservable_bandwidth.operation)
	|| is_set(te_metric.operation)
	|| is_set(unreserved_bandwidth.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tlv";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkTlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_group.is_set || is_set(admin_group.operation)) leaf_name_data.push_back(admin_group.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.operation)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.operation)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());

    auto local_if_ipv4_addr_name_datas = local_if_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_if_ipv4_addr_name_datas.begin(), local_if_ipv4_addr_name_datas.end());
    auto local_remote_ipv4_addr_name_datas = local_remote_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_remote_ipv4_addr_name_datas.begin(), local_remote_ipv4_addr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-group")
    {
        admin_group = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.append(value);
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.append(value);
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::UnknownSubtlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::str, "value"}
{
    yang_name = "unknown-subtlv"; yang_parent_name = "link-tlv";
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
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(length.operation)
	|| is_set(value_.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-subtlv" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownSubtlv' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv2::Body::Opaque::LinkTlv::UnknownSubtlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Ospfv3()
    :
    body(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body>())
	,header(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header>())
{
    body->parent = this;

    header->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "as-scope-lsa";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::~Ospfv3()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::has_data() const
{
    return (body !=  nullptr && body->has_data())
	|| (header !=  nullptr && header->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::has_operation() const
{
    return is_set(operation)
	|| (body !=  nullptr && body->has_operation())
	|| (header !=  nullptr && header->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "body")
    {
        if(body == nullptr)
        {
            body = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body>();
        }
        return body;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header>();
        }
        return header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(body != nullptr)
    {
        children["body"] = body;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::Header()
    :
    adv_router{YType::str, "adv-router"},
    age{YType::uint16, "age"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    lsa_id{YType::uint32, "lsa-id"},
    options{YType::bits, "options"},
    seq_num{YType::str, "seq-num"},
    type{YType::uint16, "type"}
{
    yang_name = "header"; yang_parent_name = "ospfv3";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::~Header()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::has_data() const
{
    return adv_router.is_set
	|| age.is_set
	|| checksum.is_set
	|| length.is_set
	|| lsa_id.is_set
	|| options.is_set
	|| seq_num.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_router.operation)
	|| is_set(age.operation)
	|| is_set(checksum.operation)
	|| is_set(length.operation)
	|| is_set(lsa_id.operation)
	|| is_set(options.operation)
	|| is_set(seq_num.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_router.is_set || is_set(adv_router.operation)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (age.is_set || is_set(age.operation)) leaf_name_data.push_back(age.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.operation)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.operation)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-router")
    {
        adv_router = value;
    }
    if(value_path == "age")
    {
        age = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Body()
    :
    as_external(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal>())
	,inter_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix>())
	,inter_area_router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter>())
	,intra_area_prefix(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix>())
	,link(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link>())
	,network(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network>())
	,nssa(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa>())
	,router(std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router>())
{
    as_external->parent = this;

    inter_area_prefix->parent = this;

    inter_area_router->parent = this;

    intra_area_prefix->parent = this;

    link->parent = this;

    network->parent = this;

    nssa->parent = this;

    router->parent = this;

    yang_name = "body"; yang_parent_name = "ospfv3";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::~Body()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::has_data() const
{
    return (as_external !=  nullptr && as_external->has_data())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_data())
	|| (inter_area_router !=  nullptr && inter_area_router->has_data())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (router !=  nullptr && router->has_data());
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::has_operation() const
{
    return is_set(operation)
	|| (as_external !=  nullptr && as_external->has_operation())
	|| (inter_area_prefix !=  nullptr && inter_area_prefix->has_operation())
	|| (inter_area_router !=  nullptr && inter_area_router->has_operation())
	|| (intra_area_prefix !=  nullptr && intra_area_prefix->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (router !=  nullptr && router->has_operation());
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "body";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Body' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-external")
    {
        if(as_external == nullptr)
        {
            as_external = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal>();
        }
        return as_external;
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

    if(child_yang_name == "intra-area-prefix")
    {
        if(intra_area_prefix == nullptr)
        {
            intra_area_prefix = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix>();
        }
        return intra_area_prefix;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link>();
        }
        return link;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network>();
        }
        return network;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router>();
        }
        return router;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_external != nullptr)
    {
        children["as-external"] = as_external;
    }

    if(inter_area_prefix != nullptr)
    {
        children["inter-area-prefix"] = inter_area_prefix;
    }

    if(inter_area_router != nullptr)
    {
        children["inter-area-router"] = inter_area_router;
    }

    if(intra_area_prefix != nullptr)
    {
        children["intra-area-prefix"] = intra_area_prefix;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    return children;
}

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Router()
    :
    flags{YType::bits, "flags"},
    options{YType::bits, "options"}
{
    yang_name = "router"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Router' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::set_value(const std::string & value_path, std::string value)
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

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::Link()
    :
    interface_id{YType::uint32, "interface-id"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_router_id{YType::str, "neighbor-router-id"},
    metric{YType::uint16, "metric"},
    type{YType::uint8, "type"}
{
    yang_name = "link"; yang_parent_name = "router";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::~Link()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::has_data() const
{
    return interface_id.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_router_id.is_set
	|| metric.is_set
	|| type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_id.operation)
	|| is_set(neighbor_interface_id.operation)
	|| is_set(neighbor_router_id.operation)
	|| is_set(metric.operation)
	|| is_set(type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-id='" <<interface_id <<"']" <<"[neighbor-interface-id='" <<neighbor_interface_id <<"']" <<"[neighbor-router-id='" <<neighbor_router_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.operation)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.operation)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Router::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::Network()
    :
    attached_router{YType::str, "attached-router"},
    options{YType::bits, "options"}
{
    yang_name = "network"; yang_parent_name = "body";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(attached_router.operation)
	|| is_set(options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::InterAreaPrefix()
    :
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{
    yang_name = "inter-area-prefix"; yang_parent_name = "body";
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
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaPrefix' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::InterAreaRouter()
    :
    destination_router_id{YType::str, "destination-router-id"},
    metric{YType::uint32, "metric"},
    options{YType::bits, "options"}
{
    yang_name = "inter-area-router"; yang_parent_name = "body";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::~InterAreaRouter()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::has_data() const
{
    return destination_router_id.is_set
	|| metric.is_set
	|| options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_router_id.operation)
	|| is_set(metric.operation)
	|| is_set(options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaRouter' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_router_id.is_set || is_set(destination_router_id.operation)) leaf_name_data.push_back(destination_router_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::InterAreaRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-router-id")
    {
        destination_router_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::AsExternal()
    :
    external_route_tag{YType::uint32, "external-route-tag"},
    flags{YType::bits, "flags"},
    forwarding_address{YType::str, "forwarding-address"},
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"}
{
    yang_name = "as-external"; yang_parent_name = "body";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::~AsExternal()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::has_data() const
{
    return external_route_tag.is_set
	|| flags.is_set
	|| forwarding_address.is_set
	|| metric.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| referenced_link_state_id.is_set
	|| referenced_ls_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(external_route_tag.operation)
	|| is_set(flags.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(metric.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation)
	|| is_set(referenced_link_state_id.operation)
	|| is_set(referenced_ls_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-external";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsExternal' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_tag.is_set || is_set(external_route_tag.operation)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.operation)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.operation)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::AsExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::Nssa()
    :
    external_route_tag{YType::uint32, "external-route-tag"},
    flags{YType::bits, "flags"},
    forwarding_address{YType::str, "forwarding-address"},
    metric{YType::uint32, "metric"},
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"}
{
    yang_name = "nssa"; yang_parent_name = "body";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::~Nssa()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::has_data() const
{
    return external_route_tag.is_set
	|| flags.is_set
	|| forwarding_address.is_set
	|| metric.is_set
	|| prefix.is_set
	|| prefix_options.is_set
	|| referenced_link_state_id.is_set
	|| referenced_ls_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::has_operation() const
{
    return is_set(operation)
	|| is_set(external_route_tag.operation)
	|| is_set(flags.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(metric.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation)
	|| is_set(referenced_link_state_id.operation)
	|| is_set(referenced_ls_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nssa' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_tag.is_set || is_set(external_route_tag.operation)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.operation)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.operation)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Nssa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
    }
    if(value_path == "flags")
    {
        flags[value] = true;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::Link()
    :
    link_local_interface_address{YType::str, "link-local-interface-address"},
    num_of_prefixes{YType::uint32, "num-of-prefixes"},
    options{YType::bits, "options"},
    rtr_priority{YType::uint8, "rtr-priority"}
{
    yang_name = "link"; yang_parent_name = "body";
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
    return link_local_interface_address.is_set
	|| num_of_prefixes.is_set
	|| options.is_set
	|| rtr_priority.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(link_local_interface_address.operation)
	|| is_set(num_of_prefixes.operation)
	|| is_set(options.operation)
	|| is_set(rtr_priority.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_local_interface_address.is_set || is_set(link_local_interface_address.operation)) leaf_name_data.push_back(link_local_interface_address.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.operation)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());
    if (rtr_priority.is_set || is_set(rtr_priority.operation)) leaf_name_data.push_back(rtr_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address = value;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
    }
    if(value_path == "options")
    {
        options[value] = true;
    }
    if(value_path == "rtr-priority")
    {
        rtr_priority = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{
    yang_name = "prefix-list"; yang_parent_name = "link";
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
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::Link::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::IntraAreaPrefix()
    :
    num_of_prefixes{YType::uint16, "num-of-prefixes"},
    referenced_adv_router{YType::str, "referenced-adv-router"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"}
{
    yang_name = "intra-area-prefix"; yang_parent_name = "body";
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
    return num_of_prefixes.is_set
	|| referenced_adv_router.is_set
	|| referenced_link_state_id.is_set
	|| referenced_ls_type.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(num_of_prefixes.operation)
	|| is_set(referenced_adv_router.operation)
	|| is_set(referenced_link_state_id.operation)
	|| is_set(referenced_ls_type.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IntraAreaPrefix' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_of_prefixes.is_set || is_set(num_of_prefixes.operation)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());
    if (referenced_adv_router.is_set || is_set(referenced_adv_router.operation)) leaf_name_data.push_back(referenced_adv_router.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.operation)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.operation)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router = value;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    metric{YType::uint32, "metric"},
    prefix_options{YType::str, "prefix-options"}
{
    yang_name = "prefix-list"; yang_parent_name = "intra-area-prefix";
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::~PrefixList()
{
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_data() const
{
    return prefix.is_set
	|| metric.is_set
	|| prefix_options.is_set;
}

bool RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(metric.operation)
	|| is_set(prefix_options.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.operation)) leaf_name_data.push_back(prefix_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AsScopeLsas::AsScopeLsa::Ospfv3::Body::IntraAreaPrefix::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Topology()
    :
    name{YType::str, "name"}
{
    yang_name = "topology"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| is_set(name.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Area()
    :
    area_id{YType::str, "area-id"}
{
    yang_name = "area"; yang_parent_name = "topology";
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
    return is_set(operation)
	|| is_set(area_id.operation);
}

std::string RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
}

RoutingState::RoutingInstance::Ribs::Ribs()
{
    yang_name = "ribs"; yang_parent_name = "routing-instance";
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
    return is_set(operation);
}

std::string RoutingState::RoutingInstance::Ribs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribs";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::Ribs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ribs' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::Ribs::set_value(const std::string & value_path, std::string value)
{
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

    yang_name = "rib"; yang_parent_name = "ribs";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(address_family.operation)
	|| is_set(default_rib.operation)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string RoutingState::RoutingInstance::Ribs::Rib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::Ribs::Rib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rib' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (default_rib.is_set || is_set(default_rib.operation)) leaf_name_data.push_back(default_rib.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::Ribs::Rib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "default-rib")
    {
        default_rib = value;
    }
}

RoutingState::RoutingInstance::Ribs::Rib::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "rib";
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
    return is_set(operation);
}

std::string RoutingState::RoutingInstance::Ribs::Rib::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::Ribs::Rib::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::Ribs::Rib::Routes::set_value(const std::string & value_path, std::string value)
{
}

RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::Route()
    :
    destination_prefix{YType::str, "destination-prefix"},
    active{YType::empty, "active"},
    last_updated{YType::str, "last-updated"},
    metric{YType::uint32, "metric"},
    route_preference{YType::uint32, "route-preference"},
    route_type{YType::enumeration, "ietf-ospf:route-type"},
    source_protocol{YType::identityref, "source-protocol"},
    tag{YType::uint32, "ietf-ospf:tag"},
    update_source{YType::str, "update-source"}
    	,
    next_hop(std::make_shared<RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop>())
{
    next_hop->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::~Route()
{
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::has_data() const
{
    return destination_prefix.is_set
	|| active.is_set
	|| last_updated.is_set
	|| metric.is_set
	|| route_preference.is_set
	|| route_type.is_set
	|| source_protocol.is_set
	|| tag.is_set
	|| update_source.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_prefix.operation)
	|| is_set(active.operation)
	|| is_set(last_updated.operation)
	|| is_set(metric.operation)
	|| is_set(route_preference.operation)
	|| is_set(route_type.operation)
	|| is_set(source_protocol.operation)
	|| is_set(tag.operation)
	|| is_set(update_source.operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route" <<"[destination-prefix='" <<destination_prefix <<"']";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (last_updated.is_set || is_set(last_updated.operation)) leaf_name_data.push_back(last_updated.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_preference.is_set || is_set(route_preference.operation)) leaf_name_data.push_back(route_preference.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (update_source.is_set || is_set(update_source.operation)) leaf_name_data.push_back(update_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "last-updated")
    {
        last_updated = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-preference")
    {
        route_preference = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "update-source")
    {
        update_source = value;
    }
}

RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    outgoing_interface{YType::str, "outgoing-interface"},
    special_next_hop{YType::enumeration, "special-next-hop"}
{
    yang_name = "next-hop"; yang_parent_name = "route";
}

RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::~NextHop()
{
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::has_data() const
{
    return next_hop_address.is_set
	|| outgoing_interface.is_set
	|| special_next_hop.is_set;
}

bool RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(special_next_hop.operation);
}

std::string RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (special_next_hop.is_set || is_set(special_next_hop.operation)) leaf_name_data.push_back(special_next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop = value;
    }
}

Routing::Routing()
{
    yang_name = "routing"; yang_parent_name = "ietf-routing";
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
    return is_set(operation);
}

std::string Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:routing";

    return path_buffer.str();

}

const EntityPath Routing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::set_value(const std::string & value_path, std::string value)
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

Routing::RoutingInstance::RoutingInstance()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    router_id{YType::str, "router-id"},
    type{YType::identityref, "type"}
    	,
    interfaces(std::make_shared<Routing::RoutingInstance::Interfaces>())
	,ribs(std::make_shared<Routing::RoutingInstance::Ribs>())
	,routing_protocols(std::make_shared<Routing::RoutingInstance::RoutingProtocols>())
{
    interfaces->parent = this;

    ribs->parent = this;

    routing_protocols->parent = this;

    yang_name = "routing-instance"; yang_parent_name = "routing";
}

Routing::RoutingInstance::~RoutingInstance()
{
}

bool Routing::RoutingInstance::has_data() const
{
    return name.is_set
	|| description.is_set
	|| enabled.is_set
	|| router_id.is_set
	|| type.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (ribs !=  nullptr && ribs->has_data())
	|| (routing_protocols !=  nullptr && routing_protocols->has_data());
}

bool Routing::RoutingInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(enabled.operation)
	|| is_set(router_id.operation)
	|| is_set(type.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (ribs !=  nullptr && ribs->has_operation())
	|| (routing_protocols !=  nullptr && routing_protocols->has_operation());
}

std::string Routing::RoutingInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-instance" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-routing:routing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    if(child_yang_name == "ribs")
    {
        if(ribs == nullptr)
        {
            ribs = std::make_shared<Routing::RoutingInstance::Ribs>();
        }
        return ribs;
    }

    if(child_yang_name == "routing-protocols")
    {
        if(routing_protocols == nullptr)
        {
            routing_protocols = std::make_shared<Routing::RoutingInstance::RoutingProtocols>();
        }
        return routing_protocols;
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

    if(ribs != nullptr)
    {
        children["ribs"] = ribs;
    }

    if(routing_protocols != nullptr)
    {
        children["routing-protocols"] = routing_protocols;
    }

    return children;
}

void Routing::RoutingInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Routing::RoutingInstance::Interfaces::Interfaces()
    :
    interface{YType::str, "interface"}
{
    yang_name = "interfaces"; yang_parent_name = "routing-instance";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Routing::RoutingInstance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::Interfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocols()
{
    yang_name = "routing-protocols"; yang_parent_name = "routing-instance";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-protocols";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutingProtocols' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::RoutingProtocol()
    :
    type{YType::identityref, "type"},
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    ospf(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf>())
	,static_routes(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes>())
{
    ospf->parent = this;

    static_routes->parent = this;

    yang_name = "routing-protocol"; yang_parent_name = "routing-protocols";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::~RoutingProtocol()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::has_data() const
{
    return type.is_set
	|| name.is_set
	|| description.is_set
	|| (ospf !=  nullptr && ospf->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-protocol" <<"[type='" <<type <<"']" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutingProtocol' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes == nullptr)
        {
            static_routes = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes>();
        }
        return static_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(static_routes != nullptr)
    {
        children["static-routes"] = static_routes;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::StaticRoutes()
    :
    ipv4(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4>())
	,ipv6(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "static-routes"; yang_parent_name = "routing-protocol";
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
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticRoutes' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Ipv4()
{
    yang_name = "ipv4"; yang_parent_name = "static-routes";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ipv4-unicast-routing:ipv4";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::Route()
    :
    destination_prefix{YType::str, "destination-prefix"},
    description{YType::str, "description"}
    	,
    next_hop(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop>())
{
    next_hop->parent = this;

    yang_name = "route"; yang_parent_name = "ipv4";
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
    return is_set(operation)
	|| is_set(destination_prefix.operation)
	|| is_set(description.operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route" <<"[destination-prefix='" <<destination_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    outgoing_interface{YType::str, "outgoing-interface"},
    special_next_hop{YType::enumeration, "special-next-hop"}
{
    yang_name = "next-hop"; yang_parent_name = "route";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::~NextHop()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::has_data() const
{
    return next_hop_address.is_set
	|| outgoing_interface.is_set
	|| special_next_hop.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(special_next_hop.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (special_next_hop.is_set || is_set(special_next_hop.operation)) leaf_name_data.push_back(special_next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Ipv6()
{
    yang_name = "ipv6"; yang_parent_name = "static-routes";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ipv6-unicast-routing:ipv6";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::Route()
    :
    destination_prefix{YType::str, "destination-prefix"},
    description{YType::str, "description"}
    	,
    next_hop(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop>())
{
    next_hop->parent = this;

    yang_name = "route"; yang_parent_name = "ipv6";
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
    return is_set(operation)
	|| is_set(destination_prefix.operation)
	|| is_set(description.operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route" <<"[destination-prefix='" <<destination_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    outgoing_interface{YType::str, "outgoing-interface"},
    special_next_hop{YType::enumeration, "special-next-hop"}
{
    yang_name = "next-hop"; yang_parent_name = "route";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::~NextHop()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::has_data() const
{
    return next_hop_address.is_set
	|| outgoing_interface.is_set
	|| special_next_hop.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(special_next_hop.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (special_next_hop.is_set || is_set(special_next_hop.operation)) leaf_name_data.push_back(special_next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Ospf()
    :
    operation_mode{YType::identityref, "operation-mode"}
    	,
    all_instances_inherit(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit>())
{
    all_instances_inherit->parent = this;

    yang_name = "ospf"; yang_parent_name = "routing-protocol";
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
    return is_set(operation)
	|| is_set(operation_mode.operation)
	|| (all_instances_inherit !=  nullptr && all_instances_inherit->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-ospf:ospf";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_mode.is_set || is_set(operation_mode.operation)) leaf_name_data.push_back(operation_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operation-mode")
    {
        operation_mode = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::AllInstancesInherit()
    :
    area(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area>())
	,interface(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface>())
{
    area->parent = this;

    interface->parent = this;

    yang_name = "all-instances-inherit"; yang_parent_name = "ospf";
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
    return is_set(operation)
	|| (area !=  nullptr && area->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-instances-inherit";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllInstancesInherit' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::Area()
{
    yang_name = "area"; yang_parent_name = "all-instances-inherit";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Area::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::Interface()
{
    yang_name = "interface"; yang_parent_name = "all-instances-inherit";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::AllInstancesInherit::Interface::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Instance()
    :
    af{YType::identityref, "af"},
    enable{YType::boolean, "enable"},
    router_id{YType::str, "router-id"}
    	,
    admin_distance(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance>())
	,all_areas_inherit(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit>())
	,auto_cost(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost>())
	,database_control(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl>())
	,fast_reroute(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute>())
	,graceful_restart(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart>())
	,mpls(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls>())
	,nsr(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr>())
	,reload_control(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl>())
	,spf_control(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl>())
{
    admin_distance->parent = this;

    all_areas_inherit->parent = this;

    auto_cost->parent = this;

    database_control->parent = this;

    fast_reroute->parent = this;

    graceful_restart->parent = this;

    mpls->parent = this;

    nsr->parent = this;

    reload_control->parent = this;

    spf_control->parent = this;

    yang_name = "instance"; yang_parent_name = "ospf";
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
	|| enable.is_set
	|| router_id.is_set
	|| (admin_distance !=  nullptr && admin_distance->has_data())
	|| (all_areas_inherit !=  nullptr && all_areas_inherit->has_data())
	|| (auto_cost !=  nullptr && auto_cost->has_data())
	|| (database_control !=  nullptr && database_control->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (reload_control !=  nullptr && reload_control->has_data())
	|| (spf_control !=  nullptr && spf_control->has_data());
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
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(enable.operation)
	|| is_set(router_id.operation)
	|| (admin_distance !=  nullptr && admin_distance->has_operation())
	|| (all_areas_inherit !=  nullptr && all_areas_inherit->has_operation())
	|| (auto_cost !=  nullptr && auto_cost->has_operation())
	|| (database_control !=  nullptr && database_control->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (reload_control !=  nullptr && reload_control->has_operation())
	|| (spf_control !=  nullptr && spf_control->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[af='" <<af <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instance' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost == nullptr)
        {
            auto_cost = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost>();
        }
        return auto_cost;
    }

    if(child_yang_name == "database-control")
    {
        if(database_control == nullptr)
        {
            database_control = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl>();
        }
        return database_control;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "reload-control")
    {
        if(reload_control == nullptr)
        {
            reload_control = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl>();
        }
        return reload_control;
    }

    if(child_yang_name == "spf-control")
    {
        if(spf_control == nullptr)
        {
            spf_control = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl>();
        }
        return spf_control;
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

    if(all_areas_inherit != nullptr)
    {
        children["all-areas-inherit"] = all_areas_inherit;
    }

    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    if(auto_cost != nullptr)
    {
        children["auto-cost"] = auto_cost;
    }

    if(database_control != nullptr)
    {
        children["database-control"] = database_control;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(reload_control != nullptr)
    {
        children["reload-control"] = reload_control;
    }

    if(spf_control != nullptr)
    {
        children["spf-control"] = spf_control;
    }

    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::AdminDistance()
    :
    external{YType::uint8, "external"},
    inter_area{YType::uint8, "inter-area"},
    internal{YType::uint8, "internal"},
    intra_area{YType::uint8, "intra-area"}
{
    yang_name = "admin-distance"; yang_parent_name = "instance";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::~AdminDistance()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::has_data() const
{
    return external.is_set
	|| inter_area.is_set
	|| internal.is_set
	|| intra_area.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(inter_area.operation)
	|| is_set(internal.operation)
	|| is_set(intra_area.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-distance";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminDistance' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (inter_area.is_set || is_set(inter_area.operation)) leaf_name_data.push_back(inter_area.get_name_leafdata());
    if (internal.is_set || is_set(internal.operation)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (intra_area.is_set || is_set(intra_area.operation)) leaf_name_data.push_back(intra_area.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AdminDistance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "inter-area")
    {
        inter_area = value;
    }
    if(value_path == "internal")
    {
        internal = value;
    }
    if(value_path == "intra-area")
    {
        intra_area = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::Nsr()
    :
    enable{YType::boolean, "enable"}
{
    yang_name = "nsr"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsr' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Nsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::GracefulRestart()
    :
    enable{YType::boolean, "enable"},
    helper_enable{YType::boolean, "helper-enable"},
    helper_strict_lsa_checking{YType::boolean, "helper-strict-lsa-checking"},
    restart_interval{YType::uint16, "restart-interval"}
{
    yang_name = "graceful-restart"; yang_parent_name = "instance";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::~GracefulRestart()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::has_data() const
{
    return enable.is_set
	|| helper_enable.is_set
	|| helper_strict_lsa_checking.is_set
	|| restart_interval.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(helper_enable.operation)
	|| is_set(helper_strict_lsa_checking.operation)
	|| is_set(restart_interval.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (helper_enable.is_set || is_set(helper_enable.operation)) leaf_name_data.push_back(helper_enable.get_name_leafdata());
    if (helper_strict_lsa_checking.is_set || is_set(helper_strict_lsa_checking.operation)) leaf_name_data.push_back(helper_strict_lsa_checking.get_name_leafdata());
    if (restart_interval.is_set || is_set(restart_interval.operation)) leaf_name_data.push_back(restart_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "helper-enable")
    {
        helper_enable = value;
    }
    if(value_path == "helper-strict-lsa-checking")
    {
        helper_strict_lsa_checking = value;
    }
    if(value_path == "restart-interval")
    {
        restart_interval = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::AutoCost()
    :
    enable{YType::boolean, "enable"},
    reference_bandwidth{YType::uint32, "reference-bandwidth"}
{
    yang_name = "auto-cost"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(reference_bandwidth.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-cost";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoCost' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (reference_bandwidth.is_set || is_set(reference_bandwidth.operation)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AutoCost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::SpfControl()
    :
    paths{YType::uint16, "paths"}
{
    yang_name = "spf-control"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| is_set(paths.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-control";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfControl' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths.is_set || is_set(paths.operation)) leaf_name_data.push_back(paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::SpfControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "paths")
    {
        paths = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::DatabaseControl()
    :
    max_lsa{YType::uint32, "max-lsa"}
{
    yang_name = "database-control"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| is_set(max_lsa.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-control";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseControl' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_lsa.is_set || is_set(max_lsa.operation)) leaf_name_data.push_back(max_lsa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::DatabaseControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lsa")
    {
        max_lsa = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::ReloadControl()
{
    yang_name = "reload-control"; yang_parent_name = "instance";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload-control";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReloadControl' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::ReloadControl::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Mpls()
    :
    ldp(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp>())
	,te_rid(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid>())
{
    ldp->parent = this;

    te_rid->parent = this;

    yang_name = "mpls"; yang_parent_name = "instance";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::~Mpls()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::has_data() const
{
    return (ldp !=  nullptr && ldp->has_data())
	|| (te_rid !=  nullptr && te_rid->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::has_operation() const
{
    return is_set(operation)
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (te_rid !=  nullptr && te_rid->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "te-rid")
    {
        if(te_rid == nullptr)
        {
            te_rid = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid>();
        }
        return te_rid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(te_rid != nullptr)
    {
        children["te-rid"] = te_rid;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::TeRid()
    :
    interface{YType::str, "interface"},
    router_id{YType::str, "router-id"}
{
    yang_name = "te-rid"; yang_parent_name = "mpls";
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
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(router_id.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-rid";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeRid' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::TeRid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::Ldp()
    :
    autoconfig{YType::boolean, "autoconfig"},
    igp_sync{YType::boolean, "igp-sync"}
{
    yang_name = "ldp"; yang_parent_name = "mpls";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::~Ldp()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::has_data() const
{
    return autoconfig.is_set
	|| igp_sync.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::has_operation() const
{
    return is_set(operation)
	|| is_set(autoconfig.operation)
	|| is_set(igp_sync.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ldp' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autoconfig.is_set || is_set(autoconfig.operation)) leaf_name_data.push_back(autoconfig.get_name_leafdata());
    if (igp_sync.is_set || is_set(igp_sync.operation)) leaf_name_data.push_back(igp_sync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Mpls::Ldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "autoconfig")
    {
        autoconfig = value;
    }
    if(value_path == "igp-sync")
    {
        igp_sync = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::FastReroute()
    :
    lfa(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa>())
{
    lfa->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| (lfa !=  nullptr && lfa->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::Lfa()
{
    yang_name = "lfa"; yang_parent_name = "fast-reroute";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lfa' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::FastReroute::Lfa::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::AllAreasInherit()
    :
    area(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area>())
	,interface(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface>())
{
    area->parent = this;

    interface->parent = this;

    yang_name = "all-areas-inherit"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| (area !=  nullptr && area->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-areas-inherit";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllAreasInherit' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::Area()
{
    yang_name = "area"; yang_parent_name = "all-areas-inherit";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Area::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::Interface()
{
    yang_name = "interface"; yang_parent_name = "all-areas-inherit";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::AllAreasInherit::Interface::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Area()
    :
    area_id{YType::str, "area-id"},
    area_type{YType::identityref, "area-type"},
    default_cost{YType::uint32, "default-cost"},
    summary{YType::boolean, "summary"}
    	,
    all_interfaces_inherit(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit>())
{
    all_interfaces_inherit->parent = this;

    yang_name = "area"; yang_parent_name = "instance";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::~Area()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| area_type.is_set
	|| default_cost.is_set
	|| summary.is_set
	|| (all_interfaces_inherit !=  nullptr && all_interfaces_inherit->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(area_type.operation)
	|| is_set(default_cost.operation)
	|| is_set(summary.operation)
	|| (all_interfaces_inherit !=  nullptr && all_interfaces_inherit->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_type.is_set || is_set(area_type.operation)) leaf_name_data.push_back(area_type.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.operation)) leaf_name_data.push_back(default_cost.get_name_leafdata());
    if (summary.is_set || is_set(summary.operation)) leaf_name_data.push_back(summary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-interfaces-inherit")
    {
        if(all_interfaces_inherit == nullptr)
        {
            all_interfaces_inherit = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit>();
        }
        return all_interfaces_inherit;
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_interfaces_inherit != nullptr)
    {
        children["all-interfaces-inherit"] = all_interfaces_inherit;
    }

    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sham_link)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : virtual_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "area-type")
    {
        area_type = value;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
    }
    if(value_path == "summary")
    {
        summary = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::Range()
    :
    prefix{YType::str, "prefix"},
    advertise{YType::boolean, "advertise"},
    cost{YType::uint32, "cost"}
{
    yang_name = "range"; yang_parent_name = "area";
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
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(advertise.operation)
	|| is_set(cost.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.operation)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "advertise")
    {
        advertise = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::AllInterfacesInherit()
    :
    interface(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface>())
{
    interface->parent = this;

    yang_name = "all-interfaces-inherit"; yang_parent_name = "area";
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
    return is_set(operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-interfaces-inherit";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllInterfacesInherit' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::Interface()
{
    yang_name = "interface"; yang_parent_name = "all-interfaces-inherit";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::AllInterfacesInherit::Interface::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::VirtualLink()
    :
    router_id{YType::str, "router-id"},
    bfd{YType::boolean, "bfd"},
    cost{YType::uint16, "cost"},
    dead_interval{YType::uint16, "dead-interval"},
    enable{YType::boolean, "enable"},
    hello_interval{YType::uint16, "hello-interval"},
    lls{YType::boolean, "lls"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    retransmit_interval{YType::uint16, "retransmit-interval"},
    transmit_delay{YType::uint16, "transmit-delay"}
    	,
    authentication(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication>())
	,ttl_security(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity>())
{
    authentication->parent = this;

    ttl_security->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "area";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::~VirtualLink()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::has_data() const
{
    return router_id.is_set
	|| bfd.is_set
	|| cost.is_set
	|| dead_interval.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| lls.is_set
	|| mtu_ignore.is_set
	|| prefix_suppression.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation)
	|| is_set(bfd.operation)
	|| is_set(cost.operation)
	|| is_set(dead_interval.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(lls.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(prefix_suppression.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[router-id='" <<router_id <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLink' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (lls.is_set || is_set(lls.operation)) leaf_name_data.push_back(lls.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.operation)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "lls")
    {
        lls = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::TtlSecurity()
    :
    enable{YType::boolean, "enable"},
    hops{YType::uint8, "hops"}
{
    yang_name = "ttl-security"; yang_parent_name = "virtual-link";
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hops.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtlSecurity' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hops.is_set || is_set(hops.operation)) leaf_name_data.push_back(hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::TtlSecurity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hops")
    {
        hops = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::Authentication()
    :
    key{YType::str, "key"},
    key_chain{YType::str, "key-chain"},
    sa{YType::str, "sa"}
    	,
    crypto_algorithm(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm>())
{
    crypto_algorithm->parent = this;

    yang_name = "authentication"; yang_parent_name = "virtual-link";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::~Authentication()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::has_data() const
{
    return key.is_set
	|| key_chain.is_set
	|| sa.is_set
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(key_chain.operation)
	|| is_set(sa.operation)
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (sa.is_set || is_set(sa.operation)) leaf_name_data.push_back(sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "sa")
    {
        sa = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::CryptoAlgorithm()
    :
    hmac_sha1_12{YType::empty, "hmac-sha1-12"},
    hmac_sha1_20{YType::empty, "hmac-sha1-20"},
    hmac_sha_1{YType::empty, "hmac-sha-1"},
    hmac_sha_256{YType::empty, "hmac-sha-256"},
    hmac_sha_384{YType::empty, "hmac-sha-384"},
    hmac_sha_512{YType::empty, "hmac-sha-512"},
    md5{YType::empty, "md5"},
    sha_1{YType::empty, "sha-1"}
{
    yang_name = "crypto-algorithm"; yang_parent_name = "authentication";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::~CryptoAlgorithm()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::has_data() const
{
    return hmac_sha1_12.is_set
	|| hmac_sha1_20.is_set
	|| hmac_sha_1.is_set
	|| hmac_sha_256.is_set
	|| hmac_sha_384.is_set
	|| hmac_sha_512.is_set
	|| md5.is_set
	|| sha_1.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::has_operation() const
{
    return is_set(operation)
	|| is_set(hmac_sha1_12.operation)
	|| is_set(hmac_sha1_20.operation)
	|| is_set(hmac_sha_1.operation)
	|| is_set(hmac_sha_256.operation)
	|| is_set(hmac_sha_384.operation)
	|| is_set(hmac_sha_512.operation)
	|| is_set(md5.operation)
	|| is_set(sha_1.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-algorithm";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CryptoAlgorithm' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha1_12.is_set || is_set(hmac_sha1_12.operation)) leaf_name_data.push_back(hmac_sha1_12.get_name_leafdata());
    if (hmac_sha1_20.is_set || is_set(hmac_sha1_20.operation)) leaf_name_data.push_back(hmac_sha1_20.get_name_leafdata());
    if (hmac_sha_1.is_set || is_set(hmac_sha_1.operation)) leaf_name_data.push_back(hmac_sha_1.get_name_leafdata());
    if (hmac_sha_256.is_set || is_set(hmac_sha_256.operation)) leaf_name_data.push_back(hmac_sha_256.get_name_leafdata());
    if (hmac_sha_384.is_set || is_set(hmac_sha_384.operation)) leaf_name_data.push_back(hmac_sha_384.get_name_leafdata());
    if (hmac_sha_512.is_set || is_set(hmac_sha_512.operation)) leaf_name_data.push_back(hmac_sha_512.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha_1.is_set || is_set(sha_1.operation)) leaf_name_data.push_back(sha_1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::VirtualLink::Authentication::CryptoAlgorithm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12 = value;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20 = value;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1 = value;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256 = value;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384 = value;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512 = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
    if(value_path == "sha-1")
    {
        sha_1 = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::ShamLink()
    :
    local_id{YType::str, "local-id"},
    remote_id{YType::str, "remote-id"},
    bfd{YType::boolean, "bfd"},
    cost{YType::uint16, "cost"},
    dead_interval{YType::uint16, "dead-interval"},
    enable{YType::boolean, "enable"},
    hello_interval{YType::uint16, "hello-interval"},
    lls{YType::boolean, "lls"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    retransmit_interval{YType::uint16, "retransmit-interval"},
    transmit_delay{YType::uint16, "transmit-delay"}
    	,
    authentication(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication>())
	,ttl_security(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity>())
{
    authentication->parent = this;

    ttl_security->parent = this;

    yang_name = "sham-link"; yang_parent_name = "area";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::~ShamLink()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::has_data() const
{
    return local_id.is_set
	|| remote_id.is_set
	|| bfd.is_set
	|| cost.is_set
	|| dead_interval.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| lls.is_set
	|| mtu_ignore.is_set
	|| prefix_suppression.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::has_operation() const
{
    return is_set(operation)
	|| is_set(local_id.operation)
	|| is_set(remote_id.operation)
	|| is_set(bfd.operation)
	|| is_set(cost.operation)
	|| is_set(dead_interval.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(lls.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(prefix_suppression.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[local-id='" <<local_id <<"']" <<"[remote-id='" <<remote_id <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLink' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_id.is_set || is_set(local_id.operation)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (lls.is_set || is_set(lls.operation)) leaf_name_data.push_back(lls.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.operation)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-id")
    {
        local_id = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "lls")
    {
        lls = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::TtlSecurity()
    :
    enable{YType::boolean, "enable"},
    hops{YType::uint8, "hops"}
{
    yang_name = "ttl-security"; yang_parent_name = "sham-link";
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hops.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtlSecurity' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hops.is_set || is_set(hops.operation)) leaf_name_data.push_back(hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::TtlSecurity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hops")
    {
        hops = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::Authentication()
    :
    key{YType::str, "key"},
    key_chain{YType::str, "key-chain"},
    sa{YType::str, "sa"}
    	,
    crypto_algorithm(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm>())
{
    crypto_algorithm->parent = this;

    yang_name = "authentication"; yang_parent_name = "sham-link";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::~Authentication()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::has_data() const
{
    return key.is_set
	|| key_chain.is_set
	|| sa.is_set
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(key_chain.operation)
	|| is_set(sa.operation)
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (sa.is_set || is_set(sa.operation)) leaf_name_data.push_back(sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "sa")
    {
        sa = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::CryptoAlgorithm()
    :
    hmac_sha1_12{YType::empty, "hmac-sha1-12"},
    hmac_sha1_20{YType::empty, "hmac-sha1-20"},
    hmac_sha_1{YType::empty, "hmac-sha-1"},
    hmac_sha_256{YType::empty, "hmac-sha-256"},
    hmac_sha_384{YType::empty, "hmac-sha-384"},
    hmac_sha_512{YType::empty, "hmac-sha-512"},
    md5{YType::empty, "md5"},
    sha_1{YType::empty, "sha-1"}
{
    yang_name = "crypto-algorithm"; yang_parent_name = "authentication";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::~CryptoAlgorithm()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::has_data() const
{
    return hmac_sha1_12.is_set
	|| hmac_sha1_20.is_set
	|| hmac_sha_1.is_set
	|| hmac_sha_256.is_set
	|| hmac_sha_384.is_set
	|| hmac_sha_512.is_set
	|| md5.is_set
	|| sha_1.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::has_operation() const
{
    return is_set(operation)
	|| is_set(hmac_sha1_12.operation)
	|| is_set(hmac_sha1_20.operation)
	|| is_set(hmac_sha_1.operation)
	|| is_set(hmac_sha_256.operation)
	|| is_set(hmac_sha_384.operation)
	|| is_set(hmac_sha_512.operation)
	|| is_set(md5.operation)
	|| is_set(sha_1.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-algorithm";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CryptoAlgorithm' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha1_12.is_set || is_set(hmac_sha1_12.operation)) leaf_name_data.push_back(hmac_sha1_12.get_name_leafdata());
    if (hmac_sha1_20.is_set || is_set(hmac_sha1_20.operation)) leaf_name_data.push_back(hmac_sha1_20.get_name_leafdata());
    if (hmac_sha_1.is_set || is_set(hmac_sha_1.operation)) leaf_name_data.push_back(hmac_sha_1.get_name_leafdata());
    if (hmac_sha_256.is_set || is_set(hmac_sha_256.operation)) leaf_name_data.push_back(hmac_sha_256.get_name_leafdata());
    if (hmac_sha_384.is_set || is_set(hmac_sha_384.operation)) leaf_name_data.push_back(hmac_sha_384.get_name_leafdata());
    if (hmac_sha_512.is_set || is_set(hmac_sha_512.operation)) leaf_name_data.push_back(hmac_sha_512.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha_1.is_set || is_set(sha_1.operation)) leaf_name_data.push_back(sha_1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::ShamLink::Authentication::CryptoAlgorithm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12 = value;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20 = value;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1 = value;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256 = value;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384 = value;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512 = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
    if(value_path == "sha-1")
    {
        sha_1 = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Interface()
    :
    interface{YType::str, "interface"},
    bfd{YType::boolean, "bfd"},
    cost{YType::uint16, "cost"},
    dead_interval{YType::uint16, "dead-interval"},
    demand_circuit{YType::boolean, "demand-circuit"},
    enable{YType::boolean, "enable"},
    hello_interval{YType::uint16, "hello-interval"},
    lls{YType::boolean, "lls"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network_type{YType::enumeration, "network-type"},
    node_flag{YType::boolean, "node-flag"},
    passive{YType::boolean, "passive"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    retransmit_interval{YType::uint16, "retransmit-interval"},
    transmit_delay{YType::uint16, "transmit-delay"}
    	,
    authentication(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication>())
	,fast_reroute(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute>())
	,multi_area(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea>())
	,static_neighbors(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors>())
	,ttl_security(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity>())
{
    authentication->parent = this;

    fast_reroute->parent = this;

    multi_area->parent = this;

    static_neighbors->parent = this;

    ttl_security->parent = this;

    yang_name = "interface"; yang_parent_name = "area";
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
	|| bfd.is_set
	|| cost.is_set
	|| dead_interval.is_set
	|| demand_circuit.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| lls.is_set
	|| mtu_ignore.is_set
	|| network_type.is_set
	|| node_flag.is_set
	|| passive.is_set
	|| prefix_suppression.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (static_neighbors !=  nullptr && static_neighbors->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(bfd.operation)
	|| is_set(cost.operation)
	|| is_set(dead_interval.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(lls.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network_type.operation)
	|| is_set(node_flag.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (static_neighbors !=  nullptr && static_neighbors->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (lls.is_set || is_set(lls.operation)) leaf_name_data.push_back(lls.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (node_flag.is_set || is_set(node_flag.operation)) leaf_name_data.push_back(node_flag.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.operation)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute>();
        }
        return fast_reroute;
    }

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

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    if(static_neighbors != nullptr)
    {
        children["static-neighbors"] = static_neighbors;
    }

    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "lls")
    {
        lls = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "node-flag")
    {
        node_flag = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::MultiArea()
    :
    cost{YType::uint16, "cost"},
    multi_area_id{YType::str, "multi-area-id"}
{
    yang_name = "multi-area"; yang_parent_name = "interface";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::~MultiArea()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::has_data() const
{
    return cost.is_set
	|| multi_area_id.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(multi_area_id.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (multi_area_id.is_set || is_set(multi_area_id.operation)) leaf_name_data.push_back(multi_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::MultiArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "multi-area-id")
    {
        multi_area_id = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::StaticNeighbors()
{
    yang_name = "static-neighbors"; yang_parent_name = "interface";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-neighbors";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticNeighbors' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::Neighbor()
    :
    address{YType::str, "address"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint16, "poll-interval"},
    priority{YType::uint8, "priority"}
{
    yang_name = "neighbor"; yang_parent_name = "static-neighbors";
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
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(cost.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::StaticNeighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::FastReroute()
    :
    lfa(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa>())
{
    lfa->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "interface";
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
    return is_set(operation)
	|| (lfa !=  nullptr && lfa->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::Lfa()
    :
    candidate_disabled{YType::boolean, "candidate-disabled"},
    enabled{YType::boolean, "enabled"}
    	,
    remote_lfa(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa>())
{
    remote_lfa->parent = this;

    yang_name = "lfa"; yang_parent_name = "fast-reroute";
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
    return is_set(operation)
	|| is_set(candidate_disabled.operation)
	|| is_set(enabled.operation)
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lfa' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_disabled.is_set || is_set(candidate_disabled.operation)) leaf_name_data.push_back(candidate_disabled.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate-disabled")
    {
        candidate_disabled = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::RemoteLfa()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "remote-lfa"; yang_parent_name = "lfa";
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
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::FastReroute::Lfa::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::TtlSecurity()
    :
    enable{YType::boolean, "enable"},
    hops{YType::uint8, "hops"}
{
    yang_name = "ttl-security"; yang_parent_name = "interface";
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hops.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtlSecurity' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hops.is_set || is_set(hops.operation)) leaf_name_data.push_back(hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::TtlSecurity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hops")
    {
        hops = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::Authentication()
    :
    key{YType::str, "key"},
    key_chain{YType::str, "key-chain"},
    sa{YType::str, "sa"}
    	,
    crypto_algorithm(std::make_shared<Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm>())
{
    crypto_algorithm->parent = this;

    yang_name = "authentication"; yang_parent_name = "interface";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::~Authentication()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::has_data() const
{
    return key.is_set
	|| key_chain.is_set
	|| sa.is_set
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_data());
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(key_chain.operation)
	|| is_set(sa.operation)
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_operation());
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (sa.is_set || is_set(sa.operation)) leaf_name_data.push_back(sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "sa")
    {
        sa = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::CryptoAlgorithm()
    :
    hmac_sha1_12{YType::empty, "hmac-sha1-12"},
    hmac_sha1_20{YType::empty, "hmac-sha1-20"},
    hmac_sha_1{YType::empty, "hmac-sha-1"},
    hmac_sha_256{YType::empty, "hmac-sha-256"},
    hmac_sha_384{YType::empty, "hmac-sha-384"},
    hmac_sha_512{YType::empty, "hmac-sha-512"},
    md5{YType::empty, "md5"},
    sha_1{YType::empty, "sha-1"}
{
    yang_name = "crypto-algorithm"; yang_parent_name = "authentication";
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::~CryptoAlgorithm()
{
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::has_data() const
{
    return hmac_sha1_12.is_set
	|| hmac_sha1_20.is_set
	|| hmac_sha_1.is_set
	|| hmac_sha_256.is_set
	|| hmac_sha_384.is_set
	|| hmac_sha_512.is_set
	|| md5.is_set
	|| sha_1.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::has_operation() const
{
    return is_set(operation)
	|| is_set(hmac_sha1_12.operation)
	|| is_set(hmac_sha1_20.operation)
	|| is_set(hmac_sha_1.operation)
	|| is_set(hmac_sha_256.operation)
	|| is_set(hmac_sha_384.operation)
	|| is_set(hmac_sha_512.operation)
	|| is_set(md5.operation)
	|| is_set(sha_1.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-algorithm";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CryptoAlgorithm' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha1_12.is_set || is_set(hmac_sha1_12.operation)) leaf_name_data.push_back(hmac_sha1_12.get_name_leafdata());
    if (hmac_sha1_20.is_set || is_set(hmac_sha1_20.operation)) leaf_name_data.push_back(hmac_sha1_20.get_name_leafdata());
    if (hmac_sha_1.is_set || is_set(hmac_sha_1.operation)) leaf_name_data.push_back(hmac_sha_1.get_name_leafdata());
    if (hmac_sha_256.is_set || is_set(hmac_sha_256.operation)) leaf_name_data.push_back(hmac_sha_256.get_name_leafdata());
    if (hmac_sha_384.is_set || is_set(hmac_sha_384.operation)) leaf_name_data.push_back(hmac_sha_384.get_name_leafdata());
    if (hmac_sha_512.is_set || is_set(hmac_sha_512.operation)) leaf_name_data.push_back(hmac_sha_512.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha_1.is_set || is_set(sha_1.operation)) leaf_name_data.push_back(sha_1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Authentication::CryptoAlgorithm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12 = value;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20 = value;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1 = value;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256 = value;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384 = value;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512 = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
    if(value_path == "sha-1")
    {
        sha_1 = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::Topology()
    :
    name{YType::str, "name"},
    cost{YType::uint32, "cost"}
{
    yang_name = "topology"; yang_parent_name = "interface";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(cost.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Topology()
    :
    name{YType::str, "name"}
{
    yang_name = "topology"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Area()
    :
    area_id{YType::str, "area-id"},
    area_type{YType::identityref, "area-type"},
    default_cost{YType::uint32, "default-cost"},
    summary{YType::boolean, "summary"}
{
    yang_name = "area"; yang_parent_name = "topology";
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
	|| default_cost.is_set
	|| summary.is_set;
}

bool Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(area_type.operation)
	|| is_set(default_cost.operation)
	|| is_set(summary.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_type.is_set || is_set(area_type.operation)) leaf_name_data.push_back(area_type.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.operation)) leaf_name_data.push_back(default_cost.get_name_leafdata());
    if (summary.is_set || is_set(summary.operation)) leaf_name_data.push_back(summary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "area-type")
    {
        area_type = value;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
    }
    if(value_path == "summary")
    {
        summary = value;
    }
}

Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::Range()
    :
    prefix{YType::str, "prefix"},
    advertise{YType::boolean, "advertise"},
    cost{YType::uint32, "cost"}
{
    yang_name = "range"; yang_parent_name = "area";
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
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(advertise.operation)
	|| is_set(cost.operation);
}

std::string Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.operation)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Topology::Area::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "advertise")
    {
        advertise = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
}

Routing::RoutingInstance::Ribs::Ribs()
{
    yang_name = "ribs"; yang_parent_name = "routing-instance";
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
    return is_set(operation);
}

std::string Routing::RoutingInstance::Ribs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribs";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::Ribs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ribs' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::Ribs::set_value(const std::string & value_path, std::string value)
{
}

Routing::RoutingInstance::Ribs::Rib::Rib()
    :
    name{YType::str, "name"},
    address_family{YType::identityref, "address-family"},
    description{YType::str, "description"}
{
    yang_name = "rib"; yang_parent_name = "ribs";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(address_family.operation)
	|| is_set(description.operation);
}

std::string Routing::RoutingInstance::Ribs::Rib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Routing::RoutingInstance::Ribs::Rib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rib' in ietf_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Routing::RoutingInstance::Ribs::Rib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

FibRouteRpc::FibRouteRpc()
    :
    input(std::make_shared<FibRouteRpc::Input>())
	,output(std::make_shared<FibRouteRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "fib-route"; yang_parent_name = "ietf-routing";
}

FibRouteRpc::~FibRouteRpc()
{
}

bool FibRouteRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool FibRouteRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string FibRouteRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-routing:fib-route";

    return path_buffer.str();

}

const EntityPath FibRouteRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FibRouteRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<FibRouteRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<FibRouteRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRouteRpc::get_children() const
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

void FibRouteRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> FibRouteRpc::clone_ptr() const
{
    return std::make_shared<FibRouteRpc>();
}

std::string FibRouteRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string FibRouteRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function FibRouteRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

FibRouteRpc::Input::Input()
    :
    routing_instance_name{YType::str, "routing-instance-name"}
    	,
    destination_address(std::make_shared<FibRouteRpc::Input::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "input"; yang_parent_name = "fib-route";
}

FibRouteRpc::Input::~Input()
{
}

bool FibRouteRpc::Input::has_data() const
{
    return routing_instance_name.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool FibRouteRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(routing_instance_name.operation)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string FibRouteRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath FibRouteRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-routing:fib-route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routing_instance_name.is_set || is_set(routing_instance_name.operation)) leaf_name_data.push_back(routing_instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FibRouteRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<FibRouteRpc::Input::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRouteRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void FibRouteRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "routing-instance-name")
    {
        routing_instance_name = value;
    }
}

FibRouteRpc::Input::DestinationAddress::DestinationAddress()
    :
    address_family{YType::identityref, "address-family"},
    ietf_ipv4_unicast_routing_address{YType::str, "ietf-ipv4-unicast-routing:ietf-ipv4-unicast-routing_address"},
    ietf_ipv6_unicast_routing_address{YType::str, "ietf-ipv6-unicast-routing:ietf-ipv6-unicast-routing_address"}
{
    yang_name = "destination-address"; yang_parent_name = "input";
}

FibRouteRpc::Input::DestinationAddress::~DestinationAddress()
{
}

bool FibRouteRpc::Input::DestinationAddress::has_data() const
{
    return address_family.is_set
	|| ietf_ipv4_unicast_routing_address.is_set
	|| ietf_ipv6_unicast_routing_address.is_set;
}

bool FibRouteRpc::Input::DestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(ietf_ipv4_unicast_routing_address.operation)
	|| is_set(ietf_ipv6_unicast_routing_address.operation);
}

std::string FibRouteRpc::Input::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

const EntityPath FibRouteRpc::Input::DestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-routing:fib-route/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ietf_ipv4_unicast_routing_address.is_set || is_set(ietf_ipv4_unicast_routing_address.operation)) leaf_name_data.push_back(ietf_ipv4_unicast_routing_address.get_name_leafdata());
    if (ietf_ipv6_unicast_routing_address.is_set || is_set(ietf_ipv6_unicast_routing_address.operation)) leaf_name_data.push_back(ietf_ipv6_unicast_routing_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FibRouteRpc::Input::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRouteRpc::Input::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FibRouteRpc::Input::DestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "ietf-ipv4-unicast-routing_address")
    {
        ietf_ipv4_unicast_routing_address = value;
    }
    if(value_path == "ietf-ipv6-unicast-routing_address")
    {
        ietf_ipv6_unicast_routing_address = value;
    }
}

FibRouteRpc::Output::Output()
    :
    route(std::make_shared<FibRouteRpc::Output::Route>())
{
    route->parent = this;

    yang_name = "output"; yang_parent_name = "fib-route";
}

FibRouteRpc::Output::~Output()
{
}

bool FibRouteRpc::Output::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool FibRouteRpc::Output::has_operation() const
{
    return is_set(operation)
	|| (route !=  nullptr && route->has_operation());
}

std::string FibRouteRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath FibRouteRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-routing:fib-route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FibRouteRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<FibRouteRpc::Output::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRouteRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void FibRouteRpc::Output::set_value(const std::string & value_path, std::string value)
{
}

FibRouteRpc::Output::Route::Route()
    :
    active{YType::empty, "active"},
    address_family{YType::identityref, "address-family"},
    ietf_ipv4_unicast_routing_destination_prefix{YType::str, "ietf-ipv4-unicast-routing:ietf-ipv4-unicast-routing_destination-prefix"},
    ietf_ipv6_unicast_routing_destination_prefix{YType::str, "ietf-ipv6-unicast-routing:ietf-ipv6-unicast-routing_destination-prefix"},
    last_updated{YType::str, "last-updated"},
    source_protocol{YType::identityref, "source-protocol"}
    	,
    next_hop(std::make_shared<FibRouteRpc::Output::Route::NextHop>())
{
    next_hop->parent = this;

    yang_name = "route"; yang_parent_name = "output";
}

FibRouteRpc::Output::Route::~Route()
{
}

bool FibRouteRpc::Output::Route::has_data() const
{
    return active.is_set
	|| address_family.is_set
	|| ietf_ipv4_unicast_routing_destination_prefix.is_set
	|| ietf_ipv6_unicast_routing_destination_prefix.is_set
	|| last_updated.is_set
	|| source_protocol.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool FibRouteRpc::Output::Route::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(address_family.operation)
	|| is_set(ietf_ipv4_unicast_routing_destination_prefix.operation)
	|| is_set(ietf_ipv6_unicast_routing_destination_prefix.operation)
	|| is_set(last_updated.operation)
	|| is_set(source_protocol.operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string FibRouteRpc::Output::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath FibRouteRpc::Output::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-routing:fib-route/output/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ietf_ipv4_unicast_routing_destination_prefix.is_set || is_set(ietf_ipv4_unicast_routing_destination_prefix.operation)) leaf_name_data.push_back(ietf_ipv4_unicast_routing_destination_prefix.get_name_leafdata());
    if (ietf_ipv6_unicast_routing_destination_prefix.is_set || is_set(ietf_ipv6_unicast_routing_destination_prefix.operation)) leaf_name_data.push_back(ietf_ipv6_unicast_routing_destination_prefix.get_name_leafdata());
    if (last_updated.is_set || is_set(last_updated.operation)) leaf_name_data.push_back(last_updated.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FibRouteRpc::Output::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<FibRouteRpc::Output::Route::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRouteRpc::Output::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void FibRouteRpc::Output::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "ietf-ipv4-unicast-routing_destination-prefix")
    {
        ietf_ipv4_unicast_routing_destination_prefix = value;
    }
    if(value_path == "ietf-ipv6-unicast-routing_destination-prefix")
    {
        ietf_ipv6_unicast_routing_destination_prefix = value;
    }
    if(value_path == "last-updated")
    {
        last_updated = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
}

FibRouteRpc::Output::Route::NextHop::NextHop()
    :
    ietf_ipv4_unicast_routing_next_hop_address{YType::str, "ietf-ipv4-unicast-routing:ietf-ipv4-unicast-routing_next-hop-address"},
    ietf_ipv6_unicast_routing_next_hop_address{YType::str, "ietf-ipv6-unicast-routing:ietf-ipv6-unicast-routing_next-hop-address"},
    ietf_routing_next_hop_address{YType::str, "ietf-routing_next-hop-address"},
    outgoing_interface{YType::str, "outgoing-interface"},
    special_next_hop{YType::enumeration, "special-next-hop"}
{
    yang_name = "next-hop"; yang_parent_name = "route";
}

FibRouteRpc::Output::Route::NextHop::~NextHop()
{
}

bool FibRouteRpc::Output::Route::NextHop::has_data() const
{
    return ietf_ipv4_unicast_routing_next_hop_address.is_set
	|| ietf_ipv6_unicast_routing_next_hop_address.is_set
	|| ietf_routing_next_hop_address.is_set
	|| outgoing_interface.is_set
	|| special_next_hop.is_set;
}

bool FibRouteRpc::Output::Route::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(ietf_ipv4_unicast_routing_next_hop_address.operation)
	|| is_set(ietf_ipv6_unicast_routing_next_hop_address.operation)
	|| is_set(ietf_routing_next_hop_address.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(special_next_hop.operation);
}

std::string FibRouteRpc::Output::Route::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath FibRouteRpc::Output::Route::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-routing:fib-route/output/route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf_ipv4_unicast_routing_next_hop_address.is_set || is_set(ietf_ipv4_unicast_routing_next_hop_address.operation)) leaf_name_data.push_back(ietf_ipv4_unicast_routing_next_hop_address.get_name_leafdata());
    if (ietf_ipv6_unicast_routing_next_hop_address.is_set || is_set(ietf_ipv6_unicast_routing_next_hop_address.operation)) leaf_name_data.push_back(ietf_ipv6_unicast_routing_next_hop_address.get_name_leafdata());
    if (ietf_routing_next_hop_address.is_set || is_set(ietf_routing_next_hop_address.operation)) leaf_name_data.push_back(ietf_routing_next_hop_address.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (special_next_hop.is_set || is_set(special_next_hop.operation)) leaf_name_data.push_back(special_next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FibRouteRpc::Output::Route::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibRouteRpc::Output::Route::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FibRouteRpc::Output::Route::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ietf-ipv4-unicast-routing_next-hop-address")
    {
        ietf_ipv4_unicast_routing_next_hop_address = value;
    }
    if(value_path == "ietf-ipv6-unicast-routing_next-hop-address")
    {
        ietf_ipv6_unicast_routing_next_hop_address = value;
    }
    if(value_path == "ietf-routing_next-hop-address")
    {
        ietf_routing_next_hop_address = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "special-next-hop")
    {
        special_next_hop = value;
    }
}

VrfRoutingInstanceIdentity::VrfRoutingInstanceIdentity()
     : Identity("ietf-routing:vrf-routing-instance")
{
}

VrfRoutingInstanceIdentity::~VrfRoutingInstanceIdentity()
{
}

DirectIdentity::DirectIdentity()
     : Identity("ietf-routing:direct")
{
}

DirectIdentity::~DirectIdentity()
{
}

DefaultRoutingInstanceIdentity::DefaultRoutingInstanceIdentity()
     : Identity("ietf-routing:default-routing-instance")
{
}

DefaultRoutingInstanceIdentity::~DefaultRoutingInstanceIdentity()
{
}

StaticIdentity::StaticIdentity()
     : Identity("ietf-routing:static")
{
}

StaticIdentity::~StaticIdentity()
{
}

Ipv4Identity::Ipv4Identity()
     : Identity("ietf-routing:ipv4")
{
}

Ipv4Identity::~Ipv4Identity()
{
}

Ipv6Identity::Ipv6Identity()
     : Identity("ietf-routing:ipv6")
{
}

Ipv6Identity::~Ipv6Identity()
{
}

const Enum::YLeaf RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::NetworkTypeEnum::broadcast {0, "broadcast"};
const Enum::YLeaf RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::NetworkTypeEnum::non_broadcast {1, "non-broadcast"};
const Enum::YLeaf RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::NetworkTypeEnum::point_to_multipoint {2, "point-to-multipoint"};
const Enum::YLeaf RoutingState::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interfaces::NetworkTypeEnum::point_to_point {3, "point-to-point"};

const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteTypeEnum::intra_area {0, "intra-area"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteTypeEnum::inter_area {1, "inter-area"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteTypeEnum::external_1 {2, "external-1"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteTypeEnum::external_2 {3, "external-2"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteTypeEnum::nssa_1 {4, "nssa-1"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::RouteTypeEnum::nssa_2 {5, "nssa-2"};

const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::SpecialNextHopEnum::blackhole {0, "blackhole"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::SpecialNextHopEnum::unreachable {1, "unreachable"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::SpecialNextHopEnum::prohibit {2, "prohibit"};
const Enum::YLeaf RoutingState::RoutingInstance::Ribs::Rib::Routes::Route::NextHop::SpecialNextHopEnum::receive {3, "receive"};

const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::SpecialNextHopEnum::blackhole {0, "blackhole"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::SpecialNextHopEnum::unreachable {1, "unreachable"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::SpecialNextHopEnum::prohibit {2, "prohibit"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv4::Route::NextHop::SpecialNextHopEnum::receive {3, "receive"};

const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::SpecialNextHopEnum::blackhole {0, "blackhole"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::SpecialNextHopEnum::unreachable {1, "unreachable"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::SpecialNextHopEnum::prohibit {2, "prohibit"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::StaticRoutes::Ipv6::Route::NextHop::SpecialNextHopEnum::receive {3, "receive"};

const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::NetworkTypeEnum::broadcast {0, "broadcast"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::NetworkTypeEnum::non_broadcast {1, "non-broadcast"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::NetworkTypeEnum::point_to_multipoint {2, "point-to-multipoint"};
const Enum::YLeaf Routing::RoutingInstance::RoutingProtocols::RoutingProtocol::Ospf::Instance::Area::Interface::NetworkTypeEnum::point_to_point {3, "point-to-point"};

const Enum::YLeaf FibRouteRpc::Output::Route::NextHop::SpecialNextHopEnum::blackhole {0, "blackhole"};
const Enum::YLeaf FibRouteRpc::Output::Route::NextHop::SpecialNextHopEnum::unreachable {1, "unreachable"};
const Enum::YLeaf FibRouteRpc::Output::Route::NextHop::SpecialNextHopEnum::prohibit {2, "prohibit"};
const Enum::YLeaf FibRouteRpc::Output::Route::NextHop::SpecialNextHopEnum::receive {3, "receive"};


}
}

