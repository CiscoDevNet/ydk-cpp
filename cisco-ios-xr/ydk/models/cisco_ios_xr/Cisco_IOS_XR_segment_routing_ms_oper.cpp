
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_segment_routing_ms_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_segment_routing_ms_oper {

StandbySrms::StandbySrms()
    :
    mapping(std::make_shared<StandbySrms::Mapping>())
    , policy(std::make_shared<StandbySrms::Policy>())
{
    mapping->parent = this;
    policy->parent = this;

    yang_name = "standby-srms"; yang_parent_name = "Cisco-IOS-XR-segment-routing-ms-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

StandbySrms::~StandbySrms()
{
}

bool StandbySrms::has_data() const
{
    if (is_presence_container) return true;
    return (mapping !=  nullptr && mapping->has_data())
	|| (policy !=  nullptr && policy->has_data());
}

bool StandbySrms::has_operation() const
{
    return is_set(yfilter)
	|| (mapping !=  nullptr && mapping->has_operation())
	|| (policy !=  nullptr && policy->has_operation());
}

std::string StandbySrms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<StandbySrms::Mapping>();
        }
        return mapping;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<StandbySrms::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mapping != nullptr)
    {
        _children["mapping"] = mapping;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    return _children;
}

void StandbySrms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StandbySrms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> StandbySrms::clone_ptr() const
{
    return std::make_shared<StandbySrms>();
}

std::string StandbySrms::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string StandbySrms::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function StandbySrms::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> StandbySrms::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool StandbySrms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping" || name == "policy")
        return true;
    return false;
}

StandbySrms::Mapping::Mapping()
    :
    mapping_ipv4(std::make_shared<StandbySrms::Mapping::MappingIpv4>())
    , mapping_ipv6(std::make_shared<StandbySrms::Mapping::MappingIpv6>())
{
    mapping_ipv4->parent = this;
    mapping_ipv6->parent = this;

    yang_name = "mapping"; yang_parent_name = "standby-srms"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Mapping::~Mapping()
{
}

bool StandbySrms::Mapping::has_data() const
{
    if (is_presence_container) return true;
    return (mapping_ipv4 !=  nullptr && mapping_ipv4->has_data())
	|| (mapping_ipv6 !=  nullptr && mapping_ipv6->has_data());
}

bool StandbySrms::Mapping::has_operation() const
{
    return is_set(yfilter)
	|| (mapping_ipv4 !=  nullptr && mapping_ipv4->has_operation())
	|| (mapping_ipv6 !=  nullptr && mapping_ipv6->has_operation());
}

std::string StandbySrms::Mapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Mapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-ipv4")
    {
        if(mapping_ipv4 == nullptr)
        {
            mapping_ipv4 = std::make_shared<StandbySrms::Mapping::MappingIpv4>();
        }
        return mapping_ipv4;
    }

    if(child_yang_name == "mapping-ipv6")
    {
        if(mapping_ipv6 == nullptr)
        {
            mapping_ipv6 = std::make_shared<StandbySrms::Mapping::MappingIpv6>();
        }
        return mapping_ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mapping_ipv4 != nullptr)
    {
        _children["mapping-ipv4"] = mapping_ipv4;
    }

    if(mapping_ipv6 != nullptr)
    {
        _children["mapping-ipv6"] = mapping_ipv6;
    }

    return _children;
}

void StandbySrms::Mapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StandbySrms::Mapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool StandbySrms::Mapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-ipv4" || name == "mapping-ipv6")
        return true;
    return false;
}

StandbySrms::Mapping::MappingIpv4::MappingIpv4()
    :
    mapping_mi(this, {})
{

    yang_name = "mapping-ipv4"; yang_parent_name = "mapping"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Mapping::MappingIpv4::~MappingIpv4()
{
}

bool StandbySrms::Mapping::MappingIpv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mapping_mi.len(); index++)
    {
        if(mapping_mi[index]->has_data())
            return true;
    }
    return false;
}

bool StandbySrms::Mapping::MappingIpv4::has_operation() const
{
    for (std::size_t index=0; index<mapping_mi.len(); index++)
    {
        if(mapping_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string StandbySrms::Mapping::MappingIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Mapping::MappingIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Mapping::MappingIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Mapping::MappingIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-mi")
    {
        auto ent_ = std::make_shared<StandbySrms::Mapping::MappingIpv4::MappingMi>();
        ent_->parent = this;
        mapping_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Mapping::MappingIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mapping_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void StandbySrms::Mapping::MappingIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StandbySrms::Mapping::MappingIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool StandbySrms::Mapping::MappingIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-mi")
        return true;
    return false;
}

StandbySrms::Mapping::MappingIpv4::MappingMi::MappingMi()
    :
    ip{YType::str, "ip"},
    prefix{YType::uint32, "prefix"},
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
    addr(std::make_shared<StandbySrms::Mapping::MappingIpv4::MappingMi::Addr>())
{
    addr->parent = this;

    yang_name = "mapping-mi"; yang_parent_name = "mapping-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Mapping::MappingIpv4::MappingMi::~MappingMi()
{
}

bool StandbySrms::Mapping::MappingIpv4::MappingMi::has_data() const
{
    if (is_presence_container) return true;
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

bool StandbySrms::Mapping::MappingIpv4::MappingMi::has_operation() const
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

std::string StandbySrms::Mapping::MappingIpv4::MappingMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/mapping/mapping-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Mapping::MappingIpv4::MappingMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-mi";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Mapping::MappingIpv4::MappingMi::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> StandbySrms::Mapping::MappingIpv4::MappingMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<StandbySrms::Mapping::MappingIpv4::MappingMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Mapping::MappingIpv4::MappingMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void StandbySrms::Mapping::MappingIpv4::MappingMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Mapping::MappingIpv4::MappingMi::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Mapping::MappingIpv4::MappingMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "ip" || name == "prefix" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "mapping-mi"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::~Addr()
{
}

bool StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/mapping/mapping-ipv4/mapping-mi/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Mapping::MappingIpv4::MappingMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

StandbySrms::Mapping::MappingIpv6::MappingIpv6()
    :
    mapping_mi(this, {})
{

    yang_name = "mapping-ipv6"; yang_parent_name = "mapping"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Mapping::MappingIpv6::~MappingIpv6()
{
}

bool StandbySrms::Mapping::MappingIpv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mapping_mi.len(); index++)
    {
        if(mapping_mi[index]->has_data())
            return true;
    }
    return false;
}

bool StandbySrms::Mapping::MappingIpv6::has_operation() const
{
    for (std::size_t index=0; index<mapping_mi.len(); index++)
    {
        if(mapping_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string StandbySrms::Mapping::MappingIpv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Mapping::MappingIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Mapping::MappingIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Mapping::MappingIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-mi")
    {
        auto ent_ = std::make_shared<StandbySrms::Mapping::MappingIpv6::MappingMi>();
        ent_->parent = this;
        mapping_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Mapping::MappingIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mapping_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void StandbySrms::Mapping::MappingIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StandbySrms::Mapping::MappingIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool StandbySrms::Mapping::MappingIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping-mi")
        return true;
    return false;
}

StandbySrms::Mapping::MappingIpv6::MappingMi::MappingMi()
    :
    ip{YType::str, "ip"},
    prefix{YType::uint32, "prefix"},
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
    addr(std::make_shared<StandbySrms::Mapping::MappingIpv6::MappingMi::Addr>())
{
    addr->parent = this;

    yang_name = "mapping-mi"; yang_parent_name = "mapping-ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Mapping::MappingIpv6::MappingMi::~MappingMi()
{
}

bool StandbySrms::Mapping::MappingIpv6::MappingMi::has_data() const
{
    if (is_presence_container) return true;
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

bool StandbySrms::Mapping::MappingIpv6::MappingMi::has_operation() const
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

std::string StandbySrms::Mapping::MappingIpv6::MappingMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/mapping/mapping-ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Mapping::MappingIpv6::MappingMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-mi";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Mapping::MappingIpv6::MappingMi::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> StandbySrms::Mapping::MappingIpv6::MappingMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<StandbySrms::Mapping::MappingIpv6::MappingMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Mapping::MappingIpv6::MappingMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void StandbySrms::Mapping::MappingIpv6::MappingMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Mapping::MappingIpv6::MappingMi::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Mapping::MappingIpv6::MappingMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "ip" || name == "prefix" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "mapping-mi"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::~Addr()
{
}

bool StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/mapping/mapping-ipv6/mapping-mi/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Mapping::MappingIpv6::MappingMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

StandbySrms::Policy::Policy()
    :
    policy_ipv4(std::make_shared<StandbySrms::Policy::PolicyIpv4>())
    , policy_ipv6(std::make_shared<StandbySrms::Policy::PolicyIpv6>())
{
    policy_ipv4->parent = this;
    policy_ipv6->parent = this;

    yang_name = "policy"; yang_parent_name = "standby-srms"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Policy::~Policy()
{
}

bool StandbySrms::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_data());
}

bool StandbySrms::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_operation());
}

std::string StandbySrms::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 == nullptr)
        {
            policy_ipv4 = std::make_shared<StandbySrms::Policy::PolicyIpv4>();
        }
        return policy_ipv4;
    }

    if(child_yang_name == "policy-ipv6")
    {
        if(policy_ipv6 == nullptr)
        {
            policy_ipv6 = std::make_shared<StandbySrms::Policy::PolicyIpv6>();
        }
        return policy_ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_ipv4 != nullptr)
    {
        _children["policy-ipv4"] = policy_ipv4;
    }

    if(policy_ipv6 != nullptr)
    {
        _children["policy-ipv6"] = policy_ipv6;
    }

    return _children;
}

void StandbySrms::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StandbySrms::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool StandbySrms::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4" || name == "policy-ipv6")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_backup(std::make_shared<StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup>())
    , policy_ipv4_active(std::make_shared<StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active>())
{
    policy_ipv4_backup->parent = this;
    policy_ipv4_active->parent = this;

    yang_name = "policy-ipv4"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool StandbySrms::Policy::PolicyIpv4::has_data() const
{
    if (is_presence_container) return true;
    return (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data())
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data());
}

bool StandbySrms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation())
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation());
}

std::string StandbySrms::Policy::PolicyIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup == nullptr)
        {
            policy_ipv4_backup = std::make_shared<StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup>();
        }
        return policy_ipv4_backup;
    }

    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active == nullptr)
        {
            policy_ipv4_active = std::make_shared<StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active>();
        }
        return policy_ipv4_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_ipv4_backup != nullptr)
    {
        _children["policy-ipv4-backup"] = policy_ipv4_backup;
    }

    if(policy_ipv4_active != nullptr)
    {
        _children["policy-ipv4-active"] = policy_ipv4_active;
    }

    return _children;
}

void StandbySrms::Policy::PolicyIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StandbySrms::Policy::PolicyIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool StandbySrms::Policy::PolicyIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4-backup" || name == "policy-ipv4-active")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/policy/policy-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
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
    addr(std::make_shared<StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
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

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
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

std::string StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/policy/policy-ipv4/policy-ipv4-backup/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/policy/policy-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
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
    addr(std::make_shared<StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
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

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
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

std::string StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/policy/policy-ipv4/policy-ipv4-active/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6()
    :
    policy_ipv6_backup(std::make_shared<StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup>())
    , policy_ipv6_active(std::make_shared<StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active>())
{
    policy_ipv6_backup->parent = this;
    policy_ipv6_active->parent = this;

    yang_name = "policy-ipv6"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Policy::PolicyIpv6::~PolicyIpv6()
{
}

bool StandbySrms::Policy::PolicyIpv6::has_data() const
{
    if (is_presence_container) return true;
    return (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_data())
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_data());
}

bool StandbySrms::Policy::PolicyIpv6::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_operation())
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_operation());
}

std::string StandbySrms::Policy::PolicyIpv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Policy::PolicyIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv6-backup")
    {
        if(policy_ipv6_backup == nullptr)
        {
            policy_ipv6_backup = std::make_shared<StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup>();
        }
        return policy_ipv6_backup;
    }

    if(child_yang_name == "policy-ipv6-active")
    {
        if(policy_ipv6_active == nullptr)
        {
            policy_ipv6_active = std::make_shared<StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active>();
        }
        return policy_ipv6_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_ipv6_backup != nullptr)
    {
        _children["policy-ipv6-backup"] = policy_ipv6_backup;
    }

    if(policy_ipv6_active != nullptr)
    {
        _children["policy-ipv6-active"] = policy_ipv6_active;
    }

    return _children;
}

void StandbySrms::Policy::PolicyIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StandbySrms::Policy::PolicyIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool StandbySrms::Policy::PolicyIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv6-backup" || name == "policy-ipv6-active")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyIpv6Backup()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv6-backup"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::~PolicyIpv6Backup()
{
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/policy/policy-ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::PolicyMi()
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
    addr(std::make_shared<StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-backup"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::~PolicyMi()
{
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
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

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_operation() const
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

std::string StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/policy/policy-ipv6/policy-ipv6-backup/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::~Addr()
{
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyIpv6Active()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv6-active"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::~PolicyIpv6Active()
{
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/policy/policy-ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::PolicyMi()
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
    addr(std::make_shared<StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-active"; is_top_level_class = false; has_list_ancestor = false; 
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::~PolicyMi()
{
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
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

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_operation() const
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

std::string StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:standby-srms/policy/policy-ipv6/policy-ipv6-active/" << get_segment_path();
    return path_buffer.str();
}

std::string StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix-xr" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::~Addr()
{
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool StandbySrms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Srms::Srms()
    :
    adjacency_sid(std::make_shared<Srms::AdjacencySid>())
    , mapping(std::make_shared<Srms::Mapping>())
    , policy(std::make_shared<Srms::Policy>())
{
    adjacency_sid->parent = this;
    mapping->parent = this;
    policy->parent = this;

    yang_name = "srms"; yang_parent_name = "Cisco-IOS-XR-segment-routing-ms-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Srms::~Srms()
{
}

bool Srms::has_data() const
{
    if (is_presence_container) return true;
    return (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (mapping !=  nullptr && mapping->has_data())
	|| (policy !=  nullptr && policy->has_data());
}

bool Srms::has_operation() const
{
    return is_set(yfilter)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
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

std::shared_ptr<ydk::Entity> Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid == nullptr)
        {
            adjacency_sid = std::make_shared<Srms::AdjacencySid>();
        }
        return adjacency_sid;
    }

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

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_sid != nullptr)
    {
        _children["adjacency-sid"] = adjacency_sid;
    }

    if(mapping != nullptr)
    {
        _children["mapping"] = mapping;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    return _children;
}

void Srms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Srms::clone_ptr() const
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
    if(name == "adjacency-sid" || name == "mapping" || name == "policy")
        return true;
    return false;
}

Srms::AdjacencySid::AdjacencySid()
    :
    l2_adjacency(std::make_shared<Srms::AdjacencySid::L2Adjacency>())
{
    l2_adjacency->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "srms"; is_top_level_class = false; has_list_ancestor = false; 
}

Srms::AdjacencySid::~AdjacencySid()
{
}

bool Srms::AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return (l2_adjacency !=  nullptr && l2_adjacency->has_data());
}

bool Srms::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| (l2_adjacency !=  nullptr && l2_adjacency->has_operation());
}

std::string Srms::AdjacencySid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srms::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-adjacency")
    {
        if(l2_adjacency == nullptr)
        {
            l2_adjacency = std::make_shared<Srms::AdjacencySid::L2Adjacency>();
        }
        return l2_adjacency;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_adjacency != nullptr)
    {
        _children["l2-adjacency"] = l2_adjacency;
    }

    return _children;
}

void Srms::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-adjacency")
        return true;
    return false;
}

Srms::AdjacencySid::L2Adjacency::L2Adjacency()
    :
    interfaces(std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "l2-adjacency"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = false; 
}

Srms::AdjacencySid::L2Adjacency::~L2Adjacency()
{
}

bool Srms::AdjacencySid::L2Adjacency::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool Srms::AdjacencySid::L2Adjacency::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Srms::AdjacencySid::L2Adjacency::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/adjacency-sid/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::AdjacencySid::L2Adjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::AdjacencySid::L2Adjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srms::AdjacencySid::L2Adjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::AdjacencySid::L2Adjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Srms::AdjacencySid::L2Adjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::AdjacencySid::L2Adjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::AdjacencySid::L2Adjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "l2-adjacency"; is_top_level_class = false; has_list_ancestor = false; 
}

Srms::AdjacencySid::L2Adjacency::Interfaces::~Interfaces()
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srms::AdjacencySid::L2Adjacency::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/adjacency-sid/l2-adjacency/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::AdjacencySid::L2Adjacency::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::AdjacencySid::L2Adjacency::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srms::AdjacencySid::L2Adjacency::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::AdjacencySid::L2Adjacency::Interfaces::get_children() const
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

void Srms::AdjacencySid::L2Adjacency::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    address_family(std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::~Interface()
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (address_family !=  nullptr && address_family->has_data());
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/adjacency-sid/l2-adjacency/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    return _children;
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "interface-name")
        return true;
    return false;
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::AddressFamily()
    :
    ipv4(std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4>())
    , ipv6(std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "address-family"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::~AddressFamily()
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::Ipv4()
    :
    sid_record(this, {})
{

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::~Ipv4()
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sid_record.len(); index++)
    {
        if(sid_record[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<sid_record.len(); index++)
    {
        if(sid_record[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-record")
    {
        auto ent_ = std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord>();
        ent_->parent = this;
        sid_record.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sid_record.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-record")
        return true;
    return false;
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::SidRecord()
    :
    sid_type{YType::enumeration, "sid-type"},
    sid_value{YType::uint32, "sid-value"},
    interface_name{YType::str, "interface-name"},
    sid_value_xr{YType::uint32, "sid-value-xr"},
    sid_type_xr{YType::uint32, "sid-type-xr"},
    address_family{YType::uint32, "address-family"},
    has_nexthop{YType::boolean, "has-nexthop"},
    interface_count{YType::int32, "interface-count"},
    interface_delete_count{YType::int32, "interface-delete-count"}
        ,
    nexthop_address(std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress>())
{
    nexthop_address->parent = this;

    yang_name = "sid-record"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::~SidRecord()
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| sid_value.is_set
	|| interface_name.is_set
	|| sid_value_xr.is_set
	|| sid_type_xr.is_set
	|| address_family.is_set
	|| has_nexthop.is_set
	|| interface_count.is_set
	|| interface_delete_count.is_set
	|| (nexthop_address !=  nullptr && nexthop_address->has_data());
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sid_value_xr.yfilter)
	|| ydk::is_set(sid_type_xr.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(has_nexthop.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(interface_delete_count.yfilter)
	|| (nexthop_address !=  nullptr && nexthop_address->has_operation());
}

std::string Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-record";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sid_value_xr.is_set || is_set(sid_value_xr.yfilter)) leaf_name_data.push_back(sid_value_xr.get_name_leafdata());
    if (sid_type_xr.is_set || is_set(sid_type_xr.yfilter)) leaf_name_data.push_back(sid_type_xr.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (has_nexthop.is_set || is_set(has_nexthop.yfilter)) leaf_name_data.push_back(has_nexthop.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (interface_delete_count.is_set || is_set(interface_delete_count.yfilter)) leaf_name_data.push_back(interface_delete_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop-address")
    {
        if(nexthop_address == nullptr)
        {
            nexthop_address = std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress>();
        }
        return nexthop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop_address != nullptr)
    {
        _children["nexthop-address"] = nexthop_address;
    }

    return _children;
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-value-xr")
    {
        sid_value_xr = value;
        sid_value_xr.value_namespace = name_space;
        sid_value_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type-xr")
    {
        sid_type_xr = value;
        sid_type_xr.value_namespace = name_space;
        sid_type_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-nexthop")
    {
        has_nexthop = value;
        has_nexthop.value_namespace = name_space;
        has_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-delete-count")
    {
        interface_delete_count = value;
        interface_delete_count.value_namespace = name_space;
        interface_delete_count.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sid-value-xr")
    {
        sid_value_xr.yfilter = yfilter;
    }
    if(value_path == "sid-type-xr")
    {
        sid_type_xr.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "has-nexthop")
    {
        has_nexthop.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "interface-delete-count")
    {
        interface_delete_count.yfilter = yfilter;
    }
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop-address" || name == "sid-type" || name == "sid-value" || name == "interface-name" || name == "sid-value-xr" || name == "sid-type-xr" || name == "address-family" || name == "has-nexthop" || name == "interface-count" || name == "interface-delete-count")
        return true;
    return false;
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress::NexthopAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "nexthop-address"; yang_parent_name = "sid-record"; is_top_level_class = false; has_list_ancestor = true; 
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress::~NexthopAddress()
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv4::SidRecord::NexthopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::Ipv6()
    :
    sid_record(this, {})
{

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::~Ipv6()
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sid_record.len(); index++)
    {
        if(sid_record[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<sid_record.len(); index++)
    {
        if(sid_record[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-record")
    {
        auto ent_ = std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord>();
        ent_->parent = this;
        sid_record.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sid_record.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-record")
        return true;
    return false;
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::SidRecord()
    :
    sid_type{YType::enumeration, "sid-type"},
    sid_value{YType::uint32, "sid-value"},
    interface_name{YType::str, "interface-name"},
    sid_value_xr{YType::uint32, "sid-value-xr"},
    sid_type_xr{YType::uint32, "sid-type-xr"},
    address_family{YType::uint32, "address-family"},
    has_nexthop{YType::boolean, "has-nexthop"},
    interface_count{YType::int32, "interface-count"},
    interface_delete_count{YType::int32, "interface-delete-count"}
        ,
    nexthop_address(std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress>())
{
    nexthop_address->parent = this;

    yang_name = "sid-record"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::~SidRecord()
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| sid_value.is_set
	|| interface_name.is_set
	|| sid_value_xr.is_set
	|| sid_type_xr.is_set
	|| address_family.is_set
	|| has_nexthop.is_set
	|| interface_count.is_set
	|| interface_delete_count.is_set
	|| (nexthop_address !=  nullptr && nexthop_address->has_data());
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(sid_value.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sid_value_xr.yfilter)
	|| ydk::is_set(sid_type_xr.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(has_nexthop.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(interface_delete_count.yfilter)
	|| (nexthop_address !=  nullptr && nexthop_address->has_operation());
}

std::string Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-record";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sid_value_xr.is_set || is_set(sid_value_xr.yfilter)) leaf_name_data.push_back(sid_value_xr.get_name_leafdata());
    if (sid_type_xr.is_set || is_set(sid_type_xr.yfilter)) leaf_name_data.push_back(sid_type_xr.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (has_nexthop.is_set || is_set(has_nexthop.yfilter)) leaf_name_data.push_back(has_nexthop.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (interface_delete_count.is_set || is_set(interface_delete_count.yfilter)) leaf_name_data.push_back(interface_delete_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop-address")
    {
        if(nexthop_address == nullptr)
        {
            nexthop_address = std::make_shared<Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress>();
        }
        return nexthop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop_address != nullptr)
    {
        _children["nexthop-address"] = nexthop_address;
    }

    return _children;
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-value-xr")
    {
        sid_value_xr = value;
        sid_value_xr.value_namespace = name_space;
        sid_value_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type-xr")
    {
        sid_type_xr = value;
        sid_type_xr.value_namespace = name_space;
        sid_type_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-nexthop")
    {
        has_nexthop = value;
        has_nexthop.value_namespace = name_space;
        has_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-delete-count")
    {
        interface_delete_count = value;
        interface_delete_count.value_namespace = name_space;
        interface_delete_count.value_namespace_prefix = name_space_prefix;
    }
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sid-value-xr")
    {
        sid_value_xr.yfilter = yfilter;
    }
    if(value_path == "sid-type-xr")
    {
        sid_type_xr.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "has-nexthop")
    {
        has_nexthop.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "interface-delete-count")
    {
        interface_delete_count.yfilter = yfilter;
    }
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop-address" || name == "sid-type" || name == "sid-value" || name == "interface-name" || name == "sid-value-xr" || name == "sid-type-xr" || name == "address-family" || name == "has-nexthop" || name == "interface-count" || name == "interface-delete-count")
        return true;
    return false;
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress::NexthopAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "nexthop-address"; yang_parent_name = "sid-record"; is_top_level_class = false; has_list_ancestor = true; 
}

Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress::~NexthopAddress()
{
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Srms::AdjacencySid::L2Adjacency::Interfaces::Interface::AddressFamily::Ipv6::SidRecord::NexthopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Srms::Mapping::Mapping()
    :
    mapping_ipv4(std::make_shared<Srms::Mapping::MappingIpv4>())
    , mapping_ipv6(std::make_shared<Srms::Mapping::MappingIpv6>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Srms::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mapping_ipv4 != nullptr)
    {
        _children["mapping-ipv4"] = mapping_ipv4;
    }

    if(mapping_ipv6 != nullptr)
    {
        _children["mapping-ipv6"] = mapping_ipv6;
    }

    return _children;
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
    :
    mapping_mi(this, {})
{

    yang_name = "mapping-ipv4"; yang_parent_name = "mapping"; is_top_level_class = false; has_list_ancestor = false; 
}

Srms::Mapping::MappingIpv4::~MappingIpv4()
{
}

bool Srms::Mapping::MappingIpv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mapping_mi.len(); index++)
    {
        if(mapping_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Mapping::MappingIpv4::has_operation() const
{
    for (std::size_t index=0; index<mapping_mi.len(); index++)
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

std::shared_ptr<ydk::Entity> Srms::Mapping::MappingIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-mi")
    {
        auto ent_ = std::make_shared<Srms::Mapping::MappingIpv4::MappingMi>();
        ent_->parent = this;
        mapping_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Mapping::MappingIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mapping_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    prefix{YType::uint32, "prefix"},
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
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
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

std::shared_ptr<ydk::Entity> Srms::Mapping::MappingIpv4::MappingMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Mapping::MappingIpv4::MappingMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Srms::Mapping::MappingIpv4::MappingMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Mapping::MappingIpv4::MappingMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    mapping_mi(this, {})
{

    yang_name = "mapping-ipv6"; yang_parent_name = "mapping"; is_top_level_class = false; has_list_ancestor = false; 
}

Srms::Mapping::MappingIpv6::~MappingIpv6()
{
}

bool Srms::Mapping::MappingIpv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mapping_mi.len(); index++)
    {
        if(mapping_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Mapping::MappingIpv6::has_operation() const
{
    for (std::size_t index=0; index<mapping_mi.len(); index++)
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

std::shared_ptr<ydk::Entity> Srms::Mapping::MappingIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping-mi")
    {
        auto ent_ = std::make_shared<Srms::Mapping::MappingIpv6::MappingMi>();
        ent_->parent = this;
        mapping_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Mapping::MappingIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mapping_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    prefix{YType::uint32, "prefix"},
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
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
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

std::shared_ptr<ydk::Entity> Srms::Mapping::MappingIpv6::MappingMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Mapping::MappingIpv6::MappingMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Srms::Mapping::MappingIpv6::MappingMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Mapping::MappingIpv6::MappingMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , policy_ipv6(std::make_shared<Srms::Policy::PolicyIpv6>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_ipv4 != nullptr)
    {
        _children["policy-ipv4"] = policy_ipv4;
    }

    if(policy_ipv6 != nullptr)
    {
        _children["policy-ipv6"] = policy_ipv6;
    }

    return _children;
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
    , policy_ipv4_active(std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_ipv4_backup != nullptr)
    {
        _children["policy-ipv4-backup"] = policy_ipv4_backup;
    }

    if(policy_ipv4_active != nullptr)
    {
        _children["policy-ipv4-active"] = policy_ipv4_active;
    }

    return _children;
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
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , policy_ipv6_active(std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Active>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_ipv6_backup != nullptr)
    {
        _children["policy-ipv6-backup"] = policy_ipv6_backup;
    }

    if(policy_ipv6_active != nullptr)
    {
        _children["policy-ipv6-active"] = policy_ipv6_active;
    }

    return _children;
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
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv6-backup"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::~PolicyIpv6Backup()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv6-active"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::~PolicyIpv6Active()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Srlb::Srlb()
    :
    srlb_inconsistency(std::make_shared<Srlb::SrlbInconsistency>())
{
    srlb_inconsistency->parent = this;

    yang_name = "srlb"; yang_parent_name = "Cisco-IOS-XR-segment-routing-ms-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Srlb::~Srlb()
{
}

bool Srlb::has_data() const
{
    if (is_presence_container) return true;
    return (srlb_inconsistency !=  nullptr && srlb_inconsistency->has_data());
}

bool Srlb::has_operation() const
{
    return is_set(yfilter)
	|| (srlb_inconsistency !=  nullptr && srlb_inconsistency->has_operation());
}

std::string Srlb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srlb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srlb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlb-inconsistency")
    {
        if(srlb_inconsistency == nullptr)
        {
            srlb_inconsistency = std::make_shared<Srlb::SrlbInconsistency>();
        }
        return srlb_inconsistency;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srlb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srlb_inconsistency != nullptr)
    {
        _children["srlb-inconsistency"] = srlb_inconsistency;
    }

    return _children;
}

void Srlb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Srlb::clone_ptr() const
{
    return std::make_shared<Srlb>();
}

std::string Srlb::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Srlb::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Srlb::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Srlb::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Srlb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlb-inconsistency")
        return true;
    return false;
}

Srlb::SrlbInconsistency::SrlbInconsistency()
    :
    start_srlb_range{YType::uint32, "start-srlb-range"},
    end_srlb_range{YType::uint32, "end-srlb-range"}
{

    yang_name = "srlb-inconsistency"; yang_parent_name = "srlb"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlb::SrlbInconsistency::~SrlbInconsistency()
{
}

bool Srlb::SrlbInconsistency::has_data() const
{
    if (is_presence_container) return true;
    return start_srlb_range.is_set
	|| end_srlb_range.is_set;
}

bool Srlb::SrlbInconsistency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_srlb_range.yfilter)
	|| ydk::is_set(end_srlb_range.yfilter);
}

std::string Srlb::SrlbInconsistency::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srlb/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlb::SrlbInconsistency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlb-inconsistency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlb::SrlbInconsistency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_srlb_range.is_set || is_set(start_srlb_range.yfilter)) leaf_name_data.push_back(start_srlb_range.get_name_leafdata());
    if (end_srlb_range.is_set || is_set(end_srlb_range.yfilter)) leaf_name_data.push_back(end_srlb_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srlb::SrlbInconsistency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srlb::SrlbInconsistency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srlb::SrlbInconsistency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-srlb-range")
    {
        start_srlb_range = value;
        start_srlb_range.value_namespace = name_space;
        start_srlb_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-srlb-range")
    {
        end_srlb_range = value;
        end_srlb_range.value_namespace = name_space;
        end_srlb_range.value_namespace_prefix = name_space_prefix;
    }
}

void Srlb::SrlbInconsistency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-srlb-range")
    {
        start_srlb_range.yfilter = yfilter;
    }
    if(value_path == "end-srlb-range")
    {
        end_srlb_range.yfilter = yfilter;
    }
}

bool Srlb::SrlbInconsistency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-srlb-range" || name == "end-srlb-range")
        return true;
    return false;
}

const Enum::YLeaf SidTypeEnum::absolute {1, "absolute"};
const Enum::YLeaf SidTypeEnum::index_ {2, "index"};

const Enum::YLeaf SrmsMiFlagEB::false_ {0, "false"};
const Enum::YLeaf SrmsMiFlagEB::true_ {1, "true"};

const Enum::YLeaf SrmsMiAfEB::none {0, "none"};
const Enum::YLeaf SrmsMiAfEB::ipv4 {1, "ipv4"};
const Enum::YLeaf SrmsMiAfEB::ipv6 {2, "ipv6"};

const Enum::YLeaf SrmsMiSrcEB::none {0, "none"};
const Enum::YLeaf SrmsMiSrcEB::local {1, "local"};
const Enum::YLeaf SrmsMiSrcEB::remote {2, "remote"};

const Enum::YLeaf SrmsAf::none {0, "none"};
const Enum::YLeaf SrmsAf::ipv4 {1, "ipv4"};
const Enum::YLeaf SrmsAf::ipv6 {2, "ipv6"};


}
}

