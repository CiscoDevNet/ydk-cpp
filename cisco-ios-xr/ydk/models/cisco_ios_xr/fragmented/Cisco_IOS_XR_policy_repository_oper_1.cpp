
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_policy_repository_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_policy_repository_oper {

RoutingPolicy::Sets::Mac::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "mac";
}

RoutingPolicy::Sets::Mac::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Mac::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Mac::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Mac::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Mac::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/mac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Mac::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Mac::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::Mac::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::Mac::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::Mac::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Mac::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/mac/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Mac::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::Mac::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::Mac::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Mac::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::Mac::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "mac";
}

RoutingPolicy::Sets::Mac::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Mac::Unused::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Mac::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Mac::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Mac::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/mac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Mac::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Mac::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "mac";
}

RoutingPolicy::Sets::Mac::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Mac::Inactive::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Mac::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Mac::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Mac::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/mac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Mac::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::Mac::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "mac";
}

RoutingPolicy::Sets::Mac::Active::~Active()
{
}

bool RoutingPolicy::Sets::Mac::Active::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Mac::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::Mac::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::Mac::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/mac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Mac::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunityCost::ExtendedCommunityCost()
    :
    active(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Unused>())
{
    active->parent = this;

    inactive->parent = this;

    sets->parent = this;

    unused->parent = this;

    yang_name = "extended-community-cost"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityCost::~ExtendedCommunityCost()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-cost";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Unused>();
        }
        return unused;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Sets_()
{
    yang_name = "sets"; yang_parent_name = "extended-community-cost";
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-cost/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy>())
{
    attached->parent = this;

    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets";
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(set_name.operation)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-cost/sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.operation)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-name")
    {
        set_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::UsedBy()
{
    yang_name = "used-by"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsedBy' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{
    yang_name = "reference"; yang_parent_name = "used-by";
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(status.operation)
	|| is_set(used_directly.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.operation)) leaf_name_data.push_back(used_directly.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Attached()
{
    yang_name = "attached"; yang_parent_name = "set";
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attached' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::set_value(const std::string & value_path, std::string value)
{
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::Binding()
    :
    af_name{YType::enumeration, "af-name"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    area_id{YType::str, "area-id"},
    attach_point{YType::str, "attach-point"},
    attached_policy{YType::str, "attached-policy"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    group_name{YType::str, "group-name"},
    instance{YType::str, "instance"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    proto_instance{YType::str, "proto-instance"},
    protocol{YType::str, "protocol"},
    route_policy_name{YType::str, "route-policy-name"},
    saf_name{YType::enumeration, "saf-name"},
    source_protocol{YType::str, "source-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "binding"; yang_parent_name = "attached";
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::has_data() const
{
    return af_name.is_set
	|| aggregate_network_address.is_set
	|| area_id.is_set
	|| attach_point.is_set
	|| attached_policy.is_set
	|| direction.is_set
	|| group.is_set
	|| group_name.is_set
	|| instance.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| proto_instance.is_set
	|| protocol.is_set
	|| route_policy_name.is_set
	|| saf_name.is_set
	|| source_protocol.is_set
	|| vrf_name.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(aggregate_network_address.operation)
	|| is_set(area_id.operation)
	|| is_set(attach_point.operation)
	|| is_set(attached_policy.operation)
	|| is_set(direction.operation)
	|| is_set(group.operation)
	|| is_set(group_name.operation)
	|| is_set(instance.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_af_name.operation)
	|| is_set(propogate_from.operation)
	|| is_set(propogate_to.operation)
	|| is_set(proto_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(source_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_policy_repository_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.operation)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.operation)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.operation)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.operation)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.operation)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.operation)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.operation)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.operation)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RoutingPolicy::Sets::ExtendedCommunityCost::Unused::Unused()
    :
    object{YType::str, "object"}
{
    yang_name = "unused"; yang_parent_name = "extended-community-cost";
}

RoutingPolicy::Sets::ExtendedCommunityCost::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Unused::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCost::Unused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-cost/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Unused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::Inactive()
    :
    object{YType::str, "object"}
{
    yang_name = "inactive"; yang_parent_name = "extended-community-cost";
}

RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-cost/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

RoutingPolicy::Sets::ExtendedCommunityCost::Active::Active()
    :
    object{YType::str, "object"}
{
    yang_name = "active"; yang_parent_name = "extended-community-cost";
}

RoutingPolicy::Sets::ExtendedCommunityCost::Active::~Active()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Active::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(object.operation);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath RoutingPolicy::Sets::ExtendedCommunityCost::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-cost/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}


}
}

