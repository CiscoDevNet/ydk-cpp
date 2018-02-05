
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_icmp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_icmp_cfg {

Icmp::Icmp()
    :
    ipv6(std::make_shared<Icmp::Ipv6>())
	,ipv4(std::make_shared<Icmp::Ipv4>())
{
    ipv6->parent = this;
    ipv4->parent = this;

    yang_name = "icmp"; yang_parent_name = "Cisco-IOS-XR-ip-icmp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Icmp::~Icmp()
{
}

bool Icmp::has_data() const
{
    return (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-icmp-cfg:icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Icmp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Icmp::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Icmp::clone_ptr() const
{
    return std::make_shared<Icmp>();
}

std::string Icmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Icmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Icmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Icmp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ipv4")
        return true;
    return false;
}

Icmp::Ipv6::Ipv6()
    :
    rate_limit(std::make_shared<Icmp::Ipv6::RateLimit>())
	,source(std::make_shared<Icmp::Ipv6::Source>())
{
    rate_limit->parent = this;
    source->parent = this;

    yang_name = "ipv6"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = false;
}

Icmp::Ipv6::~Ipv6()
{
}

bool Icmp::Ipv6::has_data() const
{
    return (rate_limit !=  nullptr && rate_limit->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Icmp::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Icmp::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-icmp-cfg:icmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Icmp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Icmp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Icmp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Icmp::Ipv6::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Icmp::Ipv6::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Icmp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Icmp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Icmp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Icmp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit" || name == "source")
        return true;
    return false;
}

Icmp::Ipv6::RateLimit::RateLimit()
    :
    unreachable(std::make_shared<Icmp::Ipv6::RateLimit::Unreachable>())
{
    unreachable->parent = this;

    yang_name = "rate-limit"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Icmp::Ipv6::RateLimit::~RateLimit()
{
}

bool Icmp::Ipv6::RateLimit::has_data() const
{
    return (unreachable !=  nullptr && unreachable->has_data());
}

bool Icmp::Ipv6::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Icmp::Ipv6::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-icmp-cfg:icmp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Icmp::Ipv6::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Icmp::Ipv6::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Icmp::Ipv6::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Icmp::Ipv6::RateLimit::Unreachable>();
        }
        return unreachable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Icmp::Ipv6::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unreachable != nullptr)
    {
        children["unreachable"] = unreachable;
    }

    return children;
}

void Icmp::Ipv6::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Icmp::Ipv6::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Icmp::Ipv6::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unreachable")
        return true;
    return false;
}

Icmp::Ipv6::RateLimit::Unreachable::Unreachable()
    :
    rate{YType::uint32, "rate"},
    fragmentation{YType::uint32, "fragmentation"}
{

    yang_name = "unreachable"; yang_parent_name = "rate-limit"; is_top_level_class = false; has_list_ancestor = false;
}

Icmp::Ipv6::RateLimit::Unreachable::~Unreachable()
{
}

bool Icmp::Ipv6::RateLimit::Unreachable::has_data() const
{
    return rate.is_set
	|| fragmentation.is_set;
}

bool Icmp::Ipv6::RateLimit::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Icmp::Ipv6::RateLimit::Unreachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-icmp-cfg:icmp/ipv6/rate-limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Icmp::Ipv6::RateLimit::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Icmp::Ipv6::RateLimit::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Icmp::Ipv6::RateLimit::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Icmp::Ipv6::RateLimit::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Icmp::Ipv6::RateLimit::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
}

void Icmp::Ipv6::RateLimit::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
}

bool Icmp::Ipv6::RateLimit::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "fragmentation")
        return true;
    return false;
}

Icmp::Ipv6::Source::Source()
    :
    source_address_policy{YType::enumeration, "source-address-policy"}
{

    yang_name = "source"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Icmp::Ipv6::Source::~Source()
{
}

bool Icmp::Ipv6::Source::has_data() const
{
    return source_address_policy.is_set;
}

bool Icmp::Ipv6::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address_policy.yfilter);
}

std::string Icmp::Ipv6::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-icmp-cfg:icmp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Icmp::Ipv6::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Icmp::Ipv6::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address_policy.is_set || is_set(source_address_policy.yfilter)) leaf_name_data.push_back(source_address_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Icmp::Ipv6::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Icmp::Ipv6::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Icmp::Ipv6::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address-policy")
    {
        source_address_policy = value;
        source_address_policy.value_namespace = name_space;
        source_address_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Icmp::Ipv6::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address-policy")
    {
        source_address_policy.yfilter = yfilter;
    }
}

bool Icmp::Ipv6::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address-policy")
        return true;
    return false;
}

Icmp::Ipv4::Ipv4()
    :
    rate_limit(std::make_shared<Icmp::Ipv4::RateLimit>())
	,source(std::make_shared<Icmp::Ipv4::Source>())
{
    rate_limit->parent = this;
    source->parent = this;

    yang_name = "ipv4"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = false;
}

Icmp::Ipv4::~Ipv4()
{
}

bool Icmp::Ipv4::has_data() const
{
    return (rate_limit !=  nullptr && rate_limit->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Icmp::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Icmp::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-icmp-cfg:icmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Icmp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Icmp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Icmp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Icmp::Ipv4::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Icmp::Ipv4::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Icmp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Icmp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Icmp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Icmp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit" || name == "source")
        return true;
    return false;
}

Icmp::Ipv4::RateLimit::RateLimit()
    :
    unreachable(std::make_shared<Icmp::Ipv4::RateLimit::Unreachable>())
{
    unreachable->parent = this;

    yang_name = "rate-limit"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Icmp::Ipv4::RateLimit::~RateLimit()
{
}

bool Icmp::Ipv4::RateLimit::has_data() const
{
    return (unreachable !=  nullptr && unreachable->has_data());
}

bool Icmp::Ipv4::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Icmp::Ipv4::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-icmp-cfg:icmp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Icmp::Ipv4::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Icmp::Ipv4::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Icmp::Ipv4::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Icmp::Ipv4::RateLimit::Unreachable>();
        }
        return unreachable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Icmp::Ipv4::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unreachable != nullptr)
    {
        children["unreachable"] = unreachable;
    }

    return children;
}

void Icmp::Ipv4::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Icmp::Ipv4::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Icmp::Ipv4::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unreachable")
        return true;
    return false;
}

Icmp::Ipv4::RateLimit::Unreachable::Unreachable()
    :
    rate{YType::uint32, "rate"},
    fragmentation{YType::uint32, "fragmentation"}
{

    yang_name = "unreachable"; yang_parent_name = "rate-limit"; is_top_level_class = false; has_list_ancestor = false;
}

Icmp::Ipv4::RateLimit::Unreachable::~Unreachable()
{
}

bool Icmp::Ipv4::RateLimit::Unreachable::has_data() const
{
    return rate.is_set
	|| fragmentation.is_set;
}

bool Icmp::Ipv4::RateLimit::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Icmp::Ipv4::RateLimit::Unreachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-icmp-cfg:icmp/ipv4/rate-limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Icmp::Ipv4::RateLimit::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Icmp::Ipv4::RateLimit::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Icmp::Ipv4::RateLimit::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Icmp::Ipv4::RateLimit::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Icmp::Ipv4::RateLimit::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
}

void Icmp::Ipv4::RateLimit::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
}

bool Icmp::Ipv4::RateLimit::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "fragmentation")
        return true;
    return false;
}

Icmp::Ipv4::Source::Source()
    :
    source_address_policy{YType::enumeration, "source-address-policy"}
{

    yang_name = "source"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Icmp::Ipv4::Source::~Source()
{
}

bool Icmp::Ipv4::Source::has_data() const
{
    return source_address_policy.is_set;
}

bool Icmp::Ipv4::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address_policy.yfilter);
}

std::string Icmp::Ipv4::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-icmp-cfg:icmp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Icmp::Ipv4::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Icmp::Ipv4::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address_policy.is_set || is_set(source_address_policy.yfilter)) leaf_name_data.push_back(source_address_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Icmp::Ipv4::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Icmp::Ipv4::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Icmp::Ipv4::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address-policy")
    {
        source_address_policy = value;
        source_address_policy.value_namespace = name_space;
        source_address_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Icmp::Ipv4::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address-policy")
    {
        source_address_policy.yfilter = yfilter;
    }
}

bool Icmp::Ipv4::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address-policy")
        return true;
    return false;
}

const Enum::YLeaf SourcePolicy::vrf {1, "vrf"};
const Enum::YLeaf SourcePolicy::rfc {2, "rfc"};


}
}

