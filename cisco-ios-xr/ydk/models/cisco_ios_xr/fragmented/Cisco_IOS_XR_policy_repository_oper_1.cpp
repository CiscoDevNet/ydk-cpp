
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_policy_repository_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_policy_repository_oper {

RoutingPolicy::Sets::Rd::Sets_::Sets_()
{

    yang_name = "sets"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Rd::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Rd::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Rd::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Rd::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : set)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Rd::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Rd::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::Rd::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    used_by(std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy>())
	,attached(std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Rd::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::Rd::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/rd/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Rd::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Rd::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Rd::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::UsedBy()
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Attached()
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Rd::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Rd::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Rd::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        auto c = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : binding)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Rd::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::has_data() const
{
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::Rd::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Rd::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Rd::Unused::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Rd::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Rd::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Rd::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::Rd::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Rd::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Rd::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Rd::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Rd::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Rd::Inactive::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Rd::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Rd::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Rd::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::Rd::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Rd::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Rd::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Rd::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Rd::Active::~Active()
{
}

bool RoutingPolicy::Sets::Rd::Active::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Rd::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Rd::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Rd::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Rd::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::Rd::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Rd::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Rd::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Mac::Mac()
    :
    sets(std::make_shared<RoutingPolicy::Sets::Mac::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::Mac::Unused>())
	,inactive(std::make_shared<RoutingPolicy::Sets::Mac::Inactive>())
	,active(std::make_shared<RoutingPolicy::Sets::Mac::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "mac"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Mac::~Mac()
{
}

bool RoutingPolicy::Sets::Mac::has_data() const
{
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::Mac::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::Mac::Unused>();
        }
        return unused;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Mac::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Mac::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        children["active"] = active;
    }

    return children;
}

void RoutingPolicy::Sets::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::Mac::Sets_::Sets_()
{

    yang_name = "sets"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Mac::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Mac::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Mac::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : set)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Mac::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Mac::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::Mac::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    used_by(std::make_shared<RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy>())
	,attached(std::make_shared<RoutingPolicy::Sets::Mac::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Mac::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::Mac::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/mac/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Mac::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Mac::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Mac::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Mac::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::UsedBy()
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Attached()
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Mac::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Mac::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : binding)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Mac::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::has_data() const
{
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::Mac::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Mac::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Mac::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Mac::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::Mac::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Mac::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Mac::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Mac::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Mac::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Mac::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Mac::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::Mac::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Mac::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Mac::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Mac::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Mac::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Mac::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Mac::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Mac::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Mac::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::Mac::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Mac::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Mac::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::ExtendedCommunityCost()
    :
    sets(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Unused>())
	,inactive(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Inactive>())
	,active(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Active>())
{
    sets->parent = this;
    unused->parent = this;
    inactive->parent = this;
    active->parent = this;

    yang_name = "extended-community-cost"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::~ExtendedCommunityCost()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::has_data() const
{
    return (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::has_operation() const
{
    return is_set(yfilter)
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sets != nullptr)
    {
        children["sets"] = sets;
    }

    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(active != nullptr)
    {
        children["active"] = active;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityCost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sets" || name == "unused" || name == "inactive" || name == "active")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Sets_()
{

    yang_name = "sets"; yang_parent_name = "extended-community-cost"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-cost/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : set)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    used_by(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy>())
	,attached(std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached>())
{
    used_by->parent = this;
    attached->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (used_by !=  nullptr && used_by->has_data())
	|| (attached !=  nullptr && attached->has_data());
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (used_by !=  nullptr && used_by->has_operation())
	|| (attached !=  nullptr && attached->has_operation());
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-cost/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached>();
        }
        return attached;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(used_by != nullptr)
    {
        children["used-by"] = used_by;
    }

    if(attached != nullptr)
    {
        children["attached"] = attached;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used-by" || name == "attached" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::UsedBy()
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    used_directly{YType::boolean, "used-directly"},
    status{YType::enumeration, "status"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| used_directly.is_set
	|| status.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(used_directly.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "used-directly" || name == "status")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Attached()
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : binding)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::Binding()
    :
    protocol{YType::str, "protocol"},
    vrf_name{YType::str, "vrf-name"},
    proto_instance{YType::str, "proto-instance"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_af_name{YType::enumeration, "neighbor-af-name"},
    group_name{YType::str, "group-name"},
    direction{YType::enumeration, "direction"},
    group{YType::enumeration, "group"},
    source_protocol{YType::str, "source-protocol"},
    aggregate_network_address{YType::str, "aggregate-network-address"},
    interface_name{YType::str, "interface-name"},
    instance{YType::str, "instance"},
    area_id{YType::str, "area-id"},
    propogate_from{YType::int32, "propogate-from"},
    propogate_to{YType::int32, "propogate-to"},
    route_policy_name{YType::str, "route-policy-name"},
    attached_policy{YType::str, "attached-policy"},
    attach_point{YType::str, "attach-point"}
{

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::has_data() const
{
    return protocol.is_set
	|| vrf_name.is_set
	|| proto_instance.is_set
	|| af_name.is_set
	|| saf_name.is_set
	|| neighbor_address.is_set
	|| neighbor_af_name.is_set
	|| group_name.is_set
	|| direction.is_set
	|| group.is_set
	|| source_protocol.is_set
	|| aggregate_network_address.is_set
	|| interface_name.is_set
	|| instance.is_set
	|| area_id.is_set
	|| propogate_from.is_set
	|| propogate_to.is_set
	|| route_policy_name.is_set
	|| attached_policy.is_set
	|| attach_point.is_set;
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(attach_point.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name = value;
        neighbor_af_name.value_namespace = name_space;
        neighbor_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-from")
    {
        propogate_from = value;
        propogate_from.value_namespace = name_space;
        propogate_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propogate-to")
    {
        propogate_to = value;
        propogate_to.value_namespace = name_space;
        propogate_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name" || name == "proto-instance" || name == "af-name" || name == "saf-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "group-name" || name == "direction" || name == "group" || name == "source-protocol" || name == "aggregate-network-address" || name == "interface-name" || name == "instance" || name == "area-id" || name == "propogate-from" || name == "propogate-to" || name == "route-policy-name" || name == "attached-policy" || name == "attach-point")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "extended-community-cost"; is_top_level_class = false; has_list_ancestor = false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-cost/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCost::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "extended-community-cost"; is_top_level_class = false; has_list_ancestor = false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-cost/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::ExtendedCommunityCost::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "extended-community-cost"; is_top_level_class = false; has_list_ancestor = false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/extended-community-cost/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::ExtendedCommunityCost::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::ExtendedCommunityCost::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::ExtendedCommunityCost::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::ExtendedCommunityCost::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::ExtendedCommunityCost::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::ExtendedCommunityCost::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}


}
}

