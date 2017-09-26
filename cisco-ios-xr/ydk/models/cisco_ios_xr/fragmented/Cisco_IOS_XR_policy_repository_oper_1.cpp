
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_policy_repository_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_policy_repository_oper {

RoutingPolicy::Sets::Prefix::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Prefix::Active::~Active()
{
}

bool RoutingPolicy::Sets::Prefix::Active::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Prefix::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Prefix::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Prefix::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Prefix::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Prefix::Inactive::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Prefix::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Prefix::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Prefix::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Sets_()
{

    yang_name = "sets"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Prefix::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Prefix::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Prefix::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Prefix::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy>())
{
    attached->parent = this;
    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::get_children() const
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

void RoutingPolicy::Sets::Prefix::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attached" || name == "used-by" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Attached()
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::Binding()
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

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::has_data() const
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

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(attach_point.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "aggregate-network-address" || name == "area-id" || name == "attach-point" || name == "attached-policy" || name == "direction" || name == "group" || name == "group-name" || name == "instance" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "propogate-from" || name == "propogate-to" || name == "proto-instance" || name == "protocol" || name == "route-policy-name" || name == "saf-name" || name == "source-protocol" || name == "vrf-name")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::UsedBy()
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(used_directly.yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "status" || name == "used-directly")
        return true;
    return false;
}

RoutingPolicy::Sets::Prefix::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Prefix::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Prefix::Unused::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Prefix::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Prefix::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Prefix::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Prefix::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Prefix::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Prefix::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Prefix::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Prefix::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Prefix::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Rd::Rd()
    :
    active(std::make_shared<RoutingPolicy::Sets::Rd::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::Rd::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::Rd::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::Rd::Unused>())
{
    active->parent = this;
    inactive->parent = this;
    sets->parent = this;
    unused->parent = this;

    yang_name = "rd"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Rd::~Rd()
{
}

bool RoutingPolicy::Sets::Rd::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::Rd::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::Rd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Rd::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Rd::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::Rd::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::Rd::Unused>();
        }
        return unused;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::get_children() const
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

void RoutingPolicy::Sets::Rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Rd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "inactive" || name == "sets" || name == "unused")
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
        for(auto const & c : set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
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
    attached(std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy>())
{
    attached->parent = this;
    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Rd::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
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
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::get_children() const
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
    if(name == "attached" || name == "used-by" || name == "set-name")
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
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
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

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::has_data() const
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

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(attach_point.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
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

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "aggregate-network-address" || name == "area-id" || name == "attach-point" || name == "attached-policy" || name == "direction" || name == "group" || name == "group-name" || name == "instance" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "propogate-from" || name == "propogate-to" || name == "proto-instance" || name == "protocol" || name == "route-policy-name" || name == "saf-name" || name == "source-protocol" || name == "vrf-name")
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
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
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
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(used_directly.yfilter);
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
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "status" || name == "used-directly")
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

RoutingPolicy::Sets::Tag::Tag()
    :
    active(std::make_shared<RoutingPolicy::Sets::Tag::Active>())
	,inactive(std::make_shared<RoutingPolicy::Sets::Tag::Inactive>())
	,sets(std::make_shared<RoutingPolicy::Sets::Tag::Sets_>())
	,unused(std::make_shared<RoutingPolicy::Sets::Tag::Unused>())
{
    active->parent = this;
    inactive->parent = this;
    sets->parent = this;
    unused->parent = this;

    yang_name = "tag"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Tag::~Tag()
{
}

bool RoutingPolicy::Sets::Tag::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (sets !=  nullptr && sets->has_data())
	|| (unused !=  nullptr && unused->has_data());
}

bool RoutingPolicy::Sets::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (sets !=  nullptr && sets->has_operation())
	|| (unused !=  nullptr && unused->has_operation());
}

std::string RoutingPolicy::Sets::Tag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<RoutingPolicy::Sets::Tag::Active>();
        }
        return active;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<RoutingPolicy::Sets::Tag::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "sets")
    {
        if(sets == nullptr)
        {
            sets = std::make_shared<RoutingPolicy::Sets::Tag::Sets_>();
        }
        return sets;
    }

    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<RoutingPolicy::Sets::Tag::Unused>();
        }
        return unused;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::get_children() const
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

void RoutingPolicy::Sets::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "inactive" || name == "sets" || name == "unused")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Active::Active()
    :
    object{YType::str, "object"}
{

    yang_name = "active"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Tag::Active::~Active()
{
}

bool RoutingPolicy::Sets::Tag::Active::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Active::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Tag::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Tag::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Tag::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Inactive::Inactive()
    :
    object{YType::str, "object"}
{

    yang_name = "inactive"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Tag::Inactive::~Inactive()
{
}

bool RoutingPolicy::Sets::Tag::Inactive::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Inactive::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Tag::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Tag::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Tag::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Sets_()
{

    yang_name = "sets"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Tag::Sets_::~Sets_()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::has_data() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Sets_::has_operation() const
{
    for (std::size_t index=0; index<set.size(); index++)
    {
        if(set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Tag::Sets_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::Sets_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set>();
        c->parent = this;
        set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Tag::Sets_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Tag::Sets_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Tag::Sets_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Set::Set()
    :
    set_name{YType::str, "set-name"}
    	,
    attached(std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::Attached>())
	,used_by(std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy>())
{
    attached->parent = this;
    used_by->parent = this;

    yang_name = "set"; yang_parent_name = "sets"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Tag::Sets_::Set::~Set()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::has_data() const
{
    return set_name.is_set
	|| (attached !=  nullptr && attached->has_data())
	|| (used_by !=  nullptr && used_by->has_data());
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (attached !=  nullptr && attached->has_operation())
	|| (used_by !=  nullptr && used_by->has_operation());
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/sets/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set" <<"[set-name='" <<set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached")
    {
        if(attached == nullptr)
        {
            attached = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::Attached>();
        }
        return attached;
    }

    if(child_yang_name == "used-by")
    {
        if(used_by == nullptr)
        {
            used_by = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy>();
        }
        return used_by;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::get_children() const
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

void RoutingPolicy::Sets::Tag::Sets_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Tag::Sets_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attached" || name == "used-by" || name == "set-name")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Attached()
{

    yang_name = "attached"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::~Attached()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::Attached::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Tag::Sets_::Set::Attached::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::Binding()
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

    yang_name = "binding"; yang_parent_name = "attached"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::~Binding()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::has_data() const
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

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(aggregate_network_address.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(attach_point.yfilter)
	|| ydk::is_set(attached_policy.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_af_name.yfilter)
	|| ydk::is_set(propogate_from.yfilter)
	|| ydk::is_set(propogate_to.yfilter)
	|| ydk::is_set(proto_instance.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(source_protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (aggregate_network_address.is_set || is_set(aggregate_network_address.yfilter)) leaf_name_data.push_back(aggregate_network_address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (attach_point.is_set || is_set(attach_point.yfilter)) leaf_name_data.push_back(attach_point.get_name_leafdata());
    if (attached_policy.is_set || is_set(attached_policy.yfilter)) leaf_name_data.push_back(attached_policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_af_name.is_set || is_set(neighbor_af_name.yfilter)) leaf_name_data.push_back(neighbor_af_name.get_name_leafdata());
    if (propogate_from.is_set || is_set(propogate_from.yfilter)) leaf_name_data.push_back(propogate_from.get_name_leafdata());
    if (propogate_to.is_set || is_set(propogate_to.yfilter)) leaf_name_data.push_back(propogate_to.get_name_leafdata());
    if (proto_instance.is_set || is_set(proto_instance.yfilter)) leaf_name_data.push_back(proto_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (source_protocol.is_set || is_set(source_protocol.yfilter)) leaf_name_data.push_back(source_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address = value;
        aggregate_network_address.value_namespace = name_space;
        aggregate_network_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-point")
    {
        attach_point = value;
        attach_point.value_namespace = name_space;
        attach_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-policy")
    {
        attached_policy = value;
        attached_policy.value_namespace = name_space;
        attached_policy.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "proto-instance")
    {
        proto_instance = value;
        proto_instance.value_namespace = name_space;
        proto_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-protocol")
    {
        source_protocol = value;
        source_protocol.value_namespace = name_space;
        source_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "aggregate-network-address")
    {
        aggregate_network_address.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "attach-point")
    {
        attach_point.yfilter = yfilter;
    }
    if(value_path == "attached-policy")
    {
        attached_policy.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-name")
    {
        neighbor_af_name.yfilter = yfilter;
    }
    if(value_path == "propogate-from")
    {
        propogate_from.yfilter = yfilter;
    }
    if(value_path == "propogate-to")
    {
        propogate_to.yfilter = yfilter;
    }
    if(value_path == "proto-instance")
    {
        proto_instance.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "source-protocol")
    {
        source_protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "aggregate-network-address" || name == "area-id" || name == "attach-point" || name == "attached-policy" || name == "direction" || name == "group" || name == "group-name" || name == "instance" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-af-name" || name == "propogate-from" || name == "propogate-to" || name == "proto-instance" || name == "protocol" || name == "route-policy-name" || name == "saf-name" || name == "source-protocol" || name == "vrf-name")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::UsedBy()
{

    yang_name = "used-by"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::~UsedBy()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "used-by";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::Reference()
    :
    route_policy_name{YType::str, "route-policy-name"},
    status{YType::enumeration, "status"},
    used_directly{YType::boolean, "used-directly"}
{

    yang_name = "reference"; yang_parent_name = "used-by"; is_top_level_class = false; has_list_ancestor = true;
}

RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::~Reference()
{
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::has_data() const
{
    return route_policy_name.is_set
	|| status.is_set
	|| used_directly.is_set;
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(used_directly.yfilter);
}

std::string RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (used_directly.is_set || is_set(used_directly.yfilter)) leaf_name_data.push_back(used_directly.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-directly")
    {
        used_directly = value;
        used_directly.value_namespace = name_space;
        used_directly.value_namespace_prefix = name_space_prefix;
    }
}

void RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "used-directly")
    {
        used_directly.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "status" || name == "used-directly")
        return true;
    return false;
}

RoutingPolicy::Sets::Tag::Unused::Unused()
    :
    object{YType::str, "object"}
{

    yang_name = "unused"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = false;
}

RoutingPolicy::Sets::Tag::Unused::~Unused()
{
}

bool RoutingPolicy::Sets::Tag::Unused::has_data() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RoutingPolicy::Sets::Tag::Unused::has_operation() const
{
    for (auto const & leaf : object.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter);
}

std::string RoutingPolicy::Sets::Tag::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-policy-repository-oper:routing-policy/sets/tag/" << get_segment_path();
    return path_buffer.str();
}

std::string RoutingPolicy::Sets::Tag::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RoutingPolicy::Sets::Tag::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto object_name_datas = object.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), object_name_datas.begin(), object_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RoutingPolicy::Sets::Tag::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RoutingPolicy::Sets::Tag::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RoutingPolicy::Sets::Tag::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object.append(value);
    }
}

void RoutingPolicy::Sets::Tag::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
}

bool RoutingPolicy::Sets::Tag::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}


}
}

