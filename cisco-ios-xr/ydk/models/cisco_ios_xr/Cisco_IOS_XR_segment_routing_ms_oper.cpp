
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_segment_routing_ms_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_segment_routing_ms_oper {

Srms::Srms()
    :
    mapping(std::make_shared<Srms::Mapping>())
	,policy(std::make_shared<Srms::Policy>())
{
    mapping->parent = this;
    policy->parent = this;

    yang_name = "srms"; yang_parent_name = "Cisco-IOS-XR-segment-routing-ms-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Srms::~Srms()
{
}

bool Srms::has_data() const
{
    return (mapping !=  nullptr && mapping->has_data())
	|| (policy !=  nullptr && policy->has_data());
}

bool Srms::has_operation() const
{
    return is_set(yfilter)
	|| (mapping !=  nullptr && mapping->has_operation())
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Srms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Srms::Mapping>();
        }
        return mapping;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Srms::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mapping != nullptr)
    {
        children["mapping"] = mapping;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    return children;
}

void Srms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Srms::clone_ptr() const
{
    return std::make_shared<Srms>();
}

std::string Srms::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Srms::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Srms::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Srms::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Srms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping" || name == "policy")
        return true;
    return false;
}

Srms::Mapping::Mapping()
    :
    mapping_ipv4(std::make_shared<Srms::Mapping::MappingIpv4>())
	,mapping_ipv6(std::make_shared<Srms::Mapping::MappingIpv6>())
{
    mapping_ipv4->parent = this;
    mapping_ipv6->parent = this;

    yang_name = "mapping"; yang_parent_name = "srms"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Mapping::~Mapping()
{
}

bool Srms::Mapping::has_data() const
{
    return (mapping_ipv4 !=  nullptr && mapping_ipv4->has_data())
	|| (mapping_ipv6 !=  nullptr && mapping_ipv6->has_data());
}

bool Srms::Mapping::has_operation() const
{
    return is_set(yfilter)
	|| (mapping_ipv4 !=  nullptr && mapping_ipv4->has_operation())
	|| (mapping_ipv6 !=  nullptr && mapping_ipv6->has_operation());
}

std::string Srms::Mapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Mapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-ipv4")
    {
        if(mapping_ipv4 == nullptr)
        {
            mapping_ipv4 = std::make_shared<Srms::Mapping::MappingIpv4>();
        }
        return mapping_ipv4;
    }

    if(child_yang_name == "mapping-ipv6")
    {
        if(mapping_ipv6 == nullptr)
        {
            mapping_ipv6 = std::make_shared<Srms::Mapping::MappingIpv6>();
        }
        return mapping_ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mapping_ipv4 != nullptr)
    {
        children["mapping-ipv4"] = mapping_ipv4;
    }

    if(mapping_ipv6 != nullptr)
    {
        children["mapping-ipv6"] = mapping_ipv6;
    }

    return children;
}

void Srms::Mapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::Mapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::Mapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-ipv4" || name == "mapping-ipv6")
        return true;
    return false;
}

Srms::Mapping::MappingIpv4::MappingIpv4()
{

    yang_name = "mapping-ipv4"; yang_parent_name = "mapping"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Mapping::MappingIpv4::~MappingIpv4()
{
}

bool Srms::Mapping::MappingIpv4::has_data() const
{
    for (std::size_t index=0; index<mapping_mi.size(); index++)
    {
        if(mapping_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Mapping::MappingIpv4::has_operation() const
{
    for (std::size_t index=0; index<mapping_mi.size(); index++)
    {
        if(mapping_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srms::Mapping::MappingIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Mapping::MappingIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Mapping::MappingIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Mapping::MappingIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-mi")
    {
        auto c = std::make_shared<Srms::Mapping::MappingIpv4::MappingMi>();
        c->parent = this;
        mapping_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Mapping::MappingIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mapping_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srms::Mapping::MappingIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::Mapping::MappingIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::Mapping::MappingIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-mi")
        return true;
    return false;
}

Srms::Mapping::MappingIpv4::MappingMi::MappingMi()
    :
    ip{YType::str, "ip"},
    prefix{YType::int32, "prefix"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix_xr{YType::uint8, "prefix-xr"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
    	,
    addr(std::make_shared<Srms::Mapping::MappingIpv4::MappingMi::Addr>())
{
    addr->parent = this;

    yang_name = "mapping-mi"; yang_parent_name = "mapping-ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Mapping::MappingIpv4::MappingMi::~MappingMi()
{
}

bool Srms::Mapping::MappingIpv4::MappingMi::has_data() const
{
    return ip.is_set
	|| prefix.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix_xr.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Mapping::MappingIpv4::MappingMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix_xr.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Mapping::MappingIpv4::MappingMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/mapping-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Mapping::MappingIpv4::MappingMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-mi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Mapping::MappingIpv4::MappingMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.yfilter)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Mapping::MappingIpv4::MappingMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Srms::Mapping::MappingIpv4::MappingMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Mapping::MappingIpv4::MappingMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Srms::Mapping::MappingIpv4::MappingMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
        prefix_xr.value_namespace = name_space;
        prefix_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Mapping::MappingIpv4::MappingMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Srms::Mapping::MappingIpv4::MappingMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "ip" || name == "prefix" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Srms::Mapping::MappingIpv4::MappingMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "mapping-mi"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Mapping::MappingIpv4::MappingMi::Addr::~Addr()
{
}

bool Srms::Mapping::MappingIpv4::MappingMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Mapping::MappingIpv4::MappingMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Srms::Mapping::MappingIpv4::MappingMi::Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/mapping-ipv4/mapping-mi/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Mapping::MappingIpv4::MappingMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Mapping::MappingIpv4::MappingMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Mapping::MappingIpv4::MappingMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Mapping::MappingIpv4::MappingMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srms::Mapping::MappingIpv4::MappingMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Mapping::MappingIpv4::MappingMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Srms::Mapping::MappingIpv4::MappingMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Srms::Mapping::MappingIpv6::MappingIpv6()
{

    yang_name = "mapping-ipv6"; yang_parent_name = "mapping"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Mapping::MappingIpv6::~MappingIpv6()
{
}

bool Srms::Mapping::MappingIpv6::has_data() const
{
    for (std::size_t index=0; index<mapping_mi.size(); index++)
    {
        if(mapping_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Mapping::MappingIpv6::has_operation() const
{
    for (std::size_t index=0; index<mapping_mi.size(); index++)
    {
        if(mapping_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srms::Mapping::MappingIpv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Mapping::MappingIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Mapping::MappingIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Mapping::MappingIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-mi")
    {
        auto c = std::make_shared<Srms::Mapping::MappingIpv6::MappingMi>();
        c->parent = this;
        mapping_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Mapping::MappingIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mapping_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srms::Mapping::MappingIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::Mapping::MappingIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::Mapping::MappingIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-mi")
        return true;
    return false;
}

Srms::Mapping::MappingIpv6::MappingMi::MappingMi()
    :
    ip{YType::str, "ip"},
    prefix{YType::int32, "prefix"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix_xr{YType::uint8, "prefix-xr"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
    	,
    addr(std::make_shared<Srms::Mapping::MappingIpv6::MappingMi::Addr>())
{
    addr->parent = this;

    yang_name = "mapping-mi"; yang_parent_name = "mapping-ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Mapping::MappingIpv6::MappingMi::~MappingMi()
{
}

bool Srms::Mapping::MappingIpv6::MappingMi::has_data() const
{
    return ip.is_set
	|| prefix.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix_xr.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Mapping::MappingIpv6::MappingMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix_xr.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Mapping::MappingIpv6::MappingMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/mapping-ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Mapping::MappingIpv6::MappingMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-mi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Mapping::MappingIpv6::MappingMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.yfilter)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Mapping::MappingIpv6::MappingMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Srms::Mapping::MappingIpv6::MappingMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Mapping::MappingIpv6::MappingMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Srms::Mapping::MappingIpv6::MappingMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
        prefix_xr.value_namespace = name_space;
        prefix_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Mapping::MappingIpv6::MappingMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Srms::Mapping::MappingIpv6::MappingMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "ip" || name == "prefix" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Srms::Mapping::MappingIpv6::MappingMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "mapping-mi"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Mapping::MappingIpv6::MappingMi::Addr::~Addr()
{
}

bool Srms::Mapping::MappingIpv6::MappingMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Mapping::MappingIpv6::MappingMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Srms::Mapping::MappingIpv6::MappingMi::Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/mapping-ipv6/mapping-mi/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Mapping::MappingIpv6::MappingMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Mapping::MappingIpv6::MappingMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Mapping::MappingIpv6::MappingMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Mapping::MappingIpv6::MappingMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srms::Mapping::MappingIpv6::MappingMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Mapping::MappingIpv6::MappingMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Srms::Mapping::MappingIpv6::MappingMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Srms::Policy::Policy()
    :
    policy_ipv4(std::make_shared<Srms::Policy::PolicyIpv4>())
	,policy_ipv6(std::make_shared<Srms::Policy::PolicyIpv6>())
{
    policy_ipv4->parent = this;
    policy_ipv6->parent = this;

    yang_name = "policy"; yang_parent_name = "srms"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Policy::~Policy()
{
}

bool Srms::Policy::has_data() const
{
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_data());
}

bool Srms::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_operation());
}

std::string Srms::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 == nullptr)
        {
            policy_ipv4 = std::make_shared<Srms::Policy::PolicyIpv4>();
        }
        return policy_ipv4;
    }

    if(child_yang_name == "policy-ipv6")
    {
        if(policy_ipv6 == nullptr)
        {
            policy_ipv6 = std::make_shared<Srms::Policy::PolicyIpv6>();
        }
        return policy_ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_ipv4 != nullptr)
    {
        children["policy-ipv4"] = policy_ipv4;
    }

    if(policy_ipv6 != nullptr)
    {
        children["policy-ipv6"] = policy_ipv6;
    }

    return children;
}

void Srms::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4" || name == "policy-ipv6")
        return true;
    return false;
}

Srms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_backup(std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Backup>())
	,policy_ipv4_active(std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
{
    policy_ipv4_backup->parent = this;
    policy_ipv4_active->parent = this;

    yang_name = "policy-ipv4"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool Srms::Policy::PolicyIpv4::has_data() const
{
    return (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data())
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data());
}

bool Srms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation())
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation());
}

std::string Srms::Policy::PolicyIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup == nullptr)
        {
            policy_ipv4_backup = std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Backup>();
        }
        return policy_ipv4_backup;
    }

    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active == nullptr)
        {
            policy_ipv4_active = std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Active>();
        }
        return policy_ipv4_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_ipv4_backup != nullptr)
    {
        children["policy-ipv4-backup"] = policy_ipv4_backup;
    }

    if(policy_ipv4_active != nullptr)
    {
        children["policy-ipv4-active"] = policy_ipv4_active;
    }

    return children;
}

void Srms::Policy::PolicyIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::Policy::PolicyIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::Policy::PolicyIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4-backup" || name == "policy-ipv4-active")
        return true;
    return false;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
{

    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto c = std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix_xr{YType::uint8, "prefix-xr"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
    	,
    addr(std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix_xr.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix_xr.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv4/policy-ipv4-backup/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.yfilter)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
        prefix_xr.value_namespace = name_space;
        prefix_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
{

    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto c = std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix_xr{YType::uint8, "prefix-xr"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
    	,
    addr(std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix_xr.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix_xr.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv4/policy-ipv4-active/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.yfilter)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
        prefix_xr.value_namespace = name_space;
        prefix_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Srms::Policy::PolicyIpv6::PolicyIpv6()
    :
    policy_ipv6_backup(std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Backup>())
	,policy_ipv6_active(std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Active>())
{
    policy_ipv6_backup->parent = this;
    policy_ipv6_active->parent = this;

    yang_name = "policy-ipv6"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Policy::PolicyIpv6::~PolicyIpv6()
{
}

bool Srms::Policy::PolicyIpv6::has_data() const
{
    return (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_data())
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_data());
}

bool Srms::Policy::PolicyIpv6::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_operation())
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_operation());
}

std::string Srms::Policy::PolicyIpv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Policy::PolicyIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv6-backup")
    {
        if(policy_ipv6_backup == nullptr)
        {
            policy_ipv6_backup = std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Backup>();
        }
        return policy_ipv6_backup;
    }

    if(child_yang_name == "policy-ipv6-active")
    {
        if(policy_ipv6_active == nullptr)
        {
            policy_ipv6_active = std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Active>();
        }
        return policy_ipv6_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_ipv6_backup != nullptr)
    {
        children["policy-ipv6-backup"] = policy_ipv6_backup;
    }

    if(policy_ipv6_active != nullptr)
    {
        children["policy-ipv6-active"] = policy_ipv6_active;
    }

    return children;
}

void Srms::Policy::PolicyIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::Policy::PolicyIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::Policy::PolicyIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv6-backup" || name == "policy-ipv6-active")
        return true;
    return false;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyIpv6Backup()
{

    yang_name = "policy-ipv6-backup"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::~PolicyIpv6Backup()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto c = std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix_xr{YType::uint8, "prefix-xr"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
    	,
    addr(std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-backup"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::~PolicyMi()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix_xr.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix_xr.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv6/policy-ipv6-backup/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.yfilter)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
        prefix_xr.value_namespace = name_space;
        prefix_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::~Addr()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyIpv6Active()
{

    yang_name = "policy-ipv6-active"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::~PolicyIpv6Active()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto c = std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix_xr{YType::uint8, "prefix-xr"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
    	,
    addr(std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-active"; is_top_level_class = false; has_list_ancestor = false;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::~PolicyMi()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix_xr.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix_xr.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv6/policy-ipv6-active/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.yfilter)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
        prefix_xr.value_namespace = name_space;
        prefix_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::~Addr()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

const Enum::YLeaf SrmsMiFlagEB::false_ {0, "false"};
const Enum::YLeaf SrmsMiFlagEB::true_ {1, "true"};

const Enum::YLeaf SrmsMiAfEB::none {0, "none"};
const Enum::YLeaf SrmsMiAfEB::ipv4 {1, "ipv4"};
const Enum::YLeaf SrmsMiAfEB::ipv6 {2, "ipv6"};

const Enum::YLeaf SrmsMiSrcEB::none {0, "none"};
const Enum::YLeaf SrmsMiSrcEB::local {1, "local"};
const Enum::YLeaf SrmsMiSrcEB::remote {2, "remote"};


}
}

